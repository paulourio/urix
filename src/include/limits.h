/**
 * \file limits.h
 * \brief Defines some values for a few URIX constants.
 * \author Paulo Urio
 * \date 2012
 * \copyright FreeBSD License
 *
 * This header reserves symbol namespaces ending with _MAX.
 * Minimum values for the maximum are distinguished by the prefix _POSIX_
 */

#ifndef _URIX_LIMITS_H_
#define _URIX_LIMITS_H_

/* Copied from linux/kernel.h */

/** Unsigned short maximum value */
#define USHRT_MAX	((u16)(~0U))
/** Short maximum value */
#define SHRT_MAX	((s16)(USHRT_MAX >> 1))
/** Short minimum value */
#define SHRT_MIN	((s16)(-SHRT_MAX - 1))
/** Integer maximum value */
#define INT_MAX		((int)(~0U >> 1))
/** Integer minimum value */
#define INT_MIN		(-INT_MAX - 1)
/** Unsigned short maximum value */
#define UINT_MAX	(~0U)
/** Long integer maximum value */
#define LONG_MAX	((long)(~0UL >> 1))
/** long integer minimum value */
#define LONG_MIN	(-LONG_MAX - 1)
/** Unsigned long integer maximum value */
#define ULONG_MAX	(~0UL)
/** Long long integer maximum value */
#define LLONG_MAX	((long long)(~0ULL >> 1))
/** Long long integer minimum value */
#define LLONG_MIN	(-LLONG_MAX - 1)
/** Unsigned long long integer maximum value */
#define ULLONG_MAX	(~0ULL)

/** Number of files a process may have open */
#define OPEN_MAX	   255
/** Number of chars in a file name */
#define NAME_MAX	   255
/** Number of chars in a path name including null */
#define PATH_MAX	  4096
/** Number of links a file may have */
#define LINK_MAX	   127
/** Bytes of args and environment for exec() */
#define ARG_MAX		131072

/** Maximum number of supplemental groups */
#define NGROUPS_MAX	8
/** The number of child processes one user ID can have active simultaneously. */
#define CHILD_MAX	100
/** The number of standard I/O "streams" a process can have open at once.
 * Must be the same as FOPEN_MAX in stdio.h. */
#define STREAM_MAX	20
/** The maximum number of bytes for a timezone name. */
#define TZNAME_MAX	3
/** The number of bytes in the "canonical input queue" of a terminal. */
#define MAX_CANON	255
/** The number of bytes which will fit into a terminal's
 * "canonical input queue." */
#define MAX_INPUT	255
/** The number of bytes you're guaranteed to be able to write
 * atomically(as a unit) to a pipe. */
#define PIPE_BUF	32768
/** The largest value you can reliably write to or read from a file at once.
 * Also the largest value you can store in an ssize_t. */
#define SSIZE_MAX	INT_MAX

/*
 * Table 2-4: POSIX.4 Feature Limits: Maxima
 */

/** Asynchronous I/O feature.  Maximum number of operations you can supply in
 * one call to lio_listio. */
#define AIO_LISTIO_MAX		2
/** Asynchronous I/O feature.  Maximum concurrent asynchronous I/Os. */
#define AIOMAX			1
/** Prioritized I/O feature.  Maximum amount you can decrease your
 * AIO priority. */
#define AIO_PRIO_DELTA_MAX	0
/** Message queues feature.  Maximum number of message queues per process. */
#define MQ_OPEN_MAX		8
/** Message queues feature.  Maximum number of message priorities. */
#define MQ_PRIO_MAX		32
/** Real-time signals feature.  Maximum real-time signals. */
#define RTSIG_MAX		8
/** Real-time signals feature.  Maximum outstanding realtime signals sent
 * per process. */
#define SIGQUEUE_MAX		32
/** Semaphores feature.  Maximum number of semaphores that one process can
 * have open at a time. */
#define SEM_NSEMS_MAX		256
/** Semaphores feature.  Maximum semaphore value. */
#define SEM_VALUE_MAX		32767
/** Clocks and timers feature. Maximum number of timers a process can
 * have at one time. */
#define TIMER_MAX		32
/** Clocks and timers.  Maximum number of times a timer can overrun and you
 * can still detect it. */
#define DELAYTIMER_MAX		32


/* These are only visible for POSIX */
#if defined(_POSIX_C_SOURCE) || defined(_POSIX_SOURCE)

/*
 *	Table 2-5: POSIX Feature Limits: Minimum Requirements
 */

/** Number of operations in one listio */
#define _POSIXAIOLISTIO_MAX	2
/** Number of simultaneous asynchronous I/Os */
#define _POSIX_AIO_MAX		1
/** Number of message queues for one process */
#define _POSIX_MQ_OPEN_MAX	8
/** Number of message priorities */
#define _POSIX_MQ_PRIO_MAX	32
/** Number of real-time signals */
#define _POSIX_RTSIG_MAX	8
/** Number of real-time signals a process can queue at once */
#define _POSIX_SIGQUEUE_MAX	32
/** Number of semaphores per process */
#define _POSIX_SEM_NSEMS_MAX	256
/** Maximum semaphore value */
#define _POSIX_SEM_VALUE_MAX	32767
/** Number of timers per process */
#define _POSIX_TIMER_MAX	32
/** Number of times a timer can overrun */
#define _POSIX_DELAYTIMER_MAX	32

/** The total length of the string arguments you pass to one of
 * the exec functions. */
#define _POSIX_ARG_MAX		4096
/** The number of child processes one user ID can have active simultaneously. */
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

/* Constants of POSIX.4. Required for _POSIX_REALTIME_SIGNALS */
#if defined(_POSIX_C_SOURCE) && _POSIX_C_SOURCE >= 199309L
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

/* Required for _POSIX_ASYNCHRONOUS_IO */

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
