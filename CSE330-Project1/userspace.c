#include <stdio.h>
#include <linux/kernel.h>
#include <unistd.h>
#include <unistd.h>

int main(){
    long int shoutout = syscall(450);
    printf("System call sys_call returned %ld\n", shoutout);
    return 0;
}