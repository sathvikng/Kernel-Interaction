# Kernel-Interaction

Commands used:
$ uname -r //to find out the current version of kernel being used
$ sudo make -C /usr/src/(headerversion_here) M=directory being used // will generate kernel object file
$ dmesg //to see kernel log
$ sudo insmod file_name.ko to make interaction with the kernel
$ dmesg // to see log again
$ sudo rmmod file_name.ko to remove the kernel object file inserted
