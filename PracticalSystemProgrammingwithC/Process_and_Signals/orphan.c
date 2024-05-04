#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>

int main(){
	pid_t childPID;
	childPID = fork();

	if(childPID == 0){
		printf("In child process... PID :%d \n",getpid());
		sleep(10);
		printf("After sleep time PID :%d\n",getpid());
	}else{
		printf("In Parent process PID :%d \n",getpid());
	}
	printf("get init pid :%d\n",getpid());
	return 0;
}
