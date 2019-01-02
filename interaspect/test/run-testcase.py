#!/usr/bin/env python

import errno
import getopt
import os
import re
import shutil
import subprocess
import sys
import tempfile

from xml.sax import handler
from xml.sax import make_parser
from xml.sax.handler import feature_namespaces

gcc_path = 'gcc'
gcc_interaspect_lib = None
gcc_interaspect_src = None
tests_dir = None
verbose = False

# Note that \ _must_ be first in this list, or else \s added for the
# purpose of escaping will themselves get escaped.
BASH_ESCAPED_CHARS = """\ *~"&`$';!|#<>"""

def escapeBashArg(arg):
    for char in BASH_ESCAPED_CHARS:
        arg = arg.replace(char, "\\" + char)
    return arg

# A whole host of specialized exceptions for things that can go
# horribly wrong with the input XML test case.
class XMLDataException(Exception):
    def getMessage(self):
        return "Fatal error reading test case description";

class MissingAttr(XMLDataException):
    def __init__(self, element, attr):
        self.element = element
        self.attr = attr

    def getMessage(self):
        return ("Element <" + self.element 
                + "> missing required attribute: " + self.attr);

class MisplacedElement(XMLDataException):
    def __init__(self, element, parent):
        self.element = element
        self.parent = parent

    def getMessage(self):
        return "Element <" + self.element + "> outside of <" + self.parent + ">"

class MisplacedCData(XMLDataException):
    def getMessage(self):
        return "Character data outside of <output> element"

class DuplicateTag(XMLDataException):
    def __init__(self, element, parent):
        self.element = element
        self.parent = parent

    def getMessage(self):
        return "Only one <" + self.element + "> allowed in <" + self.parent + ">"

class BadId(XMLDataException):
    def __init__(self, id_name, val):
        self.id_name = id_name
        self.val = val

    def getMessage(self):
        return ("Invalid reference: No " + self.id_name + " with id "
                + self.val)

# For good measure, some things that can go wrong when we run the test
# program.
class TestProgramException(Exception):
    def getMessage(self):
        return "Unexpected result from test program"

class ErrorReturnCode(TestProgramException):
    def getMessage(self):
        return "Test program returned non-zero exit code"

class MissingOutput(TestProgramException):
    def __init__(self, expected):
        self.expected = expected

    def getMessage(self):
        return "Test program exited early.  Expected output:\n" + self.expected

class WrongOutput(TestProgramException):
    def __init__(self, expected, actual):
        self.expected = expected
        self.actual = actual

    def getMessage(self):
        return ("Test program printed wrong output.  Expected:\n" + self.expected
                + "\nbut got:\n" + self.actual)

class ExtraOutput(TestProgramException):
    def __init__(self, extra):
        self.extra = extra

    def getMessage(self):
        return ("Test program printed unexpected additional output:\n"
                + self.extra)

class NoAutoheader(TestProgramException):
    def getMessage(self):
        return "Test plug-in did not generate an automatic header file."

# A plug-in includes a source file and id.
class Plugin:
    def __init__(self, plugin_id, source):
        self.plugin_id = plugin_id
        self.source = source

# A run has a target source file along with a list of plug-ins that
# should be used when compiling the target and the hooks necessary for
# the target to compile with those plug-ins.  It also has the full
# output that the target is supposed to produce (because of the
# plug-in) when it runs.
class Run:
    def __init__(self, name, target_source, hooks_source):
        self.name = name
        self.target_source = target_source
        self.hooks_source = hooks_source
        self.plugin_list = []
        self.output = ""
        self.prototypes = None

class TestcaseHandler(handler.ContentHandler):
    plugins = {}

    run_list = []
    current_run = None
    current_call_hook = None

    current_cdata = ""
    in_output = False

    def startTestcase(self, attrs):
        self.name = attrs.get('name')
        if self.name is None:
            raise MissingAttr("testcase", "name")

    def startPlugin(self, attrs):
        plugin_id = attrs.get('id')
        if plugin_id is None:
            raise MissingAttr("plugin", "id")

        source = attrs.get('source')
        if source is None:
            raise MissingAttr("plugin", "source")

        self.plugins[plugin_id] = Plugin(plugin_id, source)

    def startRun(self, attrs):
        run_name = attrs.get('name')
        if run_name is None:
            raise MissingAttr("run", "name")

        target_source = attrs.get('target')
        if target_source is None:
            raise MissingAttr("run", "target")

        hooks_source = attrs.get('hooks')
        if hooks_source is None:
            raise MissingAttr("run", "hooks")

        self.current_run = Run(run_name, target_source, hooks_source)

    def endRun(self):
        self.run_list.append(self.current_run)
        self.current_run = None

    def startUsing(self, attrs):
        if self.current_run is None:
            raise MisplacedElement("using", "run")

        plugin_id = attrs.get('plugin')
        if plugin_id is None:
            raise MissingAttr("using", "plugin")

        try:
            plugin = self.plugins[plugin_id]
        except KeyError as e:
            raise BadId("plugin", plugin_id)

        # And the plug-in itself!
        self.current_run.plugin_list.append(plugin)

    def startOutput(self, attrs):
        if (self.current_run is None):
            raise MisplacedElement("output", "run")

        if (self.current_run.output != ""):
            raise DuplicateTag("output", "run")

        # We're only interested in the cdata, which we can't get until
        # the endOutput event.
        self.current_cdata = ""
        self.in_output = True

    def endOutput(self):
        assert self.current_run is not None
        self.current_run.output = self.current_cdata
        self.in_output = False

    def startPrototypes(self, attrs):
        if (self.current_run is None):
            raise MisplacedElement("prototypes", "run")

        if (self.current_run.prototypes is not None):
            raise DuplicateTag("prototypes", "run")

        # We're only interested in the cdata, which we can't get until
        # the endPrototypes event.
        self.current_cdata = ""
        self.in_output = True

    def endPrototypes(self):
        assert self.current_run is not None
        self.current_run.prototypes = self.current_cdata
        self.in_output = False

    # Parsing with SAX is simple but tedious.  There's a start
    # function for each tag and an end function for some tags.  They
    # just stash the data they find into a relevant data structure
    # (after validating that it makes sense).
    def startElement(self, name, attrs):
        if name == 'testcase':
            self.startTestcase(attrs)
        elif name == 'plugin':
            self.startPlugin(attrs)
        elif name == 'run':
            self.startRun(attrs)
        elif name == 'using':
            self.startUsing(attrs)
        elif name == 'output':
            self.startOutput(attrs)
        elif name == 'prototypes':
            self.startPrototypes(attrs)

    def endElement(self, name):
        if name == 'run':
            self.endRun()
        elif name == 'output':
            self.endOutput()
        elif name == 'prototypes':
            self.endPrototypes()

    def characters(self, chars):
        if not self.in_output and re.search(r"\S", chars):
            raise MisplacedCData()

        self.current_cdata += chars

# If the tests_dir is set, prepend the tests_dir directory to the name
# of the source file.
def formatSourceFile(source_file):
    if (tests_dir is not None):
        return '{0:s}/{1:s}'.format(tests_dir, source_file)
    else:
        return source_file

# Run GCC with the given arguments.  On failure, print an appropriate
# error and return False.
# If the compile fails because of an error in the C file, runGCC also
# prints compile_fail_msg.
def runGCC(args, compile_fail_msg):
    # Print the GCC command before running it when verbose mode is on.
    if verbose:
        print escapeBashArg(gcc_path),
        for arg in args:
            print escapeBashArg(arg),
        print

    args = [gcc_path] + args
    try:
        gcc_proc = subprocess.Popen(args, stdout = subprocess.PIPE,
                                    stderr = subprocess.STDOUT)
    except OSError as e:
        if e.errno == errno.ENOENT:
            print "Fatal -- Bad path to GCC:", gcc_path
            return False
        else:
            print "Fatal error launching GCC:"
            print e.strerror
            return False
    (stdoutdata, stderrdata) = gcc_proc.communicate();
    gcc_proc.wait();

    if gcc_proc.returncode != 0:
        print compile_fail_msg
        print stdoutdata
        return False
    elif verbose:
        print stdoutdata

    return True

# Compile and link an InterAspect plug-in!  Several compilation files
# get created in the given working directory.  It is the caller's
# responsibility to delete these files.  No files will be left over in
# other directories, though.
#
# The compiled plug-in file will be named plugin_base_name.so.1.0.0.
#
# On success, compilePlugin returns the path to the final plug-in .so
# file (which will be in working_dir).  On failure, the return value
# is None.
def compilePlugin(working_dir, plugin_id, plugin_base_name, plugin_source):
    plugin_lib_name = '{0:s}/{1:s}.so'.format(working_dir,
                                              plugin_base_name)

    plugin_source = formatSourceFile(plugin_source)
    include_flag = '-I{0:s}/src'.format(gcc_interaspect_src)
    cmd_args = ['-Wall', '-Werror', include_flag, '-fPIC', '-shared',
                '-Wl,-soname,{0:s}.so.1'.format(plugin_base_name), '-o',
                plugin_lib_name, plugin_source, gcc_interaspect_lib]
    result = runGCC(cmd_args,
      'Fatal -- Failed to compile plugin: "{0:s}"'.format(plugin_id))
    if not result:
        return None

    return plugin_lib_name

# Compile the testcase instrumentation target, along with supplied
# hook functions.  Several compilation files get created in the given
# working directory.  It is the caller's responsibility to delete
# these files.  No files will be left over in other directories,
# though.
#
# working_dir: A temporary directory to store intermediate files and
# the resulting executable.
#
# target_source: The C source file for the target program (the program
# that we intend to instrument with the test plug-ins).
#
# hooks_source: The C source file with the advice functions.  This
# source is compiled without any plug-ins.
#
# autoheader_file: The file name where InterAspect should generate its
# header.  This name will be passed to the plug-in, which has the
# option of using it to call aop_write_c_header().
#
# plugin_names: An ordered list of the names of plug-ins that will be
# used when compiling the target plug-in.
#
# plugin_libs: A mapping from plug-in names to the actual .so files.
# There needs to be an entry in this dictionary for each plug-in in
# plugin_names.
#
# On success, compileTestcase returns the path to the final test
# executable (which will be in working_dir).  On failure, the return
# value is None.
def compileTestcase(working_dir, target_source, hooks_source, autoheader_file,
                    plugin_names, plugin_libs):
    hooks_source = formatSourceFile(hooks_source)
    test_include = '-I{0:s}/test'.format(gcc_interaspect_src)
    hook_o_file = working_dir + '/hooks.o'
    cmd_args = ['-Wall', '-Werror', test_include, '-c', '-o', hook_o_file,
                hooks_source]
    result = runGCC(cmd_args, "Fatal -- Failed to compile plug-in hooks:")
    if not result:
        return None

    # Compile the test driver, which has the main function.
    main_c_file = gcc_interaspect_src + '/test/test-driver.c'
    main_o_file = working_dir + '/test-driver.o'
    cmd_args = ['-Wall', '-Werror', '-c', '-o', main_o_file, main_c_file]
    result = runGCC(cmd_args, "Fatal -- Failed to compile test driver:")
    if not result:
        return None

    # Compile the target itself.
    target_source = formatSourceFile(target_source)
    target_o_file = working_dir + '/target.o'
    cmd_args = []
    for name in plugin_names:
        lib = plugin_libs[name];
        assert lib is not None

        # An argument specifying the plug-in to GCC.
        cmd_args += ['-fplugin={0:s}'.format(lib)]

        # An argument specifying the name of the autogenerated header
        # file to the plug-in.
        cmd_args += ['-fplugin-arg-{0:s}-header={1:s}'
                     .format(name, autoheader_file)]

    cmd_args += ['-Wall', '-Werror', '-c', '-o', target_o_file, target_source]
    result = runGCC(cmd_args, "Fatal -- Failed to compile target source:")
    if not result:
        return None

    # Link the final binary
    executable = working_dir + '/test-executable'
    cmd_args = ['-o', executable, hook_o_file, main_o_file, target_o_file]
    result = runGCC(cmd_args, "Fatal -- Failed to link test case:")
    if not result:
        return None

    return executable        

# Check if the output of the test case matches the expected output.
# If it does not, raise an exception with an error message explaining
# the mismatch.
def checkRun(actual_output, expected_output):
    actual_array = actual_output.strip().splitlines()
    expected_array = expected_output.strip().splitlines()

    for i in range(len(expected_array)):
        if (i >= len(actual_array)):
            raise MissingOutput(expected_array[i].strip())

        if (expected_array[i].strip() != actual_array[i].strip()):
            raise WrongOutput(expected_array[i].strip(),
                              actual_array[i].strip())

    assert len(actual_array) >= len(expected_array)
    if (len(actual_array) > len(expected_array)):
        raise ExtraOutput(actual_array[len(expected_array)].strip())

def checkHeader(autoheader_file, expected_prototypes):
    header_output = ""

    try:
        filehandle = None  # So close does not crash when open fails.
        filehandle = open(autoheader_file, 'r')

        # We want to read in all the lines that come after BEGIN
        # PROTOTYPES until we see the #endif the closes the header
        # guard..
        in_prototypes = False
        for line in filehandle:
            if (re.search(r"BEGIN PROTOTYPES", line)):
                in_prototypes = True
                continue
            elif (re.search(r"endif", line)):
                break

            if (in_prototypes):
                header_output += line

    except IOError as e:
        sys.stderr.write('{0:s}: {1:s}\n'.format(autoheader_file, e.strerror))
        raise NoAutoheader()
    finally:
        if (filehandle is not None):
            filehandle.close()

    checkRun(header_output.strip(), expected_prototypes)

# Same as doRun but takes a temporary working directory (to place
# compiled objects) as an input.
def doRunInTempDir(run, tmp_dir):
    print "  Run:", run.name

    # Compile all the plug-ins for this test.
    plugin_names = []
    plugin_libs = {}
    for i in range(len(run.plugin_list)):
        plugin = run.plugin_list[i]
        plugin_base_name = 'test_plugin_{0:d}'.format(i + 1)
        plugin_lib_name = compilePlugin(tmp_dir, plugin.plugin_id,
                                        plugin_base_name, plugin.source)
        if plugin_lib_name is None:
            return False
        plugin_names.append(plugin_base_name)
        plugin_libs[plugin_base_name] = plugin_lib_name

    autoheader_file = tmp_dir + '/autoheader.h'
    test_executable = compileTestcase(tmp_dir, run.target_source,
                                      run.hooks_source, autoheader_file,
                                      plugin_names, plugin_libs)

    if test_executable is None:
        return False

    # Open the compiled test program...
    try:
        test_proc = subprocess.Popen([test_executable],
                                     stdout = subprocess.PIPE)
    except OSError as e:
        sys.stderr.write('Fatal error opening test program: {0:s}\n'
                         .format(e.strerror))
        sys.exit(1)

    # ... and run it.
    (test_output, _) = test_proc.communicate()
    if (test_proc.returncode != 0):
        raise ErrorReturnCode()

    # Check the output
    try:
        checkRun(test_output, run.output)
        if (run.prototypes is not None):
            checkHeader(autoheader_file, run.prototypes)
    except TestProgramException as e:
        print e.getMessage()
        return False

    return True

# Compile the run's target program with all the requested plug-ins
# then run the resulting executable and check that its output is as
# expected.
# Returns True if the run passes.
def doRun(run):
    tmp_dir = tempfile.mkdtemp(prefix='test-out-')
    result = doRunInTempDir(run, tmp_dir)

    # Delete temp directory
    shutil.rmtree(path = tmp_dir, ignore_errors = True)    

    return result

def usage():
    sys.stderr.write(
"""Usage:
  run-testcase.py [options] testcase.xml

Options
  --with-gcc: Path to gcc to compile the tests with
  --with-ia-lib-dir: Directory with InterAspect library file
  --with-ia-src-dir: Directory with InterAspect source
  --with-tests-dir: Directory with test C files (. by default)
""")
    # End function usage()

# Return True if filename exists and is readable.  If it is not, print
# an appropriate error message and return False.
def checkFileReadable(filename):
    try:
        filehandle = open(filename, 'r')
        filehandle.close()
    except IOError as e:
        sys.stderr.write('{0:s}: {1:s}\n'.format(filename, e.strerror))
        return False

    return True

if __name__ == '__main__':
    # Deal with command line arguments
    try:
        long_switches = ["verbose", "with-gcc=", "with-ia-lib-dir=",
                         "with-ia-src-dir=", "with-tests-dir="]
        opts, args = getopt.gnu_getopt(sys.argv[1:], "v", long_switches)
    except getopt.GetoptError:
        usage()
        sys.exit(1)

    for opt, arg in opts:
        if (opt == "--with-gcc"):
            gcc_path = arg
        elif (opt == "--with-ia-lib-dir"):
            gcc_interaspect_lib = arg + '/libinteraspect.a'
        elif (opt == "--with-ia-src-dir"):
            gcc_interaspect_src = arg
        elif (opt == "--with-tests-dir"):
            tests_dir = arg
        elif (opt == "--verbose" or opt == "-v"):
            verbose = True
        else:
            assert(0)

    # Validate args
    if gcc_interaspect_lib is None:
        sys.stderr.write("Must specify --with-ia-lib-dir\n")
        sys.exit(1)
    elif not checkFileReadable(gcc_interaspect_lib):
        sys.exit(1)
    elif gcc_interaspect_src is None:
        sys.stderr.write("Must specify --with-ia-src-dir\n")
        sys.exit(1)
    elif not checkFileReadable('{0:s}/src/aop.h'.format(gcc_interaspect_src)):
        sys.exit(1)

    # There should be exactly one non-option arg: the test case
    if len(args) != 1:
        usage()
        sys.exit(1)
    test_description = args[0]

    parser = make_parser()
    parser.setFeature(feature_namespaces, 0)

    dh = TestcaseHandler()
    parser.setContentHandler(dh)

    try:
        parser.parse(test_description)
    except IOError as e:
        sys.stderr.write('{0:s}: {1:s}\n'.format(test_description, e.strerror))
        sys.exit(1)
    except XMLDataException as e:
        print e.getMessage()
        sys.exit(1)

    print "Testcase:", dh.name
    passed = 0
    for run in dh.run_list:
        if doRun(run):
            passed += 1

    if passed == len(dh.run_list):
        print "All runs passed!"
        sys.exit(0) # Success
    else:
        print ("Testcase failed.  {0:d} out of {1:d} runs passed."
               .format(passed, len(dh.run_list)))
        sys.exit(1) # :-(
