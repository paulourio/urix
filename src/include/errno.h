/**
 * \file errno.h
 * \brief Defines the various errors specified in POSIX.1.
 * \details These constants are also visible to user programs.  Internally
 * the errors are returned as function result.  Some functions
 * returns zero or positive values when are succeed.  Therefore, in kernel mode,
 * the errors should be small negative integers, and in user mode the errors
 * should be small positive integers.  The description of each error was
 * collected from pubs.opengroup.org.
 * \author Paulo Urio
 * \date 2012
 * \copyright FreeBSD License
 */

#ifndef _ERRNO_H_
#define _ERRNO_H_

/** Operation not permitted (POSIX.1).  An attempt was made to perform an
 * operation limited to processes with appropriate privileges or to the owner
 * of a file or other resource. */
#define	EPERM		 1
/** No such file or directory (POSIX.1).  A component of a specified pathname
 * does not exist, or the pathname is an empty string. */
#define	ENOENT		 2
/** No such process (POSIX.1).  No process can be found corresponding to that
 * specified by the given process ID. */
#define	ESRCH		 3
/** Interrupted function call (POSIX.1).  An asynchronous signal was caught by
 * the process during the execution of an interruptible function.  If the signal
 * handler performs a normal return, the interrupted function call may return
 * this condition (see the Base Definitions volume of IEEE Std 1003.1-2001,
 * signal.h). */
#define	EINTR		 4
/** Input/output error (POSIX.1).  Some physical input or output error has
 * occurred.  This error may be reported on a subsequent operation on the same
 * file descriptor.  Any other error-causing operation on the same file
 * descriptor may cause the [EIO] error indication to be lost. */
#define	EIO		 5
/** No such device or address (POSIX.1).  Input or output on a special file
 * refers to a device that does not exist, or makes a request beyond the
 * capabilities of the device.  It may also occur when, for example, a tape
 * drive is not on-line. */
#define	ENXIO		 6
/** Argument list too long (POSIX.1).  The sum of the number of bytes used by
 * the new process image's argument list and environment list is greater than
 * the system-imposed limit of {ARG_MAX} bytes.  Reasons:
 * - Lack of space in an output buffer.
 * - Argument is greater than the system-imposed maximum. */
#define	E2BIG		 7
/** Exec format error (POSIX.1).  A request is made to execute a file that,
 * although it has the appropriate permissions, is not in the format required
 * by the implementation for executable files. */
#define	ENOEXEC		 8
/** Bad file descriptor (POSIX.1).  A file descriptor argument is out of range,
 * refers to no open file, or a read (write) request is made to a file that is
 * only open for writing (reading). */
#define	EBADF		 9
/** No child processes (POSIX.1).  A wait() or waitpid() function was executed
 * by a process that had no existing or unwaited-for child process. */
#define	ECHILD		10
/** Resource temporarily unavailable (may be the same
 * value as EWOULDBLOCK) (POSIX.1).  This is a temporary condition and later
 * calls to the same routine may complete normally. */
#define	EAGAIN		11
/** Not enough space (POSIX.1).  The new process image requires more memory
 * than is allowed by the hardware or system-imposed memory management
 * constraints. */
#define	ENOMEM		12
/** Permission denied (POSIX.1).  An attempt was made to access a file in a way
 * forbidden by its file access permissions. */
#define	EACCES		13
/** Bad address (POSIX.1).  The system detected an invalid address in
 * attempting to use an argument of a call. The reliable detection of this
 * error cannot be guaranteed, and when not detected may result in the
 * generation of a signal, indicating an address violation, which is sent to
 * the process. */
#define	EFAULT		14
/** Block device required */
#define	ENOTBLK		15
/** Device or resource busy (POSIX.1).  An attempt was made to make use of a
 * system resource that is not currently available, as it is being used by
 * another process in a manner that would have conflicted with the request
 * being made by this process. */
#define	EBUSY		16
/** File exists (POSIX.1).  An existing file was mentioned in an inappropriate
 * context; for example, as a new link name in the link() function. */
#define	EEXIST		17
/** Improper link (POSIX.1).  Cross-device link. A link to a file on
 * another file system was attempted. */
#define	EXDEV		18
/** No such device (POSIX.1).  An attempt was made to apply an inappropriate
 * function to a device; for example, trying to read a write-only device such
 * as a printer. */
#define	ENODEV		19
/** Not a directory (POSIX.1).  A component of the specified pathname exists,
 * but it is not a directory, when a directory was expected.*/
#define	ENOTDIR		20
/** Is a directory (POSIX.1).  An attempt was made to open a directory with
 * write mode specified. */
#define	EISDIR		21
/** Invalid argument (POSIX.1).  Some invalid argument was supplied; for
 * example, specifying an undefined signal in a signal() function or a kill()
 * function. */
#define	EINVAL		22
/** Too many open files in system (POSIX.1). Too many files are currently open
 * in the system. The system has reached its predefined limit for
 * simultaneously open files and temporarily cannot accept requests to open
 * another one.*/
#define	ENFILE		23
/** Too many open files (POSIX.1).  An attempt was made to open more than the
 * maximum number of file descriptors allowed in this process. */
#define	EMFILE		24
/** Inappropriate I/O control operation (POSIX.1).  A control function has been
 * attempted for a file or special file for which the operation is
 * inappropriate. */
#define	ENOTTY		25
/** Text file busy (POSIX.1).  An attempt was made to execute a pure-procedure
 * program that is currently open for writing, or an attempt has been made to
 * open for writing a pure-procedure program that is being executed. */
#define	ETXTBSY		26
/** File too large (POSIX.1).  The size of a file would exceed the maximum
 * file size of an implementation or offset maximum established in the
 * corresponding file description. */
#define	EFBIG		27
/** No space left on device (POSIX.1).  During the write() function on a
 * regular file or when extending a directory, there is no free space left on
 * the device. */
#define	ENOSPC		28
/** Invalid seek (POSIX.1).  An attempt was made to access the file offset
 * associated with a pipe or FIFO.*/
#define	ESPIPE		29
/** Read-only file system (POSIX.1).  An attempt was made to modify a file or
 * directory on a file system that is read-only.*/
#define	EROFS		30
/** Too many links (POSIX.1).  An attempt was made to have the link count of
 * a single file exceed {LINK_MAX}. */
#define	EMLINK		31
/** Broken pipe (POSIX.1).   A write was attempted on a socket, pipe, or FIFO
 * for which there is no process to read the data. */
#define	EPIPE		32
/** Mathematics argument out of domain of function (POSIX.1, C99).  An input
 * argument is outside the defined domain of the mathematical function. */
#define	EDOM		33
/** Result too large (POSIX.1, C99).  The result of the function is too large
 * (overflow) or too small (underflow) to be represented in the
 * available space */
#define	ERANGE		34

#endif /* _ERRNO_H_ */
