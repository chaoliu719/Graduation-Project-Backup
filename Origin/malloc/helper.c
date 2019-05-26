#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>
#include "helper.h"

/*************************************
 * Some miscellaneous helper routines
 ************************************/

extern int verbose;        /* global flag for verbose output */
extern int errors;  /* number of errs found when running student malloc */
extern char msg[MAXLINE];      /* for whenever we need to compose an error message */

/*
 * printresults - prints a performance summary for some malloc package
 */
void printresults(int n, stats_t *stats) 
{
    int i;
    double secs = 0;
    double ops = 0;
    double util = 0;

    /* Print the individual results for each trace */
    printf("%5s%7s %5s%8s%10s%7s\n", 
	   "trace", " valid", "util", "ops", "secs", "Kops");
    for (i=0; i < n; i++) {
	if (stats[i].valid) {
	    printf("%2d%10s%5.0f%%%8.0f%10.6f%7.0f\n", 
		   i,
		   "yes",
		   stats[i].util*100.0,
		   stats[i].ops,
		   stats[i].secs,
		   (stats[i].ops/1e3)/stats[i].secs);
	    secs += stats[i].secs;
	    ops += stats[i].ops;
	    util += stats[i].util;
	}
	else {
	    printf("%2d%10s%6s%8s%10s%7s\n", 
		   i,
		   "no",
		   "-",
		   "-",
		   "-",
		   "-");
	}
    }

    /* Print the aggregate results for the set of traces */
    if (errors == 0) {
	printf("%12s%5.0f%%%8.0f%10.6f%7.0f\n", 
	       "Total       ",
	       (util/n)*100.0,
	       ops, 
	       secs,
	       (ops/1e3)/secs);
    }
    else {
	printf("%12s%6s%8s%10s%7s\n", 
	       "Total       ",
	       "-", 
	       "-", 
	       "-", 
	       "-");
    }

}

/* 
 * app_error - Report an arbitrary application error
 */
void app_error(char *msg) 
{
    printf("%s\n", msg);
    exit(1);
}

/* 
 * unix_error - Report a Unix-style error
 */
void unix_error(char *msg) 
{
    printf("%s: %s\n", msg, strerror(errno));
    exit(1);
}

/*
 * malloc_error - Report an error returned by the mm_malloc package
 */
void malloc_error(int tracenum, int opnum, char *msg)
{
    errors++;
    printf("ERROR [trace %d, line %d]: %s\n", tracenum, LINENUM(opnum), msg);
}

/* 
 * usage - Explain the command line arguments
 */
void usage(void) 
{
    fprintf(stderr, "Usage: mdriver [-hvVal] [-f <file>] [-t <dir>]\n");
    fprintf(stderr, "Options\n");
    fprintf(stderr, "\t-a         Don't check the team structure.\n");
    fprintf(stderr, "\t-f <file>  Use <file> as the trace file.\n");
    fprintf(stderr, "\t-g         Generate summary info for autograder.\n");
    fprintf(stderr, "\t-h         Print this message.\n");
    fprintf(stderr, "\t-l         Run libc malloc as well.\n");
    fprintf(stderr, "\t-t <dir>   Directory to find default traces.\n");
    fprintf(stderr, "\t-v         Print per-trace performance breakdowns.\n");
    fprintf(stderr, "\t-V         Print additional debug info.\n");
}
