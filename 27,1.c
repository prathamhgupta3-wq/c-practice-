
#include<stdio.h>

int fun(int x){
	
	int product = 1;

	for(int y = x;y > 0;y--){

		product = product*y;
	}

	return product;

	}

void main(){

	int x;

	printf("Enter any number \n");
	scanf("%d",&x);
	
	int (*ptr)() = fun;

	printf("%d factorial is :  %d\n",x,ptr(x));


}
