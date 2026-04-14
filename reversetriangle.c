 #include<stdio.h>


 void main(){
         int row = 4 ;
         int z = row*(row+1)/2;
                                                                                    
         for(int x = 1;x <= row;x++){                                                                                 
                                                                     
            for(int y =1;y <= row-x+1;y++){                                                                              
                printf("%d ",z);                                                                                                                                                                                           
                z--;
                                                                                                                                                                                                            
            }
            
            printf("\n");                                                                                                                                                                                                                                                                                         
        }
    }

void main(){
    int row = 3;

    for(int x = 1;x <= row;x++){
        int z = row -x +1;
        for(int y = 1; y <= row - x +1; y++){
            
            if(y%2 != 0){
                printf("%d ",z);
            }else{
                printf("%c ",67-x);

                z -= 2;

            }
            
        }printf("\n");
    }
}

    void main(){
        int row = 3;
        for(int x = 1; x<= row;x++){
            for(int y = 1;y <= row +1 - x;y++){

                if(y%2 != 0){
                    printf("%d ",y*x);
                }else{
                    printf("%c ",64+y);
                }
            }printf("\n");
        }

    }

    void main(){

        int row =4;
        for(int x= 1; x <= row;x++){

            for(int y = 1; y<= row - x +1;y++){
                if((y%2 != 0 && x%2 != 0) || (y%2 == 0 && x%2 == 0)){
                    if(y>x){
                        printf("%d ",65 + y-x);
                    }else if(y<x){
                        printf("%d ",65 + x-y);
                    }else{
                        printf("%d ",65 + x*(x-1));
                    }
                    
                }else{
                     if(y>x){
                        printf("%c ",65 + y-x);
                    }else if(y<x){
                        printf("%c ",65 + x-y);
                    }else{}
            }
        }printf("\n");
    }
}
void main(){

    int row = 4;
    for(int x = 1;x<= row ; x++){

        int z = 65 + x - 1;
        for(int y = 1 ; y <= row -x +1;y++){
            if((x + y)%2 == 0){
                printf("%d ",z);

            }else{
                printf("%c ",z);

            }
            z++;

        }
    printf("\n");
    }


}

void main(){
        int row;
        int x =1;
        printf("Enter number of rows \n");
        scanf("%d",&row);

    while(x<=row){

            int y = 1;
            int z = 1;
        if(x <= (row + 1)/2){  
            while(y <= (row+1)/2-x + 1){
                printf("%d\t",z++);
                y++;
            }
        }else{
            while(y <= x - (row+1)/2 + 1 ){
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
    int x = 1;

    printf("Enter number of rows \n");
    scanf("%d",&row);

do{
        int y = 1;
        int z = 1;
    if(x <= (row+1)/2){
        do{
            printf("%d\t",z++);
            y++;
        }while(y <= (row+1)/2 - x + 1);
    }else{
        do{
            printf("%d\t",z++);
            y++;
        }while(y <= x - (row+1)/2 + 1);
        
    }
    x++;
    printf("\n");
    }while( x <= row);

    }
    




    
