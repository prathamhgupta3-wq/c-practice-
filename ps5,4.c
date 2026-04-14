#include<stdio.h>

void main(){

    int stno;
    int endno;

    printf("Enter range  \n");

    printf("from : \n");
    scanf("%d",&stno);
    printf("to : \n");
    scanf("%d",&endno);
    
    int y = 0;

    for(int x = stno;x != endno+1 ; x++ ){

        y = y + x;
    }
    printf("sum : %d",y);

}