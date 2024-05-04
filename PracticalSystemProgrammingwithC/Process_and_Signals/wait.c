#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main(){
	int status = fork();
	if (status == 0){
		printf("hello from child process\n");
		printf("Chile work complete\n");
	}else{
		printf("hello from parent process\n");
		wait(NULL);
		printf("parent process terminated\n");
	}

	return 0;
}
