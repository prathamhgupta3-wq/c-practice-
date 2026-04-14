#include<stdio.h>

void main(){

    int stno;
    int endno;
    
    printf("Enter range of number \n");
    printf("from : \n");

    scanf("%d",&stno);

    printf("to : \n");

    scanf("%d",&endno);

    for(int y = stno; y != endno + 1; y++){
        if(y%2!=0){

            printf("%d\n",y);

        }else{}


    }
   

}