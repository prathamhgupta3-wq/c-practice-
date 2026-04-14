#include<stdio.h>
void main(){
    int angle1;
    int angle2;
    int angle3;

    printf("Enter angles of triangle");
    scanf("%d",&angle1);
    scanf("%d",&angle2);
    scanf("%d",&angle3);

    if(angle1 + angle2 + angle3 == 180 && angle1>0 && angle2>0 && angle3>3 ){
        printf("Triangle is valid");                

    }else{
        printf("Triangle is not valid");


    }





}