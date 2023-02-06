#include <linux/module.h>
#include <linux/kernel.h>

int hello_init(void){
    printk("[Group Null][Riley Than] Hello, I am Riley Than, a student of CSE330 Spring 2023\n");
    return 0;
}

void hello_exit(void){
    printk("Goodbye Riley Than!\n");
}

module_init(hello_init);
module_exit(hello_exit);
MODULE_LICENSE("GPL");