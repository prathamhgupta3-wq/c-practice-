#include<stdio.h>

void main(){

    int x,y,z;
    x = 10;
    y = 20;
    z = 30;

    int* arr[] = {&x,&y,&z};
    
    int* ptr1 = &x;
    int* ptr2 = &y;
    int* ptr3 = &z;
    int* arr[] = {&x,&y,&z};
    int* arr1[] = {ptr1,ptr2,ptr3};
    int* arr2[] = {&ptr1,&ptr2,&ptr3};
    int** arr3[] = {&ptr1,&ptr2,&ptr3};    // array of double pointer 


    printf("%d\n",sizeof(arr1));

    printf("%d\n",sizeof(arr));

    printf("%p\n",arr);
    printf("%p\n",arr + 1);


    for(int x = 0;x < 3;x++){

        printf("%p\n",arr[x]);
        printf("%p\n",&arr[x]);               // address of x , y , z
        printf("%d\n",*(arr[x]));            // valye at arr[x]
        printf("%d\n",*(*(arr + x)));        // value at (value at (ar + x))


    }
}