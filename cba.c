
#include<stdio.h>

void fun(int* x,int* y){

	*x = *x + 1;
	*y = *y + 1;
	
	printf("fun = %d %d \n",*x,*y);

}
void main(){

	int x = 10;
	int y = 20;

	printf("main = %d %d\n",x,y);

	fun(&x,&y);

	printf("main = %d %d\n",x,y);

}
