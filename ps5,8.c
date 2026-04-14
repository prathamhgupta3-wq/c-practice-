#include<stdio.h>

void main(){

    for(int x = 65 ; x !=74 ; x++){

        if(x%2 != 0 ){
            printf("%d ",x - 64);

        }else{
            printf("%c ",x);

        }
    }
}