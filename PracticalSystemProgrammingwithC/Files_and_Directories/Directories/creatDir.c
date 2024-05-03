#include <stdio.h>
#include <sys/stat.h>
#include <sys/stat.h>

int main(){
	int isCreated;
	char DIR_NAME[40];
	printf("Enter the DIR_NAME you want: ");
	scanf("%[^\n]%*c",DIR_NAME);

	isCreated = mkdir(DIR_NAME,0777);

	if(isCreated == 0){
		printf("Directory is Created successfully!\n");
	}else{
		printf("Unable to Create Directory!\n");
	}

	return 0;
}
