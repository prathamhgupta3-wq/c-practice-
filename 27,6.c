

#include<stdio.h>

void fun(int x){

	int temp = x;
	int y = 0;

	do{

		y = y*10 + temp%10;
		temp = temp/10;
		
		
	}while(temp != 0);

	if(y == x){
		printf("%d is pallindrome \n",x);
	}else{
		printf("%d is not pallindrome \n ",x);
	}


}

void main(){


	int x;
	printf("enter any number \n");
	scanf("%d",&x);

	void (*ptr)() = fun;
	ptr(x);

}
