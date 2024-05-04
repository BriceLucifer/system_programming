#include <unistd.h>

int main(){
	char *binary_path = "/bin/bash";
	char *const args[] = {binary_path,"-c","echo $VARIABLE $PORT",NULL};
	char *const env[] = {"VARIABLE=https:xxx.com","PORT=80",NULL};
	execve(binary_path,args,env);

	return 0;
}
