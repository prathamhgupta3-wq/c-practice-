#include<stdio.h> 

     
// space reverse triangle 
        
    

void main(){
         int row = 4 ;
         int z = row*(row+1)/2;
                                                                                    
         for(int x = 1;x <= row;x++){                                                                                 
            for(int w =1 ; w <= x -1 ; w++ ){
               printf("\t");
            }                               
                for(int y =1;y <= row-x+1;y++){                                                                              
                    printf("%d\t",z);                                                                                                                                                                                           
                    z--;
                                                                                                                                                                                                            
                }
            
            printf("\n");
        }
    }
void main(){
         int row = 4 ;
         int z = row*(row+1)/2;
                                                                                    
         for(int x = 1;x <= row;x++){                                                                                 
            for(int w =1 ; w <=  row - x  ; w++ ){
               printf("\t");
            }                               
                for(int y =1;y <= row-x+1;y++){                                                                              
                    printf("%d\t",z);                                                                                                                                                                                           
                    z--;
                                                                                                                                                                                                            
                }
            
            printf("\n");
        }
    }
    

     
// space erect and reverse triangle using while with pallindrome

void main(){
       int row;
    int x = 1;

        printf("Enter number of rows \n");
        scanf("%d",&row);
        
    while(x <= row){
        int y = 1;
        int z = 1;
        int a = 1;

        if(x <= (row+1)/2){
            
            while(a <= row -x){
                printf("\t");

                a++;
            }
            while( y <= x){
                printf("%d\t",z++);
                y++;
            }
        }else{
            while( a <= x -1){
                printf("\t");
                a++;
            }
            while(y <= row - x + 1){
                printf("%d\t",z++);
                y++;
            }
        }
            x++;
            printf("\n");
        }
    }

    void main(){

        int row;
        printf("Enter number of rows \n");
        scanf("%d",&row);
        int x = 1;

        do{
            int y = 1;
            int z = 1;
            int a = 1;

            if(x < row){
                printf("\t");
            }
            do{
                printf("\t");
                y++;
            }while(y <= row - x);

            do{
                printf("%d\t",z++);
                
                a++;
            }while(a <= x);

            printf("\n");
            x++;
        }while( x <= row);
    }

    void main(){
        int row;
        printf("Enter number of rows \n");
        scanf("%d",&row);
        int x = 1;

         

        do{
            int y = 1;
            int z = 1;
            int a = 1;
            if(x > 1){
                printf("\t");
            }
            do{
                printf("\t");
                y++;
            }while(y <= x - 1);

            do{
                printf("%d\t",z++);
                
                a++;
            }while(a <= row - x + 1);

            printf("\n");
            x++;
        }while( x <= row);

    }
























