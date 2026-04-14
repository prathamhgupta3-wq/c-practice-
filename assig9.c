
#include<stdio.h>

void main(){

	int x = 10;
	int* y = &x;
	int** z = &y;

	printf("%d\n",x);
	printf("%d\n",*y);
	printf("%d\n",**z);
	printf("%d\n",*&x);
	printf("%d\n",*(*&y));
	printf("\n");
	printf("%p\n",&x);
	printf("%p\n",y);
	printf("%p\n",*z);
	printf("\n");
	printf("%p\n",*&z);
	printf("%p\n",&y);
	printf("%p\n",z);
	printf("\n");
	printf("%p\n",&z);
	
	

}
