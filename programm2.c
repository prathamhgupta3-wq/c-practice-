

#include<stdio.h>

void main(){

	int arr[] = {1,2,3,4};
	int arr1[] = {1,2,3,4};
	int arr2[] = {1,2,3,4};

	int* ptr[3] = {arr,arr1,arr2};

	for(int x = 0;x < 3;x++){
		printf("%d\n",*ptr[x]);
	}





}
