

#include<stdio.h>

int* fun(){

	int x = 10;

	int* ptr = &x;

	return ptr;
}

void main(){

	printf("start main\n");

	int* ptr2 = fun();

	printf("%d\n",*ptr2);

	printf("end main");
	
	int z = 15;
	printf("%d\n",z++);
	printf("%d\n",z);
}
