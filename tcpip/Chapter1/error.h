
#ifndef CHAPTER1_ERROR_H
#define CHAPTER1_ERROR_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <arpa/inet.h>
#include <sys/socket.h>

// 错误处理
void error_handling(char *message){
    fputs(message,stderr);
    fputs("\n",stderr);
    exit(1);
}

#endif //CHAPTER1_ERROR_H
