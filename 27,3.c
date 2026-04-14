
#include<stdio.h>

int fun(int x){
	return x*x;
}

void main(){
	int x,y;
	
	printf("enter range of number \nfrom : \n");
	scanf("%d",&x);
	printf("to : \n");
	scanf("%d",&y);
	
	int (*ptr)() = fun;

	for(int z = x;z < y + 1;z++){

			printf("square of %d is : %d \n",z,ptr(z));			



	}

}

