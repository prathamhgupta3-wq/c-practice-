#include<stdio.h>

void main(){

    int x = 121 ;
    int temp = 0;
    int var = x;
    int rem;

    while(x > 0){

        rem = x%10;
        temp = rem + temp*10;
        
        x = x/10;

    }
    if(var = temp){
        printf("number is pallindrome ");

    }else{
        printf("number is not pllindrome ");

    }
}