/**
 * @file
 * @brief Data types.
 * @author Paulo Urio
 * @date 2012
 * @copyright FreeBSD License
 */

#ifndef _SYS_TYPES_H_
#define _SYS_TYPES_H_

typedef signed char s8_t;		/**< Signed 8 bits type */
typedef unsigned char u8_t;		/**< Unsigned 8 bits type */

typedef signed short s16_t;		/**< Signed 16 bits type */
typedef unsigned short u16_t;		/**< Unsigned 16 bits type */

typedef signed int s32_t;		/**< Signed 32 bits type */
typedef unsigned int u32_t;		/**< Unsigned 32 bits type */

#if __SIZEOF_LONG__ > 4
typedef signed long s64_t;		/**< Signed 64 bits type */
typedef unsigned long u64_t;		/**< Unsigned 64 bits type */
#else
typedef signed long long s64_t;		/**< Signed 64 bits type */
typedef unsigned long long u64_t;	/**< Unsigned 64 bits type */
#endif

#ifdef __KERNEL__

typedef u64_t clock_t;  /**< System times in clock ticks or CLOCKS_PER_SEC */
typedef s32_t clockid_t; /**< Clock ID type in the clock and timer functions */
typedef u32_t dev_t;	/**< Used for device IDs */
typedef u32_t gid_t;	/**< Used for group IDs */
typedef s64_t id_t;	/**< Used as a general identifier */
typedef u64_t ino_t;	/**< Used for file serial numbers */
typedef s32_t key_t;	/**< Used for XSI interprocess communication */
typedef u16_t mode_t;	/**< Used for some file attributes */
typedef u16_t nlink_t;	/**< Used for link counts */
typedef s64_t off_t;	/**< Used for file sizes */
typedef s16_t pid_t;	/**< Used for process IDs and process group IDs */

#ifndef _SIZE_T
#define _SIZE_T
typedef u32_t size_t;	/**< Used for sizes of objects */
#endif

#ifndef _SSIZE_T
#define _SSIZE_T
typedef s32_t ssize_t;	/**< Used for a count of bytes or an error indication */
#endif

#ifndef _TIME_T
#define _TIME_T
typedef s64_t time_t;	/**< Time in seconds since 1 Jan 1970 0000 GMT */
#endif

typedef u16_t uid_t;	/**< Used for user IDs */

typedef s64_t useconds_t;	/**< Used for time in microseconds */

/** @{ */
/* File system */
typedef u32_t blkcnt_t;		/**< Used for file block counts */
typedef u64_t blksize_t;	/**< Used for block sizes */
typedef u64_t fsblkcnt_t;	/**< Used for file system block counts */
typedef u64_t fsfilcnt_t;	/**< Used for file system file counts */
/** @} */

#endif /* __KERNEL__ */

#endif /* _SYS_TYPES_H_ */
