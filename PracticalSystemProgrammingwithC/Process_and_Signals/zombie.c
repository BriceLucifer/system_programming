#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

int main(){
	pid_t pid = fork();
	if(pid > 0){
		printf("In parent process\n");
		printf("get pid:%d\n",getpid());
		sleep(10);
	}else{
		printf("get pid for child process:%d\n",getpid());
		exit(1);
	}
	return 0;
}
