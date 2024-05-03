#include<stdio.h>
#include<sys/stat.h>
#include<sys/types.h>
#include<unistd.h>
int main(){
	int isRemoved;
	char DIR_NAME[200];
	printf("Enter the dirctory name you want to delete: ");
	scanf("%[^\n]%*c",DIR_NAME);
	isRemoved = rmdir(DIR_NAME);

	if(isRemoved == 0){
		printf("Removed successfully!\n");
	}else{
		printf("Unable to removed...\n");
	}

	return 0;
}
