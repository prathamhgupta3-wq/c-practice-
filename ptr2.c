#include<stdio.h>

void main(){


    // reason why type of pointer should match type variable whose address is stored 
    

    int x = 10;

    //refrencing

    char *ptr1 = &x;

    printf("%d\n",x);
    printf("%d\n",&x);
    printf("%d\n",ptr1);

    //derefrencing

    printf("%d\n",*ptr1);


}