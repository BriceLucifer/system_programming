#include "error.h"
#include <fcntl.h>

#define BUFSIZE 1000

int main()
{
    // file descriptor
    int fd;
    char buf[BUFSIZE] ;

    // 打开文件
    fd = open("data.txt",O_RDONLY);
    if(fd == -1){
        error_handling("open() error");
    }

    // 读取文件
    if(read(fd,buf, sizeof(buf)-1) == -1){
        error_handling("read() error");
    }

    // 打印文件描述符
    printf("file descriptor is %d\n",fd);
    printf("file data is %s",buf);
    close(fd);
    return 0;
}