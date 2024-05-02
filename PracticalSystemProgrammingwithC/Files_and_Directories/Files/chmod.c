#include <stdio.h>
#include <sys/stat.h>
#include <stdlib.h>

int main(){
	int permission_status;
	mode_t new_permission_value;
	char filepath[100];

	printf("Enter the filename with path: ");
	scanf("%[^\n]%*c",filepath);
	printf("Enter the new permission set: ");
	printf("(permission start with 0)");
	// 建议使用八进制读取 不然出错 : ）	
	scanf("%o",&new_permission_value);

	/* #include <sys/stat.h>
	 * chmod(filepath,new_permission_value) -> int 
	 * 0 -> success
	 * -1 -> fail
	 */
	permission_status = chmod(filepath,new_permission_value);
	if(permission_status == 0){
		printf("new permission is setted successfully\n");
	}else if(permission_status == -1){
		printf("chmod fail !!!\n");
	}
	else{
		printf("permission Changed successfully\n");
	}

	return 0;
}
