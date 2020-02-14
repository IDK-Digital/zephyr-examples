#ifndef _KERNEL_VERSION_H_
#define _KERNEL_VERSION_H_

#define ZEPHYR_VERSION_CODE 69120
#define ZEPHYR_VERSION(a,b,c) (((a) << 16) + ((b) << 8) + (c))

#define KERNELVERSION          0x10E0000
#define KERNEL_VERSION_NUMBER  0x10E00
#define KERNEL_VERSION_MAJOR   1
#define KERNEL_VERSION_MINOR   14
#define KERNEL_PATCHLEVEL      0
#define KERNEL_VERSION_STRING  "1.14.0-rc2"

#endif /* _KERNEL_VERSION_H_ */
