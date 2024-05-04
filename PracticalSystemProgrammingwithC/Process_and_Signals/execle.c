#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(){
	char *binary_path = "/bin/bash";
	char *argv1 = "-c";
	char *argv2 = "echo \"print $HELLO $SUP.\" ";
	char *const envp[] = {"HELLO=hello","SUP=world",NULL};

	execle(binary_path,binary_path,argv1,argv2,NULL,envp);
}
