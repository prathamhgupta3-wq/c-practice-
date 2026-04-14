#include<stdio.h>
void main(){
    int x;
    printf("Enter Number");
    scanf("%d",&x);

    if(x /7>3 && x % 7 == 0){

        
        printf("Number is divisible by 7 ");
        printf("Number is greater than 21");


    } else if (x/7 < 3 && x%7==0){

        printf("Number is divisible by 7");
        printf("Number is less than 21");
    }else{
        printf("Number is not divisible by 7 ");

    }




    
}