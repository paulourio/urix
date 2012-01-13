/**
 * @file stddef.h
 * @brief Standard library definitions.
 * @author Paulo Urio
 * @date 2012
 * @copyright FreeBSD License
 */

#ifndef _STDLIB_H_
#define _STDLIB_H_

#include <stddef.h>
#include <limits.h>
//#include <math.h>
#include <sys/wait.h>

#define EXIT_FAILURE	1	/**< Unsuccessful termination for exit() */
#define EXIT_SUCCESS	0	/**< Successful termination for exit() */
#define	RAND_MAX	32767	/**< Maximum value returned by rand() */
/** Maximum value of multibyte character.  Integer expression whose value is
 * the maximum number of bytes in a character specified by the current
 * locale. */
#define MB_CUR_MAX	1

/** Structure type returned by the div() function */
typedef struct {
	int quot;	/**< Quotient value */
	int rem; 	/**< Remainder value */
} div_t;

/** Structure type returned by the ldiv() function */
typedef struct {
	long quot;	/**< Quotient value */
	long rem; 	/**< Remainder value */
} ldiv_t;

/** Structure type returned by the lldiv() function */
typedef struct {
	long long quot;	/**< Quotient value */
	long long rem; 	/**< Remainder value */
} lldiv_t;

/** @todo Prototypes */

#endif /* _STDLIB_H_ */
