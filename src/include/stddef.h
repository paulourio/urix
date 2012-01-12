/**
 * @file stddef.h
 * @brief Standard type definitions.
 * @author Paulo Urio
 * @date 2012
 * @copyright FreeBSD License
 */

#ifndef _STDDEF_H_
#define _STDDEF_H_

/** Null pointer constant */
#undef NULL
#if defined(__cplusplus)
#	define NULL	0
#else
#	define NULL	((void *) 0)
#endif

/** Signed integral type of the result of subtracting two pointers. */
typedef long ptrdiff_t;
/** Integral type whose range of values can represent distinct wide-character
 * codes for all members of the largest character set specified among the
 * locales supported by the compilation environment: the null character has the
 * code value 0 and each member of the Portable Character Set has a code value
 * equal to its value when used as the lone character in an integer character
 * constant. */
typedef char wchar_t;
/** Unsigned integral type of the result of the sizeof operator. */
typedef unsigned int size_t;

/** Integer constant expression of type size_t, the value of which is the
 * offset in bytes to the structure member (member-designator), from the
 * beginning of its structure (type).
 */
#undef offsetof
#ifdef __compiler_offsetof
#	define offsetof(TYPE,MEMBER) __compiler_offsetof(TYPE,MEMBER)
#else
#	define offsetof(TYPE, MEMBER) ((size_t) &((TYPE *)0)->MEMBER)
#endif

#endif /* _STDDEF_H_ */
