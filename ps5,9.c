#include<stdio.h>

void main(){

    for(int x = 65 ; x !=74 ; x++){

        if(x%2 != 0 ){
            printf("%c ",x + 32 );

        }else{
            printf("%c ",x);

        }
    }
}