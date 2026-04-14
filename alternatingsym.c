#include<stdio.h>

void main(){

    for(int x = 1;x <= 4; x++){

        if(x%2 !=0){
            for(int y = 1; y <= 4; y++){
               
                    printf("* ");
            }
                
        }else{
            for(int y = 1; y <= 4 ; y++){
               
                    printf("# ");
                }
            }
             printf("\n");
        }
       
    
    
    for(int x = 1;x <= 4; x++){

        
            for(int y = 1; y <= 4; y++){
                if(y%2 != 0){
                    printf("* ");
                }else{
                    printf("# ");
                }
        }
        printf("\n");
    }
    
}