#include<stdio.h>

void main(){
    // addition of pointer and integer  
    int arr[3] = {10,20,30};
    int x = arr;
    

    int *ptr1 = &(arr[0]);                  //1000 STL standard template library 
    int *ptr2 = NULL;


    printf("%d\n",x);
    


    printf("%d\n",arr[0]);     // 10
    printf("%d\n",*ptr1);      // 10
    printf("%p\n",ptr1);       // add 

    ptr2 = ptr1 + 1;           // 1*size of DTP of pointer another reason for same type 
    
    
    printf("%d\n",*ptr2);
    printf("%p\n",ptr2);

    ptr2 = ptr1++;

    printf("%d\n",*ptr2);
    printf("%p\n",ptr2);

   



}