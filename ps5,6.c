#include<stdio.h>

void main(){
    int num;
    printf("Enter any number \n");
    scanf("%d",&num);

    if(num % 2 ==0){
        printf("number is even ");
        for(int x =1 ; x != 11;x++){
            printf("%d x %d = %d \n",num,x,num*x);

        }
    }else{
        printf("number is odd ");

        for(int x = 10 ; x != 0 ; x--){

            printf("%d x %d = %d \n",num,x,num*x);
        }
    }
}