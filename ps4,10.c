#include<stdio.h>

void main(){

    int stno;
    int endno;
    int div = 0 ;

    printf("Enter range of number \n");
    printf("from : \n");

    scanf("%d",&stno);

    printf("to : \n");

    scanf("%d",&endno);

    printf("Numbers which are divisible by 2 and 5 : ");
    for(int y = stno; y != endno + 1; y++){
        if(y%2==0 && y%5==0){
            div += 1;
            printf("%d\n",y);

        }else{}


    }
    printf("Number of numbers : %d",div);

}