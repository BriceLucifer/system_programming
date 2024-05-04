#include <stdio.h>
#include <unistd.h>

int main(){
	char *args[] = {"/bin/ls","-al",NULL};
	execv(args[0],args);

	return 0;
}
