#include <stdio.h>
#include <unistd.h>
#include <pthread.h>
#include <stdlib.h>

// 建设自定义函数
void *customThreadFunction(){
	for(int i = 0; i < 15 ; i++){
		printf("I am a customThreadFunction created by programmer\n");
		sleep(1);
		// 睡眠1秒
	}

	return NULL;
}

int main(){
	pthread_t thread; // 线程描述符
	int status = pthread_create(&thread,NULL,customThreadFunction,NULL);
	// 四个参数 第一个描述符指针, 第二个线程属性,第三个线程执行的函数,第四个函数参数
	// 返回0 -> success 
	// 返回1 -> fail
	
	if(!status){
		printf("creat successfully\n");
	}else{
		printf("unable to creat the customThreadFunction\n");
		return 0;
	}
	
	// 主线程
	for(int i = 0 ; i < 15 ; i++){
		printf("I am the process thread created by compiler by default\n");
		sleep(1);
	}

	return 0;
}
