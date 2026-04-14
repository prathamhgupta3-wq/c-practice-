#include<stdio.h>

void main(){

    int sp;
    int cp;

    printf("Selling Price");
    scanf("%d",&sp);

    printf("Cost Price");
    scanf("%d",&cp);

    if(sp > cp){

        int profit = sp-cp;                                                                                     

        printf("Profit ");
        printf("%d",profit);
    }else{

        int loss = cp-sp;

        printf("Loss");
        printf("%d",loss);

    }





}