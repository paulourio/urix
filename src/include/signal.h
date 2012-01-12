/**
 * @file signal.h
 * @brief Defines all the ANSI and POSIX signals.
 * @author Paulo Urio
 * @date 2012
 * @copyright FreeBSD License
 *
 *  The default actions are as follows:
 *  - T: Abnormal termination of the process. The process is terminated with
 *  	all the consequences of _exit() except that the status made available
 *  	to wait() and waitpid() indicates abnormal termination by the specified
 *  	signal.
 *  - A: Abnormal termination of the process.  Additionally,
 *  	implementation-defined abnormal termination actions, such as creation
 *  	of a core file, may occur.
 *  - I: Ignore the signal.
 *  - S: Stop the process.
 *  - C: Continue the process, if it is stopped; otherwise, ignore the signal.
 */

#ifndef _SIGNAL_H_
#define _SIGNAL_H_

#include <types.h>

/* Regular signals. */
/** Hangup.  Default Action: T */
#define SIGHUP		1
/** Interrupt (DEL).  Default Action: T */
#define SIGINT		2
/** Quit (ASCII FS).  Default Action: T */
#define SIGQUIT		3
/** Illegal instruction.  Default Action: A */
#define SIGILL		4
/** Trace/breakpoint trap.  Default Action: A  */
#define SIGTRAP		5
/** Process abort signal. IOT instruction.  Default Action: A */
#define SIGABRT		6
/** Bus error. Access to an undefined portion of a memory object.
 *  Default Action: A */
#define SIGBUS		7
/** Erroneous arithmetic operation.   Floating point exception.
 *  Default Action: A */
#define SIGFPE		8
/** Kill (cannot be caught or ignored).  Default Action: T */
#define SIGKILL		9
/** User-defined signal 1.  Default Action: T */
#define SIGUSR1		10
/** User-defined signal 2.  Default Action: T */
#define SIGUSR2		12
/** Invalid memory reference.  Segmentation violation. Default Action: A */
#define SIGSEGV		11
/** Write on a pipe with no one to read it.  Default Action: T */
#define SIGPIPE		13
/** Alarm clock.  Default Action: T */
#define SIGALRM		14
/** Termination signal.  Software termination signal from kill.
 * Default Action: T */
#define SIGTERM		15
//#define SIGEMT	16	/* EMT instruction */
/** Child process terminated, stopped.  Default Action: I */
#define SIGCHLD		17
/** Window size has changed.  Default Action: I */
#define SIGWINCH	21
//#define SIGVTALRM	24	/* virtual alarm */
//#define SIGPROF	25	/* profiler alarm */

/*
 * POSIX requires the following signals to be defined, even if they are
 * not supported.  Here are the definitions, but they are not supported.
 */

/** Continue executing, if stopped.  Default Action: C */
#define SIGCONT		18
/** Stop executing (cannot be caught or ignored).  Default Action: S */
#define SIGSTOP		19
/** Terminal stop signal.  Interactive stop signal.  Default Action: S */
#define SIGTSTP		20
/** Background process attempting read.  Default Action: S */
#define SIGTTIN		22
/** Background process attempting write.  Default Action: S */
#define SIGTTOU		23

/** Type of a signal handling function */
typedef void (*__sighandler_t)(int);

/* Macros used as function pointers. */
/** Return value from signal() in case of error */
#define SIG_ERR    ((__sighandler_t) -1)
/** Request for default signal handling */
#define SIG_DFL	   ((__sighandler_t)  0)
/** Request that signal be ignored */
#define SIG_IGN	   ((__sighandler_t)  1)
/** Request that signal be held (blocked) */
#define SIG_HOLD   ((__sighandler_t)  2)
//#define SIG_CATCH  ((__sighandler_t)  3)

/** @todo Add more posix definitions */

#endif /* _SIGNAL_H_ */
