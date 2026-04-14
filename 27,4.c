
#include<stdio.h>

void fun(int x){

	int sum = 0;

	int temp = x;
		
	do{
		int product = 1;
		int y = temp%10;
		temp = temp/10;

		for(int z = y;z > 0;z--){
			product = product*z;
		}
		sum += product; 


	}while(temp != 0);

	if(sum == x){
		printf("%d is strong number \n",x);
	}else{
		printf("%d is not strong number \n",x);
	}
}

void main(){

	int x;
	printf("enter any number \n");
	scanf("%d",&x);

	void (*ptr)() = fun;
	ptr(x);





}
