#include<stdio.h>
void main(){
    

    int num;

    printf("Enter number (1-7)");
    scanf("%d",&num); 
    
    switch(num){

        case 1 :{
            printf("monday");
        }
        break;
        case 2 :{
            printf("tuesday");
        }
        break;
        case 3 :{
            printf("wednwsday");
        }
        break;
        case 4 :{
            printf("thursday");
        }
        break;
        case 5 :{
            printf("friday");
        }
        break;
        case 6 :{
            printf("saturday");
        }
        break;
        case 7 :{
            printf("sunday");
        }
        break;
        default :
        printf("In default");
    }
    
}










