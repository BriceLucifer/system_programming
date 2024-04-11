//
// Created by brice on 24-3-29.
//
#include <stdio.h>
#include <arpa/inet.h>

int main()
{
    // 转换为大段序列数据
    unsigned short host_port = 0x1234;
    unsigned short net_port;

    unsigned long host_addr = 0x12345678;
    unsigned long net_addr;

    // host to-> net (type short)
    net_port = htons(host_port);
    net_addr = htonl(host_addr);

    printf("Host oder post = %#x\n",host_port);
    printf("Net oder post = %#x\n",net_port);
    printf("Host oder address = %#lx\n",host_addr);
    printf("Net oder address = %#lx\n",net_addr);
    // 小端序列
    /*
     * Host oder post = 0x1234
     * Net oder post = 0x3412
     * Host oder address = 0x12345678
     * Net oder address = 0x78563412
     */
}