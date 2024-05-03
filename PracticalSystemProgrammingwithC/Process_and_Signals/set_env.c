#include <stdio.h>
#include <stdlib.h>

int main(){
	char name[50];
	char value[50];

	printf("Enter env_name: ");
	scanf("%s",name);
	printf("Enter env_value: ");
	scanf("%s",value);

	int overwritten;
	printf("Enter overwritten value 1->over 0->no_over: \n");
	scanf("%d",&overwritten);

	int status = setenv(name,value,overwritten);
	if(status == -1){
		printf("Created fail\n");
	}else if(status == 0){
		printf("Created successfully\n");
	}

	return 0;
}
