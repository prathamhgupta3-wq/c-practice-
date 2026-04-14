#include<stdio.h>

void main(){

    int arr1[] = {10,20,30};
    int arr2[] = {40,50,60};
    
    
    int* ptr0 = arr1;
    printf("%d\n",*ptr0);
    printf("%p\n",ptr0);
    printf("%p\n",ptr0 + 3);

    int* ptr1 = &arr1;
    ptr1 = ptr1 + 1;
    printf("%d\n",*ptr1);
    printf("%p\n",ptr1);

    int* ptr2 = &arr1 + 1;
    printf("%d\n",*ptr2);
    printf("%p\n",ptr2);

     int* ptr21 = arr2;
    printf("%d\n",*ptr21);
    printf("%p\n",ptr21);
    

}