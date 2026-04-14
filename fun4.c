#include<stdio.h>

void fun(int x,int y){

            x = x + 1;
            y = y + 1;
    printf("fun = %d\n",x);
    printf("fun = %d\n",y);

}

void main(){

    int x = 10;
    int y = 20;
    printf("main1 = %d\n",x);
    printf("main1 = %d\n",y);
 
    fun(x,y);

    printf("main2 = %d\n",x);
    printf("main2 = %d\n",y);

}