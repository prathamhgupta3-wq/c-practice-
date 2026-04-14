#include<stdio.h>

void main(){

    int x = 10;
    int y = 20;
    int z;

    int *ptr1 = &x;                  //1000
    int *ptr2 = &y;
    int *ptr3 = &z;                  //2000


    printf("%p\n",ptr1);
    printf("%p\n",ptr2);
    printf("%p\n",ptr2);

    printf("%p\n",&ptr1);
    printf("%p\n",&ptr2);
    printf("%p\n",&ptr2);


}