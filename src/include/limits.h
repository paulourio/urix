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

/** These are only visible for POSIX */
#ifdef _POSIX_SOURCE

/* \section Required in All Implementations. */

/** The total length of the string arguments you pass to one of
 * the exec functions. */
#define _POSIX_ARG_MAX		4096
/* The number of child processes one user ID can have active simultaneously. */
#define _POSIX_CHILD_MAX	6
/** The number of links a single file can have. */
#define _POSIX_LINK_MAX		8
/** The number of bytes in the "canonical input queue" of a terminal. */
#define _POSIX_MAX_CANON	255
/** The number of bytes which will fit into a terminal's
 * "canonical input queue." */
#define _POSIX_MAX_INPUT	255
/** The number of bytes in a file name or a pathname component. */
#define _POSIX_NAME_MAX		14
/** The number of supplementary group IDs a process can have at once. */
#define _POSIX_NGROUPS_MAX	0
/** The number of files a process can have open at once. */
#define _POSIX_OPEN_MAX		16
/** The number of bytes in a pathname. */
#define _POSIX_PATH_MAX		255
/** The number of bytes you're guaranteed to be able to write
 * atomically(as a unit) to a pipe. */
#define _POSIX_PIPE_BUF		512
/** The largest value you can reliably write to or read from a file at once.
 * Also the largest value you can store in an ssize_t. */
#define _POSIX_SSIZE_MAX	32767
/** The number of standard I/O "streams" a process can have open at once. */
#define _POSIX_STREAM_MAX	8
/** The maximum number of bytes for a timezone name. */
#define _POSIX_TZNAME_MAX	3

/** \section Constants of POSIX.4. Required for _POSIX_REALTIME_SIGNALS */
#if _POSIX_SOURCE >= 199309L
/** The difference between SIGRTMIN and SIGRT-MAX. */
#define _POSIX_RTSIG_MAX	4
/** The maximum number of signals a process can queue to another process at one
 * time (total number a process can have queued, but not yet handled, for its
 * victim processes). */
#define POSIX_SIGQUEUE_MAX	32
/** The maximum number of timer overruns (after this number is exceeded for a
 * particular timer, timer_getoverrun will just return DELAYTIMER_MAX). */
#define _POSIX_DELAYTIMER_MAX	32
/** The maximum number of timers a single process is allowed to have. */
#define _POSIX_TIMER_MAX	32
/** The minimum clock resolution, in nanoseconds. */
#define _POSIX_CLOCKRES_MIN	20000000
#endif /* POSIX.4 */

/** \section Required for _POSIX_ASYNCHRONOUS_IO */

/** The maximum number of AIOs you can specify in a single listio call (the
 * maximum length of the vector, NOPs not included). */
#define _POSIX_AIO_LISTIO_MAX	2
/** The maximum number of outstanding simultaneous asynchronous I/O
 * operations. */
#define _POSIX_AIO_MAX		1
/** The maximum number of message queues a particular process can have open. */
#define _POSIX_MQ_OPEN_MAX	8
/** The maximum message priority supported (maximum value for msg_prio in a
 * call to mq_send). */
#define _POSIX_MQ_PRIO_MAX	32
/** The maximum number of semaphores a particular process sem_open, can
 * have - open. */
#define _POSIX_SEM_NSEMS_MAX	256
/** The maximum value a semaphore may have. */
#define _POSIX_SEM_VALUE_MAX	32767

#endif /* _POSIX_SOURCE */

#endif /* _URIX_LIMITS_H_ */
