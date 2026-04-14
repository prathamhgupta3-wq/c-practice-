#include<stdio.h>

void main(){

    int percentage;

    printf("Enter your percentage ");
    scanf("%d",&percentage);

    if(percentage>=95){
        printf("Distinction");

    }else if(percentage<95 && percentage>=85){
        printf("First class");
    }else if(percentage<85 && percentage>=70){
        printf("second class");


    }else if(percentage<70 && percentage>=40){

        printf("Third class");

    }else{
        printf("Failed");
    }

    
}