#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

// Data collector
struct arguments{
	char *names;
	int age;
	char *bloodGroup;
};

// Thread Function
void *sayGreetings(void *data){
	// 先类型转换
	struct arguments *temp = (struct arguments*)data;
	printf("Name is %s",temp->names);
	printf("age is %d\n",temp->age);
	printf("bloodGroup is %s\n",temp->bloodGroup);
	return NULL;
}

int main()
{
	struct arguments* p = (struct arguments*)malloc(sizeof(struct arguments));
	printf("This is a simple Data collector Application\n");
	char bloodgroup[5],name[40];
	int age;
	printf("Enter name: ");
	fgets(name,40,stdin);
	printf("Enter age: ");
	scanf("%d",&age);
	printf("Enter bloodGroup: ");
	scanf("%s",bloodgroup);

	p->names = name;
	p->age = age;
	p->bloodGroup = bloodgroup;

	// 创建线程并且执行
	pthread_t thread;
	pthread_create(&thread,NULL,sayGreetings,(void *)p);
	pthread_join(thread,NULL);
	return 0;
}
