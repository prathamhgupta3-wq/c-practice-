



#include<stdio.h>

int gun(int x,int y){

	return x*y;
}
int fun(int x){

	return x*50;
	

}

void main(){

	int (*ptr)() = fun;
	int retval = ptr(10);

	printf("%d\n",retval);
	
	int (*ptr1)()  = gun;
	retval = ptr1(20);

	printf("%d\n",retval);

}
