/**
 * @file termios.h
 * @page termios
 * @brief Header contains the definitions used by the terminal I/O interfaces
 * @author Paulo Urio
 * @date 2012
 * @copyright FreeBSD License
 */

#ifndef _TERMIOS_H_
#define _TERMIOS_H_

/** Used for terminal special characters */
typedef unsigned char	cc_t;
/** Used for terminal baud rates */
typedef unsigned int	speed_t;
/** Used for terminal modes */
typedef unsigned int	tcflag_t;

/** Size of the array c_cc for control characters */
#define NCCS 19

/** Primary terminal control structure. POSIX Table 7-1. */
struct termios {
	tcflag_t c_iflag;	/**< Input mode flags */
	tcflag_t c_oflag;	/**< Output mode flags */
	tcflag_t c_cflag;	/**< Control mode flags */
	tcflag_t c_lflag;	/**< Local mode flags */
	cc_t c_line;		/**< Line discipline */
	cc_t c_cc[NCCS];	/**< Control characters */
};

/** @subpage termios
 * @{
 *  Indices into c_cc array.  Default values in parentheses. POSIX Table 7-5. */
#define VEOF		0	/**< cc_c[VEOF] = EOF character (^D) */
#define VEOL		1	/**< cc_c[VEOL] = EOL character (undef) */
#define VERASE		2	/**< cc_c[VERASE] = ERASE character (^H) */
#define VINTR		3	/**< cc_c[VINTR] = INTR character (DEL) */
#define VKILL		4	/**< cc_c[VKILL] = KILL character (^U) */
#define VMIN		5	/**< cc_c[VMIN] = MIN value for timer */
#define VQUIT		6	/**< cc_c[VQUIT] = QUIT character (^\) */
#define VTIME		7	/**< cc_c[VTIME] = TIME value for timer */
#define VSUSP		8	/**< cc_c[VSUSP] = SUSP (^Z, ignored) */
#define VSTART		9	/**< cc_c[VSTART] = START character (^S) */
#define VSTOP		10	/**< cc_c[VSTOP] = STOP character (^Q) */
/** @} */

/** @subpage termios Input modes
 * @{
 * Values for termios c_iflag bit map.  POSIX Table 7-2. */
#define BRKINT		0x0001	/**< Signal interrupt on break */
#define ICRNL		0x0002	/**< Map CR to NL on input */
#define IGNBRK		0x0004	/**< Ignore break condition */
#define IGNCR		0x0008	/**< Ignore CR */
#define IGNPAR		0x0010	/**< Ignore characters with parity errors */
#define INLCR		0x0020	/**< Map NL to CR on input */
#define INPCK		0x0040	/**< Enable input parity check */
#define ISTRIP		0x0080	/**< Mask off 8th bit */
#define IXOFF		0x0100	/**< Enable start/stop input control */
#define IXON		0x0200	/**< Enable start/stop output control */
#define PARMRK		0x0400	/**< Mark parity errors in the input queue */
/** @} */

/** @subpage termios Output modes
 * @{
 * The c_oflag field specifies the system treatment of output. */
#define OPOST	00001	/**< Post-process output */
#define OLCUC	00002	/**< Map lower-case to upper-case on output (LEGACY) */
#define ONLCR	00004	/**< Map NL to CR-NL on output */
#define OCRNL	00010	/**< Map CR to NL on output */
#define ONOCR	00020	/**< No CR output at column 0 */
#define ONLRET	00040	/**< NL performs CR function */
#define OFILL	00100	/**< Use fill characters for delay */
#define NLDLY	00400	/**< Select newline delays */
#	define NL0	0000	/**< Newline character type 0 */
#	define NL1	0400	/**< Newline character type 1 */
#define CRDLY	03000	/**< Select carriage-return delays: */
#	define CR0	0000	/**< Carriage-return delay type 0 */
#	define CR1	1000	/**< Carriage-return delay type 1 */
#	define CR2	2000	/**< Carriage-return delay type 2 */
#	define CR3	3000	/**< Carriage-return delay type 3 */
#define TABDLY	14000	/**< Select horizontal-tab delays: */
#	define TAB0	00000	/**< Horizontal-tab delay type 0 */
#	define TAB1	04000	/**< Horizontal-tab delay type 1 */
#	define TAB2	10000	/**< Horizontal-tab delay type 2 */
#	define TAB3	14000	/**< Expand tabs to spaces */
#define BSDLY	20000	/**< Select backspace delays: */
#	define BS0	00000	/**< Backspace-delay type 0 */
#	define BS1	20000	/**< Backspace-delay type 1 */
#define VTDLY	40000	/**< Select vertical-tab delays: */
#	define VT0	00000	/**< Vertical-tab delay type 0 */
#	define VT1	40000	/**< Vertical-tab delay type 1 */
#define FFDLY	100000	/**< Select form-feed delays: */
#	define FF0	000000	/**< Form-feed delay type 0 */
#	define FF1	100000	/**< Form-feed delay type 1 */
/** @} */

/** @subpage termios Baud Rate Selection
 * @{
 * Values for the baud rate settings.  POSIX Table 7-6. */
#define B0		0x0000	/**< Hang up the line */
#define B50		0x1000	/**< 50 baud */
#define B75		0x2000	/**< 75 baud */
#define B110		0x3000	/**< 110 baud */
#define B134		0x4000	/**< 134.5 baud */
#define B150		0x5000	/**< 150 baud */
#define B200		0x6000	/**< 200 baud */
#define B300		0x7000	/**< 300 baud */
#define B600		0x8000	/**< 600 baud */
#define B1200		0x9000	/**< 1200 baud */
#define B1800		0xA000	/**< 1800 baud */
#define B2400		0xB000	/**< 2400 baud */
#define B4800		0xC000	/**< 4800 baud */
#define B9600		0xD000	/**< 9600 baud */
#define B19200		0xE000	/**< 19200 baud */
#define B38400		0xF000	/**< 38400 baud */
/** @} */


/** @subpage termios Control Modes
 * @{
 * The c_cflag field describes the hardware control of the terminal; not all
 * values specified are required to be supported by the underlying hardware:
 */
#define CSIZE	0x0060	/**< Number of bits per character. Character size */
#	define CS5	00000	/**< Character size 5 bits */
#	define CS6	00020	/**< Character size 6 bits */
#	define CS7	00040	/**< Character size 7 bits */
#	define CS8	00060	/**< Character size 8 bits */
#define CSTOPB	0000100	/**< Send two stop bits, else one */
#define CREAD	0000200	/**< Enable receiver */
#define PARENB	0000400	/**< Parity enable */
#define PARODD	0001000	/**< Odd parity, else even */
#define HUPCL	0002000	/**< Hang up on last close */
#define CLOCAL	0004000	/**< Ignore modem status lines */
/** @} */

/** @subpage termios  Local Modes
 * @{
 * The c_lflag field of the argument structure is used to control various
 * terminal functions:
 */
#define ECHO 	0x0001 /**< Enable echo */
#define ECHOE 	0x0002 /**< Echo erase character as error-correcting backspace */
#define ECHOK 	0x0004 /**< Echo KILL */
#define ECHONL 	0x0008 /**< Echo NL */
#define ICANON 	0x0010 /**< Canonical input (erase and kill processing) */
#define IEXTEN 	0x0020 /**< Enable extended input character processing */
#define ISIG 	0x0040 /**< Enable signals */
#define NOFLSH 	0x0080 /**< Disable flush after interrupt or quit */
#define TOSTOP 	0x0100 /**< Send SIGTTOU for background output */
#define XCASE 	0X0200 /**< Canonical upper/lower presentation (LEGACY) */
/** @} */

/** @subpage termios  Attribute Selection
 * @{
 * The following symbolic constants for use with tcsetattr() are defined:
 */
#define TCSANOW 	0x0001 /**< Change attributes immediately */
#define TCSADRAIN 	0x0002 /**< Change attributes when output has drained */
#define TCSAFLUSH 	0x0004 /**< Change attributes when output has drained;
				 *  also flush pending input. */
/** @} */

/** @subpage termios  Line Control
 * @{
 * The following symbolic constants for use with tcflush() are defined:
 */
#define TCIFLUSH 0 /**< Flush pending input. Flush untransmitted output */
#define TCOFLUSH 4 /**< Flush untransmitted output */
#define TCIOFLUSH 2 /**< Flush both pending input and untransmitted output */

/* The following symbolic constants for use with tcflow() are defined: */
#define TCOOFF 	0 /**< Suspend output */
#define TCOON 	1 /**< Restart output */
#define TCIOFF 	2 /**< Transmit a STOP character, to suspend input data. */
#define TCION 	3 /**< Transmit a START character, to restart input data. */
/** @} */


/** @todo Prototypes */

#endif /* _TERMIOS_H_ */
