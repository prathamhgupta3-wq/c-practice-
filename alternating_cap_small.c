#include<stdio.h>

void main(){
       
    for(int x =1;x<= 4; x++){
            int z = 64;
            z +=4*(x-1);

        for(int y = 1; y<=4 ; y++){
            for(int a = z + y; a != z + 1 + y ; a++){
            
                if(y%2==0){
                    printf("%c ",a );

                }else{
                    printf("%c ",a + 32);
            }
        }
        }
        printf("\n");

    
    }
printf("\n");
printf("\n");
printf("\n");
printf("\n");

// correct way to do this 

        int a = 65;

    for(int x =1;x<= 4; x++){
           
        for(int y = 1; y<=4 ; y++){
            
            
                if(y%2==0){
                    printf("%c ",a );

                }else{
                    printf("%c ",a + 32);
                    

            }
            a++;
        }
        printf("\n");

        }
        printf("\n");

    
    }




