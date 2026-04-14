


#include<stdio.h>

int fun(int x;){

	for(int y = 1;y < x/2 + 2;y++){

		if(x%y == 0){
			return 1;
		}else{
		
		}

	}

	return 2;
}
void main(){
	
	int x;

	printf("enter any number \n");
	scanf("%d",&x);

	if(fun(int x) == 1){

		printf("%d is composite \n",x);

	}else if(fun(int x) == 2 ){
		printf("%d is prime \n",x);
	}


}
