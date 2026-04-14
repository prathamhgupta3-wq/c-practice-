#include<stdio.h>

void main(){

    int num;

    printf("enter any number \n");
    scanf("%d",&num);

    int count = 0;
    int y = 0;

    for(int x = 1;x < num + 1;x++){

        if(num%x == 0){
            y++;                 
        }
    }
       
    int arr[y];
    
    int z = 0;
    for(int x = 1;x < num + 1;x++){

        if(num%x == 0){
            arr[z] = x;
            z++; 
                
        }
    }

    printf("array of factors of %d is \n",num);

    for(int x = 0;x < y ;x++){

        printf("%d\n",arr[x]);
    }
}

