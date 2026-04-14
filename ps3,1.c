#include<stdio.h>

void main(){
    int x;

    printf("Enter any number");
    scanf("%d",x);
    
    if(x<=1000 && x>=1){
        printf("Num is in range");

    }else{
        printf("Num is not in range");
        
    }
    
}