/**
 * \file limits.h
 * \brief Defines some values for a few URIX constants.
 * \author Paulo Urio
 * \date 2012
 * \copyright FreeBSD License
 */

#ifndef _URIX_LIMITS_H_
#define _URIX_LIMITS_H_

/** Number of files a process may have open */
#define OPEN_FILES_MAX	   255
/** Number of chars in a file name */
#define FILENAME_MAX	   255
/** Number of chars in a path name including null */
#define PATH_MAX	  4096
/** Number of links a file may have */
#define LINK_MAX	   127
/** Bytes of args and environment for exec() */
#define ARG_MAX		131072

#endif /* _URIX_LIMITS_H_ */
