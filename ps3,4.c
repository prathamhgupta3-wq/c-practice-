#include<stdio.h>

void main(){

        int alpha;

        printf("Enter any alphabet");
        scanf("%d",&alpha);

        if(alpha == 65 || 69 || 73 || 79 || 85){

            printf("Alphabet is upper case vowel");                                                                                                                         


        }else if(alpha == 97 || 101 || 105 || 111 || 117 ){

            printf("Alphabet is lower case vowel");

        }else{

            printf("Alphabet is consonant");

        }








}