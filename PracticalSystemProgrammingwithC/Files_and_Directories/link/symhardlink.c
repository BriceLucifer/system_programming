#include <stdio.h>
#include <unistd.h>

/*
 * int link(const char *filepath, const char *linkname)
 * success -> 0
 * fail	   -> -1
 */

int main(){
	int link_status;
	char filepath[50],linkname[50];

	printf("Enter the filename: ");
	scanf("%[^\n]%*c",filepath);
	printf("Enter the linkname: ");
	scanf("%[^\n]%*c",linkname);

	link_status = link(filepath,linkname);
	if(link_status == 0){
		printf("HardLink is Created successfully!\n");
	}else{
		printf("Unable to Create the Link...\n");
	}

	return 0;
}
