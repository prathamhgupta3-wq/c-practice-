
#include<stdio.h>

int fun(int);

void main(){

	int size;
	printf("enter size of array \n");
	scanf("%d",&size);

	int arr[size];

	for(int x = 0;x < size;x++){
		printf("enter %d index array element \n",x);
		scanf("%d",arr + x);
	}

	printf("cube of array elements are : \n");

	for(int x = 0;x < size;x++){
		printf(" %d |",fun(*(arr + x)));
	}

}

int fun(int x){

	int y = x*x*x;

	return y;
}
