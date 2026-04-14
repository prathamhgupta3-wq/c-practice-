#include<stdio.h>

void fun(int);

void main(){

	int x;
	printf("enter any number \n");
	scanf("%d",&x);
	
	fun(x);

}

void fun(int x){
	
	int count = 0;
	int sum = 0;
	int temp = x;
	int ox = x;
	do{
		count += 1;
		temp = temp/10;

	}while(temp != 0);

	do{
		int temp1 = x%10;
		x = x/10;
		int y = count;
		int temp2 = 1;

		do{
			temp2 = temp2*temp1 ;	
			y--;
			
		}while (y != 0);

		sum += temp2;

	}while(x != 0);

	if(sum == ox ){
		printf("%d is armstrong \n",ox);
	}else{
		printf("%d is not armstrong \n ",ox);
	}


}
