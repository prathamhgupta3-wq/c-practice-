
#include<stdio.h>

int fun(int x){

	int count = 0;

	for(int y = 1;y < x/2 + 2;y++){

		if(x%y == 0){
			count += 1;
		}else{
		
		}

	}

	return count;
}
void main(){
	
	int x;

	printf("enter any number \n");
	scanf("%d",&x);
	
	int retval = fun(x);
		
	
	if(retval > 1){

		printf("%d is composite \n",x);

	}else{
		printf("%d is prime \n",x);
	}


}
