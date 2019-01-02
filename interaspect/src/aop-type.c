/* Copyright (c) 2010 Justin Seyster
   Copyright (c) 2010 Ketan Dixit
   Copyright (c) 2010 Erez Zadok
   Copyright (c) 2010 Stony Brook University
   Copyright (c) 2010 The Research Foundation of SUNY

   This program is free software: you can redistribute it and/or
   modify it under the terms of the GNU General Public License as
   published by the Free Software Foundation, either version 3 of the
   License, or (at your option) any later version.

   This program is distributed in the hope that it will be useful, but
   WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   General Public License for more details.

   Under Section 7 of GPL version 3, you are granted additional
   permissions described in the GCC Runtime Library Exception, version
   3.1, as published by the Free Software Foundation.

   You should have received a copy of the GNU General Public License
   and a copy of the GCC Runtime Library Exception along with this
   program; see the files COPYING and COPYING.RUNTIME respectively.
   If not, see <http://www.gnu.org/licenses/>. */

/* Whether we want them or not (we don't), Autoconf _insists_ on
   defining these.  Since GCC's config.h (which we must include) also
   defines them, we have to undef them here. */
#undef PACKAGE_BUGREPORT
#undef PACKAGE_NAME
#undef PACKAGE_STRING
#undef PACKAGE_TARNAME
#undef PACKAGE_VERSION

#include <locale.h>
#include <stddef.h>

#include <config.h>
#include <system.h>
#include <coretypes.h>
#include <tm.h>
#include <tree.h>
#include <hashtab.h>
#include <toplev.h>

#include "aop.h"
#include "aop-dynval.h"
#include "aop-type.h"

static struct aop_type _aop_t_all_signed = {
  .kind = ATK_SIGNED_INT,
  .pointer_levels = 0,
  .tag = NULL,

  .size = 0,
};

static struct aop_type _aop_t_all_unsigned = {
  .kind = ATK_UNSIGNED_INT,
  .pointer_levels = 0,
  .tag = NULL,

  .size = 0,
};

static struct aop_type _aop_t_all_fp = {
  .kind = ATK_FP,
  .pointer_levels = 0,
  .tag = NULL,

  .size = 0,
};

static struct aop_type _aop_t_all_pointer = {
  .kind = ATK_ALL_POINTER,
  .pointer_levels = 0,
  .tag = NULL,

  .size = 0,
};

static struct aop_type _aop_t_signed8 = {
  .kind = ATK_SIGNED_INT,
  .pointer_levels = 0,
  .tag = NULL,

  .size = 1,
};

static struct aop_type _aop_t_signed16 = {
  .kind = ATK_SIGNED_INT,
  .pointer_levels = 0,
  .tag = NULL,

  .size = 2,
};

static struct aop_type _aop_t_signed32 = {
  .kind = ATK_SIGNED_INT,
  .pointer_levels = 0,
  .tag = NULL,

  .size = 4,
};

static struct aop_type _aop_t_signed64 = {
  .kind = ATK_SIGNED_INT,
  .pointer_levels = 0,
  .tag = NULL,

  .size = 8,
};

static struct aop_type _aop_t_signed128 = {
  .kind = ATK_SIGNED_INT,
  .pointer_levels = 0,
  .tag = NULL,

  .size = 16,
};

static struct aop_type _aop_t_unsigned8 = {
  .kind = ATK_UNSIGNED_INT,
  .pointer_levels = 0,
  .tag = NULL,

  .size = 1,
};

static struct aop_type _aop_t_unsigned16 = {
  .kind = ATK_UNSIGNED_INT,
  .pointer_levels = 0,
  .tag = NULL,

  .size = 2,
};

static struct aop_type _aop_t_unsigned32 = {
  .kind = ATK_UNSIGNED_INT,
  .pointer_levels = 0,
  .tag = NULL,

  .size = 4,
};

static struct aop_type _aop_t_unsigned64 = {
  .kind = ATK_UNSIGNED_INT,
  .pointer_levels = 0,
  .tag = NULL,

  .size = 8,
};

static struct aop_type _aop_t_unsigned128 = {
  .kind = ATK_UNSIGNED_INT,
  .pointer_levels = 0,
  .tag = NULL,

  .size = 16,
};

static struct aop_type _aop_t_float32 = {
  .kind = ATK_FP,
  .pointer_levels = 0,
  .tag = NULL,

  .size = 4,
};

static struct aop_type _aop_t_float64 = {
  .kind = ATK_FP,
  .pointer_levels = 0,
  .tag = NULL,

  .size = 8,
};

static struct aop_type _aop_t_float96 = {
  .kind = ATK_FP,
  .pointer_levels = 0,
  .tag = NULL,

  .size = 12,
};

static struct aop_type _aop_t_float128 = {
  .kind = ATK_FP,
  .pointer_levels = 0,
  .tag = NULL,

  .size = 16,
};

static htab_t type_table = NULL;

/* Compare strings but safe to pass NULL strings.  Two NULL inputs are
   considered equal. */
static bool
safe_str_equal (const char *a, const char *b)
{
  if (a == NULL && b == NULL)
    return true;
  else if (a == NULL || b == NULL)
    return false;
  else
    return (strcmp (a, b) == 0);
}

/* Equality function for the type_table hash table. */
static int
eq_type_table (const void *table_ptr, const void *key_ptr)
{
  const struct aop_type *type_in_table = (const struct aop_type *)table_ptr;
  const struct aop_type *key_type = (const struct aop_type *)key_ptr;

  return ((type_in_table->kind == key_type->kind)
	  && (type_in_table->pointer_levels == key_type->pointer_levels)
	  && safe_str_equal (type_in_table->tag, key_type->tag)
	  && (type_in_table->size == key_type->size));
}

/* Hash function for the type_table hash table. */
static hashval_t
hash_type_table (const void *ptr)
{
  hashval_t hash;
  const struct aop_type *type = (const struct aop_type *)ptr;

  /* We start the hash off by hashing the tag string if there is one
     or an arbitrary seed if there isn't. */
  hash = (type->tag != NULL) ? htab_hash_string (type->tag) : 8675309;
  hash = iterative_hash (&type->kind, sizeof (type->kind), hash);
  hash = iterative_hash (&type->pointer_levels, sizeof (type->pointer_levels),
			 hash);
  hash = iterative_hash (&type->size, sizeof (type->size), hash);

  return hash;
}

/* Function to destroy an element in the type table after it is
   deleted (or when the whole table is destroyed). */
static void
del_type_table (void *ptr)
{
  struct aop_type *type = (struct aop_type *)ptr;

  if (type->tag != NULL)
    free ((char *)type->tag);

  free (type);
}

/* Return a pointer to a type object that is identical to the supplied
   type object.  If you pass two identical type objects to
   get_dedup_type(), you will get the same pointer back.  The objects
   that get_dedup_type() returns are valid for the rest of the
   compiler's execution. */
static const struct aop_type *
get_dedup_type (struct aop_type *type)
{
  struct aop_type **type_slot;

  aop_assert (type_table != NULL);

  type_slot = (struct aop_type **)htab_find_slot (type_table, type, INSERT);
  if (*type_slot == NULL)
    {
      *type_slot = xmalloc (sizeof (struct aop_type));
      memcpy (*type_slot, type, sizeof (struct aop_type));

      if (type->tag != NULL)
	(*type_slot)->tag = xstrdup (type->tag);
    }

  return *type_slot;
}

/* Return a deduplicated pointer to an aop_type object.  The pointer
   is valid for the rest of the compiler's execution. */
static const struct aop_type *
init_aop_type (enum aop_tykind kind, int pointer_levels, const char *tag,
	       int size)
{
  struct aop_type type;
  type.kind = kind;
  type.pointer_levels = pointer_levels;
  type.tag = tag;
  type.size = size;

  return get_dedup_type (&type);
}

void
init_type_table ()
{
  type_table = htab_create_alloc (10, hash_type_table, eq_type_table,
				  del_type_table, xcalloc, free);
  aop_assert (type_table != NULL);
}

void
free_type_table ()
{
  aop_assert (type_table != NULL);
  htab_delete (type_table);
  type_table = NULL;
}

/* Returns true if specified type is an "all signed" or "all unsigned"
   type. */
bool
is_all_integer_type (const struct aop_type *type)
{
  return ((type->kind == ATK_SIGNED_INT || type->kind == ATK_UNSIGNED_INT)
	  && type->pointer_levels == 0 && type->size <= 0);
}

/* Returns true if specified type is an "all fp" type. */
bool
is_all_fp_type (const struct aop_type *type)
{
  return ((type->kind == ATK_FP) && type->pointer_levels == 0
	  && type->size <= 0);
}

/**
 * \defgroup type InterAspect Types
 * \{
 */

/**
 * Return a type that will match any standard-sized signed integer
 * type.
 *
 * Standard integer sizes are 1, 2, 4, and 8 bytes.  This type will
 * not match 16-byte or larger integer types (you must use
 * aop_t_signed128() for 16-byte signed integers).
 *
 * When passing an aop_t_all_signed() value to an advice function (via
 * aop_insert_advice()) the value is automatically cast to the
 * (long long int) type, which is guaranteed by the C standard to
 * be large enough to hold any standard-sized integer.
 *
 * Be careful: (long long int) is larger than (int) on most platforms.
 * We recommend defining advice functions using the ALL_SIGNED_T macro
 * to avoid confusion.
 *
 * \return A type that will match any standard-sized signed integer
 * type.
 */
const struct aop_type *
aop_t_all_signed ()
{
  return &_aop_t_all_signed;
}

/**
 * Return a type that will match any standard-sized unsigned integer
 * type.
 *
 * Standard integer sizes are 1, 2, 4, and 8 bytes.  This type will
 * not match 16-byte or larger integer types (you must use
 * aop_t_unsigned128() for 16-byte unsigned integers).
 *
 * When passing an aop_t_all_unsigned() value to an advice function
 * (via aop_insert_advice()) the value is automatically cast to the
 * (long long unsigned) type, which is guaranteed by the C standard to
 * be large enough to hold any standard-sized integer.
 *
 * Be careful: (long long unsigned) is larger than unsigned (int) on
 * most platforms.  We recommend defining advice functions using the
 * ALL_UNSIGNED_T macro to avoid confusion.
 *
 * \return A type that will match any standard-sized unsigned integer
 * type.
 */
const struct aop_type *
aop_t_all_unsigned ()
{
  return &_aop_t_all_unsigned;
}

/**
 * Return a type that will match any standard-sized floating point
 * type.
 *
 * Standard floating point sizes are single-precision (float) and
 * double-precision (double).  This type will not match
 * higher-precision floating point types (you must use
 * aop_t_long_double() to match GCC's long double).
 *
 * \return A type that will match any standard-sized floating point
 * type.
 */
const struct aop_type *
aop_t_all_fp ()
{
  return &_aop_t_all_fp;
}

/**
 * Return a type that will match any pointer.
 *\return A type that will match any pointer.
 */
const struct aop_type *
aop_t_all_pointer ()
{
  return &_aop_t_all_pointer;
}

/**
 * Return a type that will match any 8-bit signed integer (such as
 * char or int8_t).
 * \return A type that will match 8-bit signed integers.
 */
const struct aop_type *
aop_t_signed8 ()
{
  return &_aop_t_signed8;
}

/**
 * Return a type that will match any 16-bit signed integer (int16_t
 * or, on most platforms, short).
 * \return A type that will match 16-bit signed integers.
 */
const struct aop_type *
aop_t_signed16 ()
{
  return &_aop_t_signed16;
}

/**
 * Return a type that will match any 32-bit signed integer (int32_t
 * or, on most platforms, int).
 * \return A type that will match 32-bit signed integers.
 */
const struct aop_type *
aop_t_signed32 ()
{
  return &_aop_t_signed32;
}

/**
 * Return a type that will match any 64-bit signed integer (int64_t
 * or, on most platforms, long long int).
 * \return A type that will match 64-bit signed integers.
 */
const struct aop_type *
aop_t_signed64 ()
{
  return &_aop_t_signed64;
}

/**
 * Return a type that will match any 128-bit signed integer
 * (__int128_t on platforms that support 128-bit integers).
 * \return A type that will match 128-bit signed integers.
 */
const struct aop_type *
aop_t_signed128 ()
{
  return &_aop_t_signed128;
}

/**
 * Return a type that will match any 8-bit unsigned integer (such as
 * unsigned char or uint8_t).
 * \return A type that will match 8-bit unsigned integers.
 */
const struct aop_type *
aop_t_unsigned8 ()
{
  return &_aop_t_unsigned8;
}

/**
 * Return a type that will match any 16-bit unsigned integer (uint16_t
 * or, on most platforms, unsigned short).
 * \return A type that will match 16-bit unsigned integers.
 */
const struct aop_type *
aop_t_unsigned16 ()
{
  return &_aop_t_unsigned16;
}

/**
 * Return a type that will match any 32-bit unsigned integer (uint32_t
 * or, on most platforms, unsigned int).
 * \return A type that will match 32-bit unsigned integers.
 */
const struct aop_type *
aop_t_unsigned32 ()
{
  return &_aop_t_unsigned32;
}

/**
 * Return a type that will match any 64-bit unsigned integer (uint64_t
 * or, on most platforms, long long unsigned).
 * \return A type that will match 64-bit unsigned integers.
 */
const struct aop_type *
aop_t_unsigned64 ()
{
  return &_aop_t_unsigned64;
}

/**
 * Return a type that will match any 128-bit unsigned integer
 * (__uint128_t on platforms that support 128-bit integers).
 * \return A type that will match 128-bit unsigned integers.
 */
const struct aop_type *
aop_t_unsigned128 ()
{
  return &_aop_t_unsigned128;
}

/**
 * Return a type that will match single-precision floating point types
 * (float in C).
 * \return A type that will match single-precision floating point
 * types.
 */
const struct aop_type *
aop_t_float32 ()
{
  return &_aop_t_float32;
}

/**
 * Return a type that will match double-precision floating point types
 * (double in C).
 * \return A type that will match double-precision floating point
 * types.
 */
const struct aop_type *
aop_t_float64 ()
{
  return &_aop_t_float64;
}

/**
 * Return a type that will match <code>long double</code>.  Where
 * supported, the <code>long double</code> type is actually 80-bits,
 * though it is padded to 96 or 128 bits on different systems.
 * \return A type that will match GCC's <code>long double</code>
 * floating point type.
 */
const struct aop_type *
aop_t_long_double ()
{
  switch (int_size_in_bytes (long_double_type_node))
    {
    case 12:
      return &_aop_t_float96;
    case 16:
      return &_aop_t_float128;
    default:
      fatal_error ("(InterAspect) This compiler does not supply a standard long"
		   " double type.");
    }
}

/**
 * A convenience function for getting a <code>(char *)</code> type.
 * This is the same as passing aop_t_signed8() to aop_t_pointer_to().
 * \return A type that will match the type <code>(char *)</code>.
 */
const struct aop_type *
aop_t_cstring ()
{
  return aop_t_pointer_to (aop_t_signed8 ());
}

/**
 * Return a type that will match a struct type.  Note that this will
 * not match <i>pointers</i> to the specified struct type.
 * \param tag The name of the struct.  To match <code>struct
 * foo</code>, give just <code>foo</code> as the tag.
 * \return A type that will match a specified struct.
 */
const struct aop_type *
aop_t_struct (const char *tag)
{
  if (tag == NULL)
    fatal_error ("(InterAspect) Must supply a non-NULL tag when specifying a"
		 " struct type.");

  return init_aop_type (ATK_STRUCT, 0, tag, -1);
}

/**
 * A convenience function for obtaining a type that will match a
 * pointer to a specified struct.  The result is the same as obtaining
 * a struct type with aop_t_struct() and passing it to
 * aop_t_pointer_to().
 * \param tag The name of the struct.  To match <code>struct
 * foo *</code>, give just <code>foo</code> as the tag.
 * \return A type that will match pointers to a specified struct.
 */
const struct aop_type *
aop_t_struct_ptr (const char *tag)
{
  if (tag == NULL)
    fatal_error ("(InterAspect) Must supply a non-NULL tag when specifying a"
		 " struct type.");

  return init_aop_type (ATK_STRUCT, 1, tag, -1);
}

/**
 * Return a type that will match a union type.  Note that this will
 * not match <i>pointers</i> to the specified union type.
 * \param tag The name of the union.  To match <code>union foo</code>,
 * give just <code>foo</code> as the tag.
 * \return A type that will match a specified union.
 */
const struct aop_type *
aop_t_union (const char *tag)
{
  if (tag == NULL)
    fatal_error ("(InterAspect) Must supply a non-NULL tag when specifying a"
		 " union type.");

  return init_aop_type (ATK_UNION, 0, tag, -1);
}

/**
 * A convenience function for obtaining a type that will match a
 * pointer to a specified union.  The result is the same as obtaining
 * a union type with aop_t_union() and passing it to
 * aop_t_pointer_to().
 * \param tag The name of the union.  To match <code>union
 * foo *</code>, give just <code>foo</code> as the tag.
 * \return A type that will match pointers to a specified union.
 */
const struct aop_type *
aop_t_union_ptr (const char *tag)
{
  if (tag == NULL)
    fatal_error ("(InterAspect) Must supply a non-NULL tag when specifying a"
		 " union type.");

  return init_aop_type (ATK_UNION, 1, tag, -1);
}

/**
 * Return a type that will match an enum type.  Note that this will
 * not match <i>pointers</i> to the specified enum type.
 * \param tag The name of the enum.  To match <code>enum foo</code>,
 * give just <code>enum</code> as the tag.
 * \return A type that will match a specified union.
 */
const struct aop_type *
aop_t_enum (const char *tag)
{
  if (tag == NULL)
    fatal_error ("(InterAspect) Must supply a non-NULL tag when specifying an"
		 " enum type.");

  return init_aop_type (ATK_ENUM, 0, tag, -1);
}

/**
 * Return a type that will match pointers to the specified type.
 *
 * NB: It is possible to match pointers to aop_t_all_signed(),
 * aop_t_all_unsigned(), or aop_t_all_fp(), but it is dangerous to
 * then capture the matched value and pass it to an advice function.
 * The advice function will have no way of knowing which type was
 * matched.  For example, if an advice function gets a pointer to an
 * "all fp" value, should it dereference it as a double or a float?
 *
 * \return A type that will match pointers to the specified type.
 */
const struct aop_type *
aop_t_pointer_to (const struct aop_type *type)
{
  struct aop_type pointer_type;

  memcpy (&pointer_type, type, sizeof (struct aop_type));
  pointer_type.pointer_levels++;

  return get_dedup_type (&pointer_type);
}

/**
 * Check if an #aop_type object matches a pointer type.  This check is
 * true if and only if the specified type matches a subset of types
 * that aop_t_all_pointer() matches.
 *
 * (Since version 1.1)
 * \param type The type to check.
 * \return Non-zero if the #aop_type object matches a pointer type,
 * zero otherwise.
 */
int
aop_is_pointer_type (const struct aop_type *type)
{
  return (type->kind == ATK_ALL_POINTER || type->pointer_levels > 0);
}

/**
 * Modify an #aop_dynval object so that it will be passed to advice as
 * if it were matched and captured using the aop_t_all_pointer() type.
 * Casting is useful if you wish to capture values from pointcuts
 * matched with different aop_type objects but pass those values to
 * the same advice function.
 *
 * Only use this function on dynvals whose type passes
 * aop_is_pointer_type().  Casting a non-pointer type with this
 * function will raise a fatal compiler error.
 *
 * (Since version 1.1)
 * \param dv The #aop_dynval to cast.
 */
void
aop_cast_to_all_pointer (struct aop_dynval *dv)
{
  if (!aop_is_pointer_type (dv->type))
    fatal_error ("(InterAsepct) Illegal cast to all pointer type.");

  dv->type = aop_t_all_pointer ();
}

/**
 * Get the type for an #aop_dynval object.  Every dynval has an
 * associated type that is determined by how it was matched and
 * captured.
 *
 * (Since version 1.1)
 * \return The type of the specified dynval.
 */
const struct aop_type *aop_get_dynval_type (struct aop_dynval *dv)
{
  return dv->type;
}

/**
 * Check if an #aop_type object matches one of the types that
 * aop_t_all_signed() matches.
 *
 * (Since version 1.1)
 * \param type The type to check.
 * \return Non-zero if the #aop_type object is standard-sized signed
 * integer type.
 */
int
aop_is_all_signed_subtype (const struct aop_type *type)
{
  return (type->kind == ATK_SIGNED_INT
	  && type->pointer_levels == 0 && type->size <= 8);
}

/**
 * Check if an #aop_type object matches one of the types that
 * aop_t_all_unsigned() matches.
 *
 * (Since version 1.1)
 * \param type The type to check.
 * \return Non-zero if the #aop_type object is standard-sized unsigned
 * integer type.
 */
int
aop_is_all_unsigned_subtype (const struct aop_type *type)
{
  return (type->kind == ATK_UNSIGNED_INT
	  && type->pointer_levels == 0 && type->size <= 8);
}

/**
 * Modify an #aop_dynval object so that it will be passed to advice as
 * if it were matched and captured using the aop_t_all_signed() type.
 *
 * Only use this function on dynvals whose type passes
 * aop_is_all_signed_subtype().  Casting any other type with this
 * function will raise a fatal compiler error.
 *
 * (Since version 1.1)
 * \param dv The #aop_dynval to cast.
 */
void
aop_cast_to_all_signed(struct aop_dynval *dv)
{
  if (!aop_is_all_signed_subtype(dv->type))
    fatal_error ("(InterAsepct) Illegal cast to all signed subtype type.");

  dv->type = aop_t_all_signed();
}

/**
 * Modify an #aop_dynval object so that it will be passed to advice as
 * if it were matched and captured using the aop_t_all_unsigned()
 * type.
 *
 * Only use this function on dynvals whose type passes
 * aop_is_all_unsigned_subtype().  Casting any other type with this
 * function will raise a fatal compiler error.
 *
 * (Since version 1.1)
 * \param dv The #aop_dynval to cast.
 */
void
aop_cast_to_all_unsigned(struct aop_dynval *dv)
{
  if (!aop_is_all_unsigned_subtype(dv->type))
    fatal_error ("(InterAsepct) Illegal cast to all unsigned sub type.");

  dv->type = aop_t_all_unsigned();
}

/**
 * Check if an #aop_type object matches one of the types that
 * aop_t_all_fp() matches.
 *
 * (Since version 1.1)
 * \param type The type to check.
 * \return Non-zero if the #aop_type object is standard-sized signed
 * floating point type.
 */
int
aop_is_all_fp_subtype (const struct aop_type *type)
{
  return (type->kind == ATK_FP
	  && type->pointer_levels == 0 && type->size <= 8);
}

/**
 * Modify an #aop_dynval object so that it will be passed to advice as
 * if it were matched and captured using the aop_t_all_fp() type.
 *
 * Only use this function on dynvals whose type passes
 * aop_is_all_fp_subtype().  Casting a non-float type with this
 * function will raise a fatal compiler error.
 *
 * (Since version 1.1)
 * \param dv The #aop_dynval to cast.
 */
void
aop_cast_to_all_fp(struct aop_dynval *dv)
{
  if (!aop_is_all_fp_subtype(dv->type))
    fatal_error("(InterAsepct) Illegal cast to all float type.");

  dv->type = aop_t_all_fp();
}

/* Close Doxygen defgroup block. */
/**
 * \}
 */

/* Given a type node, get that type node's identifier. */
static tree
get_type_identifier (tree gcc_type)
{
  tree type_name = TYPE_NAME (gcc_type);

  /* On rare occasion, TYPE_NAME() mysteriously gives us a TYPE_DECL
     instead of the IDENTIFIER_NODE we really wanted for Christmas.
     Documentation in tree.h promises that you can use
     DECL_ORIGINAL_TYPE to get through to the _actual_ type, which has
     the real IDENTIFIER_NODE.*/
  while (type_name != NULL && TREE_CODE (type_name) == TYPE_DECL)
    if (DECL_ORIGINAL_TYPE (type_name) != NULL)
      type_name = TYPE_NAME (DECL_ORIGINAL_TYPE (type_name));
    else
      type_name = NULL;
  gcc_assert(type_name == NULL || TREE_CODE (type_name) == IDENTIFIER_NODE);
  return type_name;
}

/* Given a type node, get that type node's name, or NULL if it has no
   name. */
static const char *
get_type_name (tree gcc_type)
{
  tree type_name = get_type_identifier (gcc_type);
  return (type_name != NULL) ? IDENTIFIER_POINTER (type_name) : NULL;
}

static bool
does_int_type_match (tree gcc_type, enum aop_tykind kind, int aop_size)
{
  HOST_WIDE_INT gcc_size;

  aop_assert (kind == ATK_SIGNED_INT || kind == ATK_UNSIGNED_INT);

  if (TREE_CODE (gcc_type) != INTEGER_TYPE)
    return false;

  gcc_size = int_size_in_bytes (gcc_type);

  /* Types do not match if one is unsigned and one is signed. */
  if (kind == ATK_SIGNED_INT && TYPE_UNSIGNED (gcc_type))
    return false;
  else if (kind == ATK_UNSIGNED_INT && !TYPE_UNSIGNED (gcc_type))
    return false;

  /* If aop_size is zero (or negative) we treat it as the "all signed"
     or all "all unsigned" type, which will match any "standard" size
     integer.  int64_t and uint64_t are the largest standard size
     integer. */
  if (aop_size > 0)
    return (aop_size == gcc_size);
  else
    return (gcc_size > 0 && gcc_size <= 8);
}

static bool
does_fp_type_match (tree gcc_type, int aop_size)
{
  if (TREE_CODE (gcc_type) == REAL_TYPE)
    {
      HOST_WIDE_INT gcc_size = int_size_in_bytes (gcc_type);

      /* If aop_size is zero (or negative_ we treat it as the "all fp"
	 type, which will match any "standard" size floating point
	 type.  float and double are standard size floating point
	 types. */
      if (aop_size > 0)
	return (aop_size == gcc_size);
      else
	return (gcc_size > 0 && gcc_size <= 8);
    }
  else
    {
      return false;
    }
}

static bool
does_custom_type_match (tree gcc_type, enum aop_tykind kind, const char *tag)
{
  aop_assert (kind == ATK_STRUCT || kind == ATK_UNION || kind == ATK_ENUM);

  if ((kind == ATK_STRUCT && TREE_CODE (gcc_type) == RECORD_TYPE)
      || (kind == ATK_UNION && TREE_CODE (gcc_type) == UNION_TYPE)
      || (kind == ATK_ENUM && TREE_CODE (gcc_type) == ENUMERAL_TYPE))
    {
      aop_assert (tag != NULL);
      return safe_str_equal (tag, get_type_name (gcc_type));
    }
  else
    {
      return false;
    }
}

/* Match an actual GCC type with an AOP type specification. */
bool
does_type_match (tree gcc_type, const struct aop_type *aop_type)
{
  int pointer_levels;

  aop_assert (gcc_type != NULL && aop_type != NULL);

  pointer_levels = aop_type->pointer_levels;
  while (pointer_levels > 0)
    {
      if (TREE_CODE (gcc_type) != POINTER_TYPE)
	return false;

      /* What type does it point to? */
      gcc_type = TREE_TYPE (gcc_type);
      pointer_levels--;
    }

  switch (aop_type->kind)
    {
    case ATK_ALL_POINTER:
      return (TREE_CODE (gcc_type) == POINTER_TYPE);
    case ATK_SIGNED_INT:
    case ATK_UNSIGNED_INT:
      return does_int_type_match (gcc_type, aop_type->kind, aop_type->size);
    case ATK_FP:
      return does_fp_type_match (gcc_type, aop_type->size);
    case ATK_STRUCT:
    case ATK_UNION:
    case ATK_ENUM:
      return does_custom_type_match (gcc_type, aop_type->kind, aop_type->tag);
    default:
      aop_assert (0);
    }
}

/* Return true if two aop_type objects are equal. */
bool
are_types_equal (const struct aop_type *a, const struct aop_type *b)
{
  return (a == b);
}

/* Quick-and-dirty printf variant that will output to a buffer without
   overrunning it. */
#define BUF_PRINTF(format, ...)				\
  do {							\
    int bytes;						\
    bytes = snprintf (out, size, format, __VA_ARGS__);	\
    out += bytes;					\
    total_bytes += bytes;				\
    size -= bytes;					\
  } while (0)

/* C names for special aop_type objects. */
static const char *all_signed_name = "ALL_SIGNED_T";
static const char *all_unsigned_name = "ALL_UNSIGNED_T";
static const char *all_fp_name = "ALL_FP_T";
static const char *all_pointer_name = "ALL_POINTER_T";
static const char *signed_char_name = "signed char";
static const char *unsigned_char_name = "unsigned char";

/* Format an aop_type as a C/C++ typename.  The result is stored in
   the output buffer (n is the size of the buffer).  Returns the
   number characters written (but without regard to truncation because
   of a too small output buffer, as with snprintf()). */
int
format_c_type (const struct aop_type *type, int n, char *output)
{
  /* Initialize these for the sake of BUF_PRINTF. */
  int total_bytes = 0;
  int size = n;
  char *out = output;

  switch (type->kind)
    {
    case ATK_SIGNED_INT:
    case ATK_UNSIGNED_INT:
      if (type->size == 0)
	{
	  BUF_PRINTF ("%s", (type->kind == ATK_SIGNED_INT) ? all_signed_name
		      : all_unsigned_name);
	}
      else if (type->size == 1)
	{
	  /* We special case one byte integers because it looks really
	     awkward to see (int8_t *) when you wanted a (char *). 

	     It's ok to do this because the standard guarantees that
	     char == 1 byte.  */
	  BUF_PRINTF ("%s", (type->kind == ATK_SIGNED_INT) ? signed_char_name
		      : unsigned_char_name);
	}
      else
	{
	  aop_assert (type->size == 2 || type->size == 4 || type->size == 8
		      || type->size == 16);

	  BUF_PRINTF ("%s%d_t", (type->kind == ATK_SIGNED_INT) ? "int" : "uint",
		      8 * type->size);
	}
      break;
    case ATK_FP:
      switch (type->size)
	{
	case 4:
	  BUF_PRINTF ("%s", "float");
	  break;
	case 8:
	  BUF_PRINTF ("%s", "double");
	  break;
	case 12:  /* As seen on 32-bit systems. */
	  BUF_PRINTF ("%s", "long double");
	  break;
	case 16:
	  BUF_PRINTF ("%s", "long double");
	  break;
	case 0:
	  BUF_PRINTF ("%s", all_fp_name);
	  break;
	default:
	  /* Invalid size for floating point type. */
	  aop_assert (0);
	}
      break;
    case ATK_ALL_POINTER:
       BUF_PRINTF ("%s", all_pointer_name);
      break;
    case ATK_STRUCT:
       BUF_PRINTF ("struct %s", type->tag);
      break;
    case ATK_UNION:
       BUF_PRINTF ("union %s", type->tag);
      break;
    case ATK_ENUM:
       BUF_PRINTF ("enum %s", type->tag);
      break;
    default:
      /* Unknown type kind. */
      aop_assert (0);
    }

  if (type->pointer_levels > 0)
    {
      int i;

      /* What can I say?  It's the C convention. */
      BUF_PRINTF("%s", " ");

      for (i = 0; i < type->pointer_levels; i++)
	BUF_PRINTF("%s", "*");
    }

  /* Before returning, make absolutely sure that the result is
     NULL-terminated.  Note that snprintf will not terminate a string
     that it has to truncate because of too small buffer. */
  if (total_bytes < n)
    output[total_bytes] = '\0';
  else
    output[n - 1] = '\0';

  return total_bytes;
}
