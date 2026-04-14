
#include<stdio.h>


int fun(int x){
	
	int temp = x;
	int count = 0;

	do{	
		int temp1 = temp%10;

		if(temp1 == 0){
			count += 1;
			break;
		}

		temp = temp/10;




	}while(temp != 0);
	
	return count;

}

void main(){

	int x;

	printf("enter any number \n");
	scanf("%d",&x);

	if(fun(x) == 1){

		printf("%d is duck \n",x);


	}else{
		printf("%d is not duck \n",x);

	}

}


