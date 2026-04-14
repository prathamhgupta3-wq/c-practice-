#include<stdio.h>

// simple pyramid
void main(){
        int row = 3;
        
        for(int x = 1 ; x <= row; x++){
            int z = 1;
            for(int w = 1; w <= row -x; w++){

                printf("\t");
            }
            for(int y =1 ; y <= x*2 - 1 ; y++){

                printf("%d\t",z++);

            }
                printf("\n");

        }
    }
    

//reverse pyramid
void main(){
        int row = 3;
        
        for(int x = 1 ; x <= row; x++){
            int z = 1;
            for(int w = 1; w <= x -1; w++){

                printf("\t");
            }
            for(int y =1 ; y <= (row+1 - x)*2 - 1 ; y++){

                printf("%d\t",z);

                z++;
            }
                printf("\n");

        }
    }
// pyramid with pallindrome
   void main(){
        int row = 4;
        
        for(int x = 1 ; x <= row; x++){
            int z = row -x +1;
            for(int w = 1 ; w <= row -x; w++){
                printf("\t");

            }
            for(int y = 1 ; y <= x*2 -1; y++){

                if(y < x){
                    printf("%d\t",z++);
                }else{
                    printf("%d\t",z--);
                }
                
            }
            printf("\n");
        }

    }
// reverse pyramid with pallindrome

    void main(){

        int row = 4;

        for(int x = 1 ; x <= row;x++){

            int z = x;
            for(int w = 1 ; w <= x -1; w++){
                printf("\t");

            }
            for(int y = 1; y <= (row -x +1)*2 - 1; y++){

                if( y < row -x +1){
                    printf("%d\t",z++);
                }else{
                    printf("%d\t",z--);

                }
            }
            printf("\n");



        }
    }

    void main(){

        int row =4;
        for(int x = 1;x <= row;x++){

            int z = 1;

            for(int w = 1 ; w <= row - x ; w++){
                printf("\t");
            }
            for(int y = 1 ; y <= x*2 - 1 ;y++ ){

                if(y < x){
                    printf("%d\t",z++);
                }else{
                    printf("%d\t",z--);
                }

            
            }
            printf("\n");
        }
        }

// pyramid with pallindrome using while and do while

void main(){

    int row;
    int x = 1;

    printf("Enter number of rows \n");
    scanf("%d",&row);

    while(x <= row){
        int y = 1;
        int z = 1;
        int a = 1;

        while(a <= row - x){
            printf("\t");
            a++;
        }
        while(y <= x*2 - 1){
            if(y < x){
                printf("%d\t",z++);
            }else{
                printf("%d\t",z--);
            }
            y++;
        }
        x++;
        printf("\n");

    }
    }

void main(){

    int row;
    int x = 1;

    printf("Enter number of rows \n");
    scanf("%d",&row);

    do{
        int y = 1;
        int z = 1;
        int a = 1;

        if(x < row){
            printf("\t");
        }

        do{
            printf("\t");
            a++;
        }while(a <= row - x);
        do{
            if(y < x){
                printf("%d\t",z++);
            }else{
                printf("%d\t",z--);
            }
            y++;
        }while(y <= x*2 - 1);
        x++;
        printf("\n");


    }while(x <= row);


    }

    // reverse pyramid with pallindrome using while and do while loop 

    void main(){

        int row;
        printf("Enter number of rows \n");
        scanf("%d",&row);

        int x = 1;

        while(x <= row ){

            int y = 1;
            int z = 1;
            int a = 1;

            while(a <= x - 1){

                printf("\t");
                a++;
            }

            while(y <= (row - x + 1)*2 -1){

                if(y < row - x + 1){
                    printf("%d\t",z++);
                }else{
                    printf("%d\t",z--);
                    
                }
                 y++;

            }
            printf("\n");

            x++;
    
        }
    }
 
    void main(){

        int row;
        printf("Enter number of rows \n");
        scanf("%d",&row);
         

        int x = 1;

         do{

            if( x > 1){
                printf("\t");
            }

            int y = 1;
            int z = 1;
            int a = 1;

             

             do{

                printf("\t");
                a++;
            }while(a <= x - 1);

             do{

                if(y < row - x + 1){
                    printf("%d\t",z++);
                }else{
                    printf("%d\t",z--);
                    
                }
                 y++;

            }while(y <= (row - x + 1)*2 -1);
            printf("\n");

            x++;
    
        }while(x <= row );
    }



