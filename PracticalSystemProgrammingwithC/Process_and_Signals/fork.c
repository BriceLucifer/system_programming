#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <stdlib.h>

int main() {

    pid_t pid = fork();  // 创建子进程

    if (pid == -1) {
        // fork失败
        printf("创建进程失败\n");
        exit(EXIT_FAILURE);
    } else if (pid == 0) {
        // 子进程
        sleep(10);  // 子进程等待10秒
        printf("子进程睡眠10s完成\n 子进程ID = %d\n",getpid());
    } else {
        wait(NULL);  // 父进程等待子进程结束
        printf("父进程ID = %d\n",getpid());
    }

    return 0;
}
