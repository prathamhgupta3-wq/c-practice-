#include<stdio.h>

void main(){
    int stno;
    int endno;
    int y = 1;

    printf("Enter range of number \n");
    printf("from : \n");
    scanf("%d",&stno);  
    printf("to : \n");
    scanf("%d",&endno);

    for(int x = stno;x != endno+1;x++){

        if(x%2 == 0){

            y = y*x;

        }else{}

    }
printf("product : %d \n",y);

}