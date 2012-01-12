/**
 * \file unistd.h
 * \brief Defines miscellaneous constants, types and functions.
 * \details It is defined by the POSIX.1 standard.
 * \author Paulo Urio
 * \date 2012
 * \copyright FreeBSD License
 *
 * Header file for POSIX conformance, it is part of POSIX.1.  Inclusion of
 * unistd.h reserves no namespaces. However, the inclusion of any POSIX header
 * reserves the space of all names beginning with "_" (underscore).
 * It also defines the optional components that comprise a POSIX system. By
 * examining constants found in unistd.h (starting by _POSIX_), you can
 * determine which options are or are not available on the system.
 */

#ifndef _UNISTD_H_
#define _UNISTD_H_

/* Note: NULL must be defined on unistd.h according to POSIX Section 2.7.1.
 * Also, it says it must be defined on stddef.h.
 */

/* Values used by access().  POSIX Table 2-8. */
/** File existence */
#define F_OK		0
/** Execute permission */
#define X_OK		1
/** Write permission */
#define W_OK		2
/** Read permission */
#define R_OK		4

/* The constants used for lseek(). */
/** Set the seek pointer to the given offset */
#define SEEK_SET	0
/** Set the seek pointer to the current plus the given offset */
#define SEEK_CUR	1
/** Set the seek pointer to EOF plus the given offset */
#define SEEK_END	2

#ifdef _POSIX_C_SOURCE
/** Tells which POSIX version is supported */
#define _POSIX_VERSION 199309L
#endif /* _POSIX_C_SOURCE */

/* These three definitions are required by POSIX Sec. 8.2.1.2. */
/** File descriptor for standard input, stdin */
#define STDIN_FILENO	0
/** File descriptor for standard output, stdout */
#define STDOUT_FILENO	1
/** File descriptor for standard error, stderr */
#define STDERR_FILENO	2

/* POSIX defines several options that may be implemented or not.  We will just
 * uncomment those we support. */

/* Symbols defined by POSIX.1 (_POSIX_VERSION == 199009) */
//#define _POSIX_SAVED_IDS /* Support for saved set-user and set-group IDs. */
//#define _POSIX_JOB_CONTROL /* Support for job control groups. */
/* Symbols defined by POSIX.4 (_POSIX_VERSION >= 199309) */
//#define _POSIX_REALTIME_SIGNALS /* Real-time (queued) signals */
//#define _POSIX_MESSAGE_PASSING /* Message queues (mq_open, et. al.) */
//#define _POSIX_MAPPED_FILES /* Memory mapped files (mmap) */
//#define _POSIX_SHARED_MEMORY_OBJECTS /* Shared memory (shm_open, et. al.) */
//#define _POSIX_SEMAPHORES /* Semaphores (sem_open, et. al.) */
//#define _POSIX_PRIORITY_SCHEDULING /* Real-time process scheduling (sched_*) */
//#define _POSIX_TIMERS /* POSIX.4 clocks and timers (clock_*, timer*) */
//#define _POSIX_MEMLOCK /* Process memory locking (mlockall) */
//#define _POSIX_MEMLOCK_RANGE /* Memory Range locking (mlock) */
//#define _POSIX_MEMORY_PROTECTION /* mprotect */
//#define _POSIX_FSYNC /* fsync */
//#define _POSIX_SYNCHRONIZED_IO /* POSIX.4 synchronized I/O (O_SYNC, et. al.) */
//#define _POSIX_ASYNCHRONOUS_IO /* POSIX.4 asynchronous I/O (aio_*) */
//#define _POSIX_PRIORITIZED_IO /* POSIX.4 prioritized I/O (aio_reqprio) */

/* POSIX.1 Execution-Time Constants */
/** Restrictions on chown: you cannot  "give away" file permissions to another
 * user or group. */
#define _POSIX_CHOWN_RESTRICTED
/** File names longer than NAME_MAX will not be silently truncated; rather,
 * an error will be returned.
 * \todo Missing it.
 */
#define _POSIX_NO_TRUNC
/** Disabling of terminal special characters defined in termios.h is supported
 * using this character value. */
//#define _POSIX_VDISABLE
/* POSIX.4 Execution-Time Constants */
//#define _POSIX_SYNC_IO /* Synchronized I/O may be performed. */
//#define _POSIX_ASYNC_IO /* Asynchronous I/O may be performed. */
//#define _POSIX_PRIO_IO /* Prioritized Asynchronous I/O may be performed. */

/* The implementation supports the threads option. */
//#define _POSIX_THREADS
/* The implementation supports the thread stack address attribute option */
//#define _POSIX_THREAD_ATTR_STACKADDR
/* The implementation supports the thread stack size attribute option */
//#define _POSIX_THREAD_ATTR_STACKSIZE
//* The implementation supports the process-shared synchronisation option */
//#define _POSIX_THREAD_PROCESS_SHARED
/* The implementation supports the thread-safe functions option */
//#define _POSIX_THREAD_SAFE_FUNCTIONS

/** \todo Missing sysconf constants. */

#endif /* _UNISTD_H_ */
