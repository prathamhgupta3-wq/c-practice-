#include<stdio.h>

void main(){

    int x;
    int rem;
    int arm = 0;
    int count = 1;

    printf("enter any number \n");
    scanf("%d",&x);


    while(x > 0 ){

        rem = x%10;
        x = x/10;

        if(x != 0){

            count++;
        }else{}
    
    }
    printf("%d \n",count);


}