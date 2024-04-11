//
// Created by brice on 24-4-1.
//
#include <arpa/inet.h>
#include <stdio.h>

int main()
{
    char *addr_1 = "1.2.3.4";
    char *addr_2 = "1.2.3.256";

    unsigned long conv_addr = inet_addr(addr_1);
    if(conv_addr == INADDR_NONE){
        printf("Error occur\n");
    } else {
        printf("Network order integer addr : %#lx\n",conv_addr);
    }

    conv_addr = inet_addr(addr_2);
    if(conv_addr == INADDR_NONE){
        printf("Error occur\n");
    } else {
        printf("Network order integer addr : %#lx\n",conv_addr);
    }

    // 不仅可以检测是不是有效地址 还可以将地址转换为32位整形
    return 0;
}
