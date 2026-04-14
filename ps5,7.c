#include<stdio.h>

void main(){
    int stno;
    int endno;

    printf("Enter range of numbers \n");
    printf("from : \n");
    scanf("%d",&stno);
    printf("to : \n");
    scanf("%d",&endno);

    for(int x = stno; x != endno+1; x++){

        if( x%2 != 0){

            printf("%d^3 : %d \n",x,x*x*x);

        }else{}

    }

}