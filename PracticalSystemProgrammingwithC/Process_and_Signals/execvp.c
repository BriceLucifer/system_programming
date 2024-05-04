#include <stdio.h>
#include <unistd.h>

int main(){
	char *program_name = "ls";
	char *args[] = {program_name,"-al","..",NULL};
	execvp(program_name,args);

	return 0;
}
