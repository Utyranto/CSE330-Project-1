#include <linux/kernel.h>

asmlinkage long sys_call(void) {
    printk("This is the new system call Than implemented.\n");
    return 0;
}