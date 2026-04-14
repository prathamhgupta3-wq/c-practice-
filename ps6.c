#include<stdio.h>
void main(){
    int x;
    printf("Enter number");
    scanf("%d",&x);

    
    if(x%3==0 && x%7==0){


        printf("Number is divisible by 3 & 7");

    }else{
        printf("Number is not divisible ");

    }
}