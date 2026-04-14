#include<stdio.h>

void main(){

    int x = 10;
    int y = 20;

    int *ptr1 = &x;                  //1000
    int *ptr2 = &y;                  //2000


    printf("%p\n",ptr1);
    printf("%p\n",ptr2);

    int *ptr3 = ptr1 + ptr2;           //3000

    printf("%p\n",ptr3);


}