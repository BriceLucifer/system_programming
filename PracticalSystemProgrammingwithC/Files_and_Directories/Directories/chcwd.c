#include <stdio.h>
#include <unistd.h>

int main(){
	char DIR[2024];
	printf("Before : [%s]\n",getcwd(DIR,2024));
	int status = chdir("..");
	if(status == 0){
		printf("Directory is changed to Parent Directory!\n");
	}else{
		printf("Unable to change!\n");
	}

	printf("After : [%s]\n",getcwd(DIR,2024));
	return 0;
}
