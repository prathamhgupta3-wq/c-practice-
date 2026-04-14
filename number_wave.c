#include<stdio.h>

void main(){

    int row;
    printf("Enter number of row \n");
    scanf("%d",&row);

    for(int x = 1; x <= row;x++ ){
        
        if(x<=(row + 1)/2){
            for(int w =1 ; w<= x-1;w++){
                printf("\t");
            }
        }else{
        for(int a = 1; a <= row -x;a++){
            printf("\t");
            }
    }
        for(int y = 1; y <= (row+1)/2; y++){
            if(y == x){
                printf("%d\t",y);
            }else if(y + x == row + 1){
                printf("%d\t",y);
            }
        }
        printf("\n");
    }
}
// number wave with while 
void main(){

    int row;
    printf("Enter number of row \n");
    scanf("%d",&row);
    int x = 1;
    int z = 1;

    while(x <= row){

        int y = 1;
        int a = 1;
         
        if(row%2 == 0){
            if(x <= row/2){

                while(a <= x - 1){
                    printf("\t");
                    a++;
                }
        
                printf("%d",z++);
            }else{

                while( a <= row - x ){
                    printf("\t");
                    a++;
                }
                printf("%d",--z);
            }

        }else{
            if(x < (row + 1)/2){

                while(a <= x - 1){
                    printf("\t");
                    a++;
                }
        
                printf("%d",z++);
            }else{

                while( a <= row - x){
                    printf("\t");
                    a++;
                }
                printf("%d",z--);
            }

        }
         
        x++;
        printf("\n");

    }
}

    // number wave with do while

void main(){

    int row;
    printf("Enter number of rows \n");
    scanf("%d",&row);
    int x = 1;
    int z = 1;

    do{

         
        int a = 1;
        if(x > 1 && x < row){
            printf("\t");
        }

        if(row%2 == 0){
            if(x <= row/2){

            do{
                printf("\t");
                a++;
            }while(a <= x - 1 );

            printf("%d",z++);
        }else{

            do{
                printf("\t");
                a++;
            }while(a <= row - x  );
                printf("%d",--z);
        }
        }else{
            if(x < (row + 1)/2){

            do{
                printf("\t");
                a++;
            }while(a <= x - 1 );

            printf("%d",z++);
        }else{

            do{
                printf("\t");
                a++;
            }while(a <= row - x  );
                printf("%d",z--);
        }
        }

         

        printf("\n");
        x++;
         
    }while(x <= row);
}





