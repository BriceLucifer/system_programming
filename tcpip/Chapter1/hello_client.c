#include "error.h"

int main(int argc,char *argv[])
{
    int sock;
    struct sockaddr_in serv_addr;
    char message[30] ;
    int str_len ;

    // 用例
    if(argc != 3){
        printf("Uage : %s <IP> <PORT>\n",argv[0]);
        exit(-1);
    }

    sock = socket(PF_INET,SOCK_STREAM,0);
    if(sock == -1){
        error_handling("socket() error");
    }

    memset(&serv_addr,0,sizeof(serv_addr));
    // 设置接受端口啥的 协议
    serv_addr.sin_family = AF_INET; // IPv4
    serv_addr.sin_addr.s_addr = inet_addr(argv[1]);
    serv_addr.sin_port = htons(atoi(argv[2]));

    if(connect(sock,(struct sockaddr*)&serv_addr,sizeof(serv_addr)) == -1){
        error_handling("connect() error");
    }

    // 将server内容发送过来
    str_len = read(sock,message, sizeof(message)-1);
    if(str_len == -1){
        error_handling("read() error");
    }

    printf("Message from server : %s\n",message);
    close(sock);
    return 0;

}