#include<stdio.h>

void main(){

    int row;
    printf("Enter number of row \n");
    scanf("%d",&row);
    int z = 1;

    for(int x = 1;x <= row; x++){

        for(int y = 1; y <= x;y++){
            printf("%d\t",z++);
        }
        for(int w =1;w <= (row-x)*2; w++){
            printf("\t");
            
        }
        for(int q = x + (row-x)*2 + 1;q <= row*2;q++){

            printf("%d\t",--z);

        }
        printf("\n");
    }
}

// another way

#include<stdio.h>

void main(){

    int row;
    printf("Enter number of row \n");
    scanf("%d",&row);
    int z = 1;

    for(int x = 1;x <= row; x++){

        for(int y = 1; y <= row*2;y++){
            if(y <= x){
                printf("%d\t",z++);
            }else if(y > row*2 - x){
                printf("%d\t",--z);
            }else{
                printf("\t");
            }

        }
        printf("\n");
    }
}

// mirror triangle using while

void main(){

    int row;
    printf("Enterb number of rows \n");
    scanf("%d",&row);

    int x = 1;

    while(x <= row){
         
        int y = 1;
        int z = 1;

        while(y <= row*2){
            if(y <= x){
                printf("%d\t",z++);
            }else if(y > row*2 - x){
                printf("%d\t",--z);
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
    printf("Enterb number of rows \n");
    scanf("%d",&row);

    int x = 1;

     do{
         
        int y = 1;
        int z = 1;

         do{
            if(y <= x){
                printf("%d\t",z++);
            }else if(y > row*2 - x){
                printf("%d\t",--z);
            }else{
                printf("\t");
            }
            y++;
        }while(y <= row*2);

        printf("\n");
        x++;
    }while(x <= row);
}