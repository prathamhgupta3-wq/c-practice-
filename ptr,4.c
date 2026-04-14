#include<stdio.h>

void mainA(){

    int x = 30;
    int *ptr = &x;

    printf("%d\n",x);
    printf("%d\n",*ptr);

    // changing value with using pointer 

    *ptr = 50;            // location value = read value *ptr here is l value   # variable at ptr  

    // 30 = 50;              // error l value required 

    printf("%d\n",x);
    printf("%d\n",*ptr);      // value *ptr is value  # value at ptr








}