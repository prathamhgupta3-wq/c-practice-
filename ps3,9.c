#include<stdio.h>

void main(){

    int num1;
    int num2;
    int num3;

    printf("Enter three numbers");
    scanf("%d",&num1);
    scanf("%d",&num2);
    scanf("%d",&num3);

    if(num1> num3 && num1>num2){
        if( num1*num1 == num2*num2 + num3*num3 ){
            printf("They are pythagorian triplet");
        }else{
            printf("They are not pythagorian triplet");
        }
    }else if(num2> num3 && num2>num1){
        if( num2*num2 == num3*num3 + num1*num1 ){
            printf("They are pythagorian triplet");
        }else{
            printf("They are not pythagorian triplet");
        }
    }else{
             if( num3*num3 == num2*num2 + num1*num1 ){
            printf("They are pythagorian triplet");
        }else {
            printf("They are not pythagorian triplet");
        }
    }


    
}