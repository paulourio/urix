/**
 * @file fcntl.h
 * @page fcntl
 * @brief File control options (POSIX 1003.4 synchronized I/O).
 * @details Define the requests and arguments for use by the
 * 	functions fcntl() and open().  Reserved namespaces: beginning with
 * 	l_, F_, O_, and S_.
 * @author Paulo Urio
 * @date 2012
 * @copyright FreeBSD License
 */

#ifndef _FCNTL_H_
#define _FCNTL_H_

/** Duplicate file descriptor */
#define F_DUPFD		0
/** Get file descriptor flags */
#define F_GETFD		1
/** Set file descriptor flags */
#define F_SETFD		2
/** Get file status flags and file access modes */
#define F_GETFL		3
/** Set file status flags */
#define F_SETFL		4
/** Get record locking information */
#define F_GETLK		5
/** Set record locking information */
#define F_SETLK		6
/** Set record locking in formation; wait if blocked */
#define F_SETLKW	7
/** Get process or process group ID to receive SIGURG signals */
#define F_GETOWN	8
/** Set process or process group ID to receive SIGURG signals */
#define F_SETOWN	9

/** Close the file descriptor upon execution of an exec family function.
 * Used by fcntl().  POSIX Table 6-2.*/
#define FD_CLOEXEC	1

/** @subpage fcntl Values for l_type
 * Used for record locking with fcntl() (the following
 * values are unique) are as follows.  POSIX Table 6-3.
 * @{ */
/** Shared or read lock */
#define F_RDLCK		1
/** Unlock */
#define F_UNLCK		2
/** Exclusive or write lock */
#define F_WRLCK		3
/** @} */

/** @subpage fcntl File creation
 * File creation flags and are used in the oflag value to open(). They shall
 * be bitwise-distinct.
 * @{ */
/** Create file if it does not exist */
#define O_CREAT		00100
/** Exclusive use flag */
#define O_EXCL		00200
/** Do not assign controlling terminal */
#define O_NOCTTY	00400
/** Truncate flag */
#define O_TRUNC		01000
/** @} */

/** @subpage fcntl File status
 * Flags used for open() and fcntl() are as follows.
 * @{ */
/** Set append mode */
#define O_APPEND
/** Write according to synchronized I/O data integrity completion */
#define O_DSYNC
/** Non-blocking mode */
#define O_NONBLOCK
/** Synchronized read I/O operations */
#define O_RSYNC
/** Write according to synchronized I/O file integrity completion */
#define O_SYNC
/** @} */

#endif /* _FCNTL_H_ */
