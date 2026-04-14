#include<stdio.h>
void main(){
    int num1;
    int num2;
        printf("Enter first number");
        scanf("%d",&num1);

        printf("Enter Second number ");
        scanf("%d",&num2);

    if(num1 > num2){
            printf("num 1 is maximum");

    }else if(num1 < num2){
            printf("num 2 is maximum");
    }else{
            printf("nums are equal ");

    }



}