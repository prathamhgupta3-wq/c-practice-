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
    int** arr3[] = {&ptr1,&ptr2,&ptr3};
    int* arr1[] = {ptr1,ptr2,ptr3};
    int** arr2[] = {arr1,&arr1[1],&arr1[2]};
					
	printf("%p\n",&x);    // %   address of x
	printf("\n");
	
	printf("%p\n",arr);    // %   address of arr
	printf("%d\n",arr[0]); // *   value at x
	printf("\n");

    printf("%p\n",*arr3[0]); // % address of x
    printf("%p\n",arr3[0]); //  # address of ptr1
	printf("%p\n",arr3); 	
	printf("%d\n",**arr3[0]);   // * value at ptr 1
	printf("\n");

	
	printf("%p\n",arr1[0]); // #    address of  ptr 1
	printf("%p\n",arr1); 	// &    address of arr1
	printf("%d\n",*arr1[0]);   // * value at ptr 1
	printf("\n");

	printf("%p\n",*arr2[0]); // #       address at arr1  
	printf("%p\n",arr2[0]);	 // &       address of arr1
	printf("%p\n",arr2);         // $      
	printf("%d\n",**arr2[0]);         // * value at value at arr1
	printf("\n");
	


}
