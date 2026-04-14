#include<stdio.h>

void main(){
    int row;

    printf("Enter number of rows \n");
    scanf("%d",&row);

    for(int x = 1; x <= row; x++){
        int z = 1;
        if(x <= (row +1)/2 ){
            for(int w =1 ;w  <= (row +1)/2 -x ;w++ ){
                printf("\t");
            }
            for(int y = 1 ; y <= x*2-1;y++){

                printf("%d\t",z++);


            }
            printf("\n");
    
        }else{
            for(int a = 1; a <= x - (row +1)/2; a++){

                printf("\t");
            }
            for(int k = 1; k <= (row-x)*2 +1; k++ ){

                printf("%d\t",z++);
            }

            printf("\n");
            
        }


    }

}