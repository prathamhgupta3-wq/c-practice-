
#include<stdio.h>


void fun(int);

void main(){

	int x;
	printf("enter any number \n");

	scanf("%d",&x);

	fun(x);

}

void fun(int x){

	int temp = x;
	int sum = 0;

	do{
		int temp1;
		temp1 = temp%10;
		sum += temp1;
		temp = temp/10;

	}while(temp != 0);

	if(x%sum == 0){
		printf("%d is Niven/Harshad number \n",x);
	}else{
		printf("%d is not Niven/Harshad number \n",x);
	}

}
