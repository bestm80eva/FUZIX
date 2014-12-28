/* Enable to make ^Z dump the inode table for debug */
#undef CONFIG_IDUMP
/* Enable to make ^A drop back into the monitor */
#undef CONFIG_MONITOR
/* Profil syscall support (not yet complete) */
#undef CONFIG_PROFIL
/* Multiple processes in memory at once */
#define CONFIG_MULTI
/* Single tasking */
#undef CONFIG_SINGLETASK
/* CP/M emulation */
#undef CONFIG_CPM_EMU
/* Fixed banking */
#define CONFIG_BANK_FIXED
/* 8 60K banks, 1 is kernel */
#define MAX_MAPS	8
#define MAP_SIZE	0xF000U

/* Banks as reported to user space */
#define CONFIG_BANKS	1

#define TICKSPERSEC 100U   /* Ticks per second */
#define PROGBASE    0x0000  /* also data base */
#define PROGLOAD    0x0100  /* also data base */
#define PROGTOP     0xF000  /* Top of program, base of U_DATA copy */
#define PROC_SIZE   64	  /* Memory needed per process */

/* WRS: this is probably wrong -- we want to swap the full 64K minus the common code */
/* For now let's just use something and fix this up later when we have a swap device */
#define SWAP_SIZE   0x7F 	/* 63.5K in blocks (which is the wrong number) */
#define SWAPBASE    0x0000	/* start at the base of user mem */
#define SWAPTOP	    0xFF00	/* can we stop at the top? not sure how. let's stop short. */
#define MAX_SWAPS	10	    /* Well, that depends really, hmmmmmm. Pick a number, any number. */

#define BOOT_TTY (512 + 1)/* Set this to default device for stdio, stderr */
                          /* In this case, the default is the first TTY device */

/* We need a tidier way to do this from the loader */
#define CMDLINE	(0x0081)  /* Location of root dev name */

/* Device parameters */
#define NUM_DEV_TTY 2

#define TTYDEV   BOOT_TTY /* Device used by kernel for messages, panics */
//#define SWAPDEV  (256 + 1)  /* Device for swapping. (z80pack drive J) */
#define NBUFS    10       /* Number of block buffers */
#define NMOUNTS	 4	  /* Number of mounts at a time */

/* Hardware parameters */
#define Z180_IO_BASE       0x40

#define DEVICE_IDE                  /* enable if IDE interface present */
#define IDE_REG_BASE       0x80
#define IDE_8BIT_ONLY
#define IDE_REG_CS1_FIRST