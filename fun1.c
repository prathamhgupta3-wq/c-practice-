#include<stdio.h>

void main(){

    int a,b,c;

      int z = scanf("%d  %d  %d",&a,&b,&c);              // returns counr of inputs

    printf("%d\n",z);      // 3


    int x = printf("%d %d\n",a,b);               // returns count of char in "" by replacing actual values or char it printing    
    printf("%d\n",x);       // 6

    int y = printf("Output : %d %d\n",x,z);

    printf("%d\n",y);      // 13  



    
   

}