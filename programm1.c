#include<stdio.h>

void main(){

	int x,y,z;
	x = 10;
	y = 20;
	z = 30;

	int* ptr1 = &x;
	int* ptr2 = &y;
	int* ptr3 = &z;
		
	int arr[] = {x,y,z};
    
    int* arr1[] = {ptr1,ptr2,ptr3};
    int** arr2[] = {&ptr1,&ptr2,&ptr3};
					
	printf("%p\n",arr);    // #
	printf("%d\n",arr[0]); // *
	printf("\n");
	
	printf("%p\n",arr1[0]); // #
	printf("%p\n",arr1); 	// &
	printf("%d\n",*arr1[0]);   // *
	printf("\n");

	printf("%p\n",*arr2[0]); // #
	printf("%p\n",arr2[0]);	 // &
	printf("%p\n",arr2);         // $
	printf("%d\n",**arr2[0]);         // *
	printf("\n");
	


}
