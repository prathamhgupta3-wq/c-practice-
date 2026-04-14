#include<stdio.h>

void main(){
    int row;

    printf("Enter number of rows \n");
    scanf("%d",&row);

    int midpoint = ((row + 1)/2);
    int b;
    int a = 1;
    
     
    for(int x =1; x <= row;x++){

        int z = 1;
         

        if(midpoint > x){
            b = midpoint - x;
        }else{
            b = x - midpoint;
        }

      
            for(int w = 1; w <= b; w++){
                printf("\t");
            }
            for(int y = 1; y <= a*2 - 1; y++){
                if( y < a){
                    printf("%d\t",z++);
                }else{
                    printf("%d\t",z--);

                }
            }
            
            if(x < midpoint){
                a++;
            }else{
                a--;
            }
            
       
            printf("\n");

        
    }
}

void main(){

    int row;
    printf("Enter number of rows in diamond \n");
    scanf("%d",&row);

    int x = 1;

    int midpoint = (row + 1)/2;
    int w = 1;
    while(x <= row){

        int y = 1;
        int z = 1;
        int a = 1;
        int b = 1;
        
        if(x > midpoint){
            b = midpoint - x;
        }else{
            b = x - midpoint;
        }
        

            while(a <= b){
                    printf("\t");
                    a++;
                }
        
            while(y <= w*2 - 1){

                if(y < w){
                    printf("%d\t",z++);
            
                }else{
                    printf("%d\t",z--);
                }
                y++;
            }            
        if(x < midpoint){
            w++;
        }else{
            --w;
        }
        printf("\n");

        x++;
    }
}

void main(){

    int row;
    printf("Enter number of rows in diamond \n");
    scanf("%d",&row);

    int x = 1;

    int midpoint = (row + 1)/2;
    int w = 1;
    while(x <= row){

        int y = 1;
        int z = 1;
        int a = 1;
        int b = 1;
        
        if(x > midpoint){
            b = midpoint - x;
        }else{
            b = x - midpoint;
        }
        

            do{
                    printf("\t");
                    a++;
                }while(a <= b);
        
            do{

                if(y < w){
                    printf("%d\t",z++);
            
                }else{
                    printf("%d\t",z--);
                }
                y++;
            }while(y <= w*2 - 1);            
        if(x < midpoint){
            w++;
        }else{
            --w;
        }
        printf("\n");

        x++;
    }while(x <= row);
}
    
