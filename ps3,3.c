#include <stdio.h>

void main(){

        int year;
        printf("enter any year");
        scanf("%d",&year);

        
        
        
        
        if(year % 400 == 0 ){
            printf("Year is leap");

        }else if(year%100 != 0){
                    if(year % 4 == 0){
                        printf("Year is leap");                                                         

                    }else{
                        printf("Year is not leap");                               
                        
                    }

                
        }else{
            printf("Year is not leap");

        }
        





}