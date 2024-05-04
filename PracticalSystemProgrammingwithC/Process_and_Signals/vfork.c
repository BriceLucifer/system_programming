#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(){
	pid_t status;
	status = vfork();
	printf("Parent Executing pid : %d\n",getgid());
	if(status == 0){
		printf("Child is executing... pid:%d\n",getgid());
		exit(0);
	}else{
		printf("Parent Executing pid : %d\n",getgid());
	}
	return 0;
}
