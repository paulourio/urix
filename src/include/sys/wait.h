/**
 * @file wait.h
 * @brief Declarations for waiting.
 * @author Paulo Urio
 * @date 2012
 * @copyright FreeBSD License
 * @details
 * Contains macros related to wait(). The value returned by wait() and waitpid()
 * depends on whether the process terminated by an exit() call, was killed by a
 * signal, or was stopped due to job control, as follows:
 *
 * <table>
 * 	<tr> <td></td> <td>High byte</td> <td>Low byte</td> </tr><tr>
 	<td>exit(status)</td> <td>status</td> <td>0</td> </tr><tr>
 * 	<td>killed by signal</td> <td>0</td> <td>signal</td> </tr><tr>
 *	<td>stopped (job control)</td> <td>signal</td> <td>0177</td> </tr>
 * </table>
 */

#ifndef _SYS_WAIT_H_
#define _SYS_WAIT_H_

/** @{ */
/* For use with waitpid() */
#define WNOHANG		1 /**< Do not hang if no status is available */
#define WUNTRACED	2 /**< Report status of stopped child process */
/** @} */

/** @{ */
#define _LOW(v)		((v) & 0377)		/**< Low bits */
#define _HIGH(v)	(((v) >> 8) & 0377)	/**< High bits */
/** @} */

/** @{ */
/* Macros for analysis of process status values. */
/** @return Exit status */
#define WEXITSTATUS(s)	(_HIGH(s))
// /** @return True if child has been continued */
// #define WIFCONTINUED
/** @return True if child exited normally */
#define WIFEXITED(s)	(_LOW(s) == 0)
/** @return True if child exited due to uncaught signal */
#define WIFSIGNALED(s)	((((unsigned int)(s) - 1) & 0xFFFFU) < 0xFFU)
/** @return True if child is currently stopped */
#define WIFSTOPPED(s)	(_LOW(s) == 0177)
/** @return Return signal number that caused process to stop */
#define WSTOPSIG(s)	(_HIGH(s) & 0377)
/** @return Return signal number that caused process to terminate */
#define WTERMSIG(s)	(_LOW(s) & 0177)
/** @} */

/** @todo sys/wait prototypes: wait, waitid and waitpid. */

#endif /* _SYS_WAIT_H_ */
