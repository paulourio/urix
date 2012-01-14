/**
 * @file sys/stat.h
 * @brief Data returned by the stat() function.
 * @author Paulo Urio
 * @date 2012
 * @copyright FreeBSD License
 */

#ifndef _SYS_STAT_H_
#define _SYS_STAT_H_

#include <sys/types.h>

/** Data returned by the functions fstat(), lstat(), and stat() */
struct stat {
	dev_t st_dev;		/**< ID of device containing file */
	ino_t st_ino;		/**< File serial number */
	mode_t st_mode;		/**< Mode of file (see below) */
	nlink_t st_nlink;	/**< Number of links to the file */
	uid_t st_uid;		/**< User ID of file */
	gid_t st_gid;		/**< Group ID of file */
	dev_t st_rdev;		/**< Device ID (if file is character or block special) */
	off_t st_size;		/**< File size in bytes (if file is a regular file) */
	time_t st_atime;	/**< Time of last access */
	time_t st_mtime;	/**< Time of last data modification */
	time_t st_ctime;	/**< Time of last status change */
	/** A filesystem-specific preferred I/O block size for this object.
	 * In some filesystem types, this may vary from file to file. */
	blksize_t st_blksize;
	blkcnt_t  st_blocks;	/**< # of blocks allocated for this object */
};

/** @{ */
/* File type */
/* Traditional mask definitions for st_mode. */
#define S_IFMT	 0170000	/**< Type of file  */
#define S_IFSOCK 0140000        /**< Socket */
#define S_IFLNK	 0120000	/**< Symbolic link */
#define S_IFREG	 0100000	/**< Regular */
#define S_IFBLK	 0060000	/**< Block special */
#define S_IFDIR	 0040000	/**< Directory */
#define S_IFCHR	 0020000	/**< Character special */
#define S_IFIFO	 0010000	/**< FIFO special */
#define S_ISUID	 0004000	/**< Set-user-ID on execution */
#define S_ISGID	 0002000	/**< Set-group-ID on execution */
#define S_ISVTX	 0001000	/**< On directories, restricted deletion flag */
/** @} */

/** @{ */
/* File mode bits */
#define S_IRWXU	00700 /**< Read, write, execute/search by owner	rwx------ */
#define S_IRUSR	00400 /**< Read permission, owner 		r-------- */
#define S_IWUSR	00200 /**< Write permission, owner 		-w------- */
#define S_IXUSR	00100 /**< Execute/search permission, owner 	--x------ */

#define S_IRWXG	00070 /**< Read, write, execute/search by group ---rwx--- */
#define S_IRGRP	00040 /**< Read permission, group 		---r----- */
#define S_IWGRP	00020 /**< Write permission, group		----w---- */
#define S_IXGRP	00010 /**< Execute/search permission, group 	-----x--- */

#define S_IRWXO	00007 /**< Read, write, execute/search, others	------rwx */
#define S_IROTH	00004 /**< Read permission, others 		------r-- */
#define S_IWOTH	00002 /**< Write permission, others 		-------w- */
#define S_IXOTH	00001 /**< Execute/search permission, others 	--------x */

#define S_IRWXUGO	(S_IRWXU | S_IRWXG | S_IRWXO)	/**< 	rwxrwxrwx */
#define S_IALLUGO	(S_ISUID | S_ISGID | S_ISVTX | S_IRWXUGO)
#define S_IRUGO		(S_IRUSR | S_IRGRP | S_IROTH)	/**< 	r--r--r-- */
#define S_IWUGO		(S_IWUSR | S_IWGRP | S_IWOTH)	/**< 	-w-w-w-w- */
#define S_IXUGO		(S_IXUSR | S_IXGRP | S_IXOTH)	/**< 	--x--x--x */
/** @} */

/** @{ */
/* The following macros will test whether a file is of the specified type, */
/* testing st_mode (from POSIX Sec. 5.6.1.1). */
#define S_ISREG(m)	(((m) & S_IFMT) == S_IFREG)	/**< Is a reg file */
#define S_ISDIR(m)	(((m) & S_IFMT) == S_IFDIR)	/**< Is a directory */
#define S_ISCHR(m)	(((m) & S_IFMT) == S_IFCHR)	/**< Is a char spec */
#define S_ISBLK(m)	(((m) & S_IFMT) == S_IFBLK)	/**< Is a block spec */
#define S_ISLNK(m)	(((m) & S_IFMT) == S_IFLNK)	/**< Is a symlink */
#define S_ISFIFO(m)	(((m) & S_IFMT) == S_IFIFO)	/**< Is a pipe/FIFO */
#define S_ISSOCK(m)     (((m) & S_IFMT) == S_IFSOCK)	/**< Is a socket */
/** @} */

/** @todo prototypes */

#endif /* _SYS_STAT_H_ */
