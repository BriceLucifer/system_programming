//
// Created by brice on 24-3-28.
//
#include "error.h"
#include <fcntl.h>

int main(){
    // 创建一个文件和两个socket
    int fd1,fd2,fd3;

    fd1 = socket(PF_INET,SOCK_STREAM,0);
    fd2 = socket(PF_INET,SOCK_DGRAM,0);
    fd3 = open("data.txt",O_CREAT|O_RDONLY|O_TRUNC);

    printf("File descriptor 1 is %d\n",fd1);
    printf("File descriptor 2 is %d\n",fd2);
    printf("File descriptor 3 is %d\n",fd3);

    close(fd1);
    close(fd2);
    close(fd3);
    return 0;
}