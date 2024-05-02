#include <stdio.h>
#include <fcntl.h>

int main(){
	int file_descriptor;
	char file_name[50];

	printf("enter your filename which you want to open\n");
	scanf("%s",file_name);
	file_descriptor = open(file_name,O_RDONLY); // 只读打开
	if(file_descriptor != -1){
		printf("%s is opened successfully!\n",file_name);
	}else{
		printf("Unable to open %s!\n",file_name);
	}

	return 0;
}
