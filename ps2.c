#include<stdio.h>
void main(){
    int num;
    printf("Enter number");
    scanf("%d",&num);

    if(num % 10 == 0 || num % 5 == 0 ){
        printf("Number is divisible");


    }else{
        printf("Number is not divisible");
    }



    
}