#include<stdio.h>
void main(){
    int marks;
    printf("Enter your marks");
    scanf("%d",&marks);

    if(marks >= 91){
        printf("Grade A");
    }else if(marks<= 90 && marks >= 81){
        printf("Grade B");
    }else if(marks<= 80 && marks >= 71){
        printf("Grade C");
    }else if(marks<= 70 && marks >= 61){
        printf("Grade D");
    }else if(marks<= 60 && marks >= 51){
        printf("Grade E");
    }else if(marks<= 50 && marks >= 41){
        printf("Grade F");
    }else if(marks == 40){
        printf("Pass");
    }else {
        printf("Fail");
    }
}