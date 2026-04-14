#include<stdio.h>

void main(){

    int num = 0;
    printf("Enter Number : \n");
    scanf("%d",&num);

    for(int x = 1 ;x!=11;x++){

        printf("%d x %d =  %d \n",num,x,num*x);


    }
}