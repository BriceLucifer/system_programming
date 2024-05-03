#include <stdio.h>
#include <stdlib.h>

int main(){
	char name[50];
	printf("Enter the variable to delete :\n");
	scanf("%s",name);

	int status = unsetenv(name);
	if(status == 0){
		printf("unset successfully\n");
	}else{
		printf("unset fail\n");
	}

	return 0;
}
