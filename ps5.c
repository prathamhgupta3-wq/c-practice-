#include<stdio.h>
void main(){

    int alphabet;
    printf("Enter alphabet");
    scanf("%d",&alphabet);

    if(65 <= alphabet && alphabet <= 91){

        printf("Alphabet is uppercase");


    }else{
        printf("Alphabet is lower case");

    }
}