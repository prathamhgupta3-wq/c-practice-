#include<stdio.h>

void main(){

    int flatNo;
    char wing;
    float rent;

    printf("Enter flatNo : ");
    scanf("%d",&flatNo);

    getchar();                          // always use get char before taking input for any chaachter value it flushes out values present in buffer 
    printf("Enter wing : ");
    scanf("%c",&wing);

    printf("Enter rent : ");
    scanf("%f",&rent);

    printf("flatNo : %d\n",flatNo);
    printf("wing : %c\n",wing);
    printf("rent : %f\n",rent);
}
