/**
 * @file types.h
 * @brief Defines some POSIX data types.
 * @author Paulo Urio
 * @date 2012
 * @copyright FreeBSD License
 */

#ifndef _TYPES_H_
#define _TYPES_H_

/** 8 bit type */
typedef unsigned char   u8_t;
/** 16 bit type */
typedef unsigned short u16_t;
/** 8 bit signed type */
typedef signed char     i8_t;
/** 16 bit signed type */
typedef short          i16_t;

/** @warning Not being check whether long long is supported by compiler. */
typedef unsigned long long u64_t;

#endif /* _TYPES_H_ */
