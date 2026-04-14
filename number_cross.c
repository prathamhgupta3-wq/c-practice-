#include<stdio.h>

void main(){

    int row;

    printf("Enter number of row \n");
    scanf("%d",&row);
    int z = row;

    for(int x = 1; x <= row;x++){

        for(int y =1 ; y<=row;y++){
            if(x == y){
                if(row%2 == 0){
                    if(x <= row/2){
                        printf("%d\t",z--);
                    }else{
                        printf("%d\t",++z);
                    }
                }else{
                    if(x < (row + 1)/2){
                        printf("%d\t",z--);
                    }else{
                        printf("%d\t",z++);
                    }
                }
            }else if( x + y == row + 1){
                if(x>y){
                    printf("%d\t",x);
                }else {
                    printf("%d\t",y);
                }

            }else{
                printf("\t");
            }
        }
        printf("\n");
    }
}

void main(){

    int row;
    printf("Enter number of rows \n");
    scanf("%d",&row);
    int x = 1;
    int z = row;
    while(x <= row){

        int y = 1;
        while( y <= row){
             
            if(x == y){
                if(row%2 == 0){
                    if(x <= (row)/2){
                        printf("%d\t",z--);
                    }else{
                        printf("%d\t",++z);
                    }
                
                }else{
                    if(x < (row + 1)/2){
                            printf("%d\t",z--);
                    }else{
                            printf("%d\t",z++);
                        }
                    }
                    

            }else if(x + y == row + 1){

                    if(x > y){
                        printf("%d\t",x);
                    }else{
                        printf("%d\t",y);
                    }

            }else{
                printf("\t");
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
    int z = row ;

    
     do{

        int y = 1;
        do{

        
            if(x == y){
                if(row%2 == 0){
                    if(x <= row/2){
                        printf("%d\t",z--);
                    
                    }else{
                            printf("%d\t",++z);
                        }
                }else{
                    if(x == y){
                        if(x < (row + 1)/2){
                            printf("%d\t",z--);
                    
                    }else{
                        printf("%d\t",z++);
                        }
                    }
                }
            }else if(x + y == row + 1){

                    if(x > y){
                        printf("%d\t",x);
                    }else{
                        printf("%d\t",y);
                    }

            }else{
                printf("\t");
            }
            y++;
            }while( y <= row);
        printf("\n");
        x++;
    }while(x <= row);


    

}
