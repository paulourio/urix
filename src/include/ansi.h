/**
 * \file ansi.h
 * \author Paulo Urio
 * \date 2012
 * \copyright FreeBSD License
 * Check whether the compiler supports Standard C.
 *
 * Check if compiler is in conformance with Standard C and define to
 * use POSIX.1b 1993. A few variables may be defined, some programs use
 * _VOID, _CONSTART in order to be portable with ANSI and K&R compilers.
 */

#ifndef _URIX_ANSI_H_
#define _URIX_ANSI_H_

#if __STDC__ == 1 || __GNUC__
#undef _POSIX_SOURCE
#define _POSIX_SOURCE 199309L
#endif

#define	_VOIDSTAR	void *
#define	_VOID		void
#define	_CONST		const
#define	_VOLATILE	volatile
#define _SIZET		size_t

#endif /* _URIX_ANSI_H_ */
