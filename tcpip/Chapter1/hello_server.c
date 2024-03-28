#include "error.h"

int main(int argc,char *argv[])
{
    int serv_sock;
    int clnt_sock;

    struct sockaddr_in serv_addr;
    struct sockaddr_in clnt_addr;
    socklen_t clnt_addr_size;

    char message[] = "Hello world from server";
    if(argc != 2){
        printf("Uage : %s <port>\n",argv[0]);
        exit(1);
    }

    // 创建 socket()
    /**/
    serv_sock = socket(PF_INET,SOCK_STREAM,0);
    if(serv_sock == -1){
        error_handling("scoket() error");
    }

    // bind() 地址
    memset(&serv_addr,0, sizeof(serv_sock));
    serv_addr.sin_family = AF_INET;
    serv_addr.sin_addr.s_addr = htonl(INADDR_ANY);
    serv_addr.sin_port = htons(atoi(argv[1]));
    // 参数会后序学习衍生

    if(bind(serv_sock,(struct sockaddr*)&serv_addr, sizeof(serv_addr)) == -1){
        error_handling("bind() error");
    }

    // 接听listen()
    if(listen(serv_sock,5) == -1){
        error_handling("listen() error");
    }

    // 客户端地址长度
    clnt_addr_size = sizeof(clnt_addr);
    // 接受 accept()
    clnt_sock = accept(serv_sock,(struct sockaddr*)&clnt_addr,&clnt_addr_size);
    if(clnt_sock == -1){
        error_handling("accept() error");
    }

    // 将server的信息写入到输出流
    write(clnt_sock,message, sizeof(message));
    // 关闭clnt serv
    close(clnt_sock);
    close(serv_sock);
    return 0;
}