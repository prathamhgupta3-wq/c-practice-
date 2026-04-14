#include<stdio.h>

void main(){

    int n;
    int x = 0;

    printf("Enter any number : \n");
    scanf("%d",&n);

    printf("Number is divisible by : \n");

    for( int d = 2 ; d != 11 ; d++){

        if( n%d == 0 ){
            
            printf("%d,\n",d);
            x +=1 ;
    
        }else{}
    }

    printf("Number of divisors : %d \n",x);



}