/**
 * \file ansi.h
 * \brief Check whether the compiler supports Standard C.
 *
 * If compiler is in conformance with Standard C and define to
 * use POSIX.1b 1993.
 *
 * Definition of cross-compiler constants. A few variables may be defined,
 * some programs use _VOID, _CONST in order to be portable with ANSI C and
 * K&R compilers.
 *
 * \author Paulo Urio
 * \date 2012
 * \copyright FreeBSD License
 */

#ifndef _URIX_ANSI_H_
#define _URIX_ANSI_H_

#if __STDC__ == 1 || __GNUC__
#	undef _POSIX_SOURCE
#	define _POSIX_SOURCE 199309L
#endif

/** Generic pointer */
#define	_VOIDSTAR	void *
/** Void type */
#define	_VOID		void
/** Const keyword (not present on K&R compiler) */
#define	_CONST		const
/** Volatile keyword (not present on K&R compiler) */
#define	_VOLATILE	volatile
/** Size_t type (On K&R compiler, int type is used) */
#define _SIZET		size_t

#endif /* _URIX_ANSI_H_ */
