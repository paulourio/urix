/**
 * \file unistd.h
 * \brief Defines miscellaneous constants, types and functions.
 * \details It is defined by the POSIX.1 standard.
 * \author Paulo Urio
 * \date 2012
 * \copyright FreeBSD License
 */

#ifndef _UNISTD_H_
#define _UNISTD_H_

/** NULL must be defined on unistd.h according to POSIX Section 2.7.1. */
#undef NULL
#if defined(__cplusplus)
#	define NULL	0
#else
#	define NULL	((void *) 0)
#endif


#endif /* _UNISTD_H_ */
