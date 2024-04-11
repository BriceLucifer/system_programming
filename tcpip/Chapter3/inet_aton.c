#include <stdio.h>
#include <arpa/inet.h>

void Error_handling(char *message);

int main()
{
    char *addr_1 = "127.232.124.79";
    struct sockaddr_in addr_inet;
    /*
     * inet_addr 和 inet_aton 功能相同 只不过inet_aton
     * 简化了 将地址转化为32位整型之后 绑定到结构体sockaddr_in
     * 的过程 成功返回1 true 失败0 false
     */
    if(!inet_aton(addr_1,&(addr_inet.sin_addr))){
        Error_handling("Conversion Error");
    } else {
        printf("Network odered integer addr : %#x\n",addr_inet.sin_addr.s_addr);
    }

    return 0;
}

void Error_handling(char *message){
    fputs(message,stderr);
    fputs("\n",stderr);
}