#include<stdio.h>

void main(){

    int x ;

    printf("enter any number \n");
    scanf("%d \n",&x);

    int z = 0;

    for(int y = 1; y <= x/2 ; y++){

        if(x % y == 0){

            z = z + y;

        }else{}
    }

    if(z == x){

        printf("number is perfect number ");
    }else if(z < x){

        printf("number is deficient number ");
    }else{

        printf("number is abandant number ");

    }
}