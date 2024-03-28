//
// Created by brice on 24-3-28.
//
#include "error.h"
#include <sys/types.h>
#include <fcntl.h>

// 文件描述符 {file Descriptor}每个文件有自己的描述符 方便使用和查阅
int main()
{
    // 文件描述符
    int fd ;
    char buf[] = "Let's go!\n";

    // 打开函数
    fd = open("data.txt",O_CREAT|O_WRONLY|O_TRUNC);
    if(fd == -1){
        error_handling("open() error");
    }
    printf("file descriptor is :%d\n",fd);

    // 写入函数
    if(write(fd,buf,sizeof(buf))==-1){
        error_handling("write() error");
    }

    // 关闭函数
    close(fd);
    return 0;
}