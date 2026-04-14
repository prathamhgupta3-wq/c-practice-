#include<stdio.h>

void main(){

    int stno;
    int endno;
    int odd = 0;


    printf("Enter range of numbers \n");
    printf("from : ");
    scanf("%d",&stno);
    printf("to : ");
    scanf("%d",&endno);

    for(int x = stno;x != endno + 1;x++){

        if(x%2==0){
            printf("%d\n",x);

        }else{}


    }

}