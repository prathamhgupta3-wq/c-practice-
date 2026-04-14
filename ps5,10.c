#include<stdio.h>

void main(){

    int x;
    int z = 0; 
    printf("Enter any number : \n");
    scanf("%d",&x);

    for(int y = 2; y != x ; y++){

        if(x%y == 0){
            z+=1;
        
        }else{
            
        }
    }

    if(x==1){
        printf("number is niether composite nor prime ");

    }else if(z>0){
        printf("number is composite");
    }else{
        printf("number is prime ");
    }

}