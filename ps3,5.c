#include<stdio.h>
void main(){

    int units;
    int cost;
   

    printf("Enter units used");
    scanf("%d",&units);


    if(units<=100){
        cost = 5;
    }else if(units <= 200){
        cost = 7;
    }else{
        cost = 10;                                    

    }

    int total_bill = units*cost;                                                                         

    printf("%d",total_bill);



}