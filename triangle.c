#include<stdio.h>

void main(){

    int row = 3;
    int z = 1;
    for(int x= 1; x<= row; x++){

        for(int y = 1;y <= x; y++){
            printf("%d ",z);
            z++;

        }
       
        printf("\n");

    }
int row = 4;

    for(int x= 1; x<= row; x++){
       

        for(int y = 1;y <= row - x + 1; y++){
            
            printf("* ");
            
            
        }
       
        printf("\n");

    }
}

void main(){

    int row;
    int x = 1;

    printf("Enter number of rows \n");
    scanf("%d",&row);

    while(x <= row){
        int y = 1;

        while(y <= x){
            printf("*");
            y++;
        }printf("\n");
        x++;
    }


}

void main(){
    int row;
    printf("Enter number of row \n");
    scanf("%d",&row);
    int x = 1;

    do{
        int y = 1;
        do{
            printf("*");
            y++;
        }while( y <= x);
        printf("\n");

        x++;
    }while( x <= row);
}