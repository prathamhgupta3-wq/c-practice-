#include<stdio.h>

void main(){

    int size;
    printf("Enter number of elements : \n");
    scanf("%d",&size);

    int arr[size];
    int x = 0;

    for(int i = 0;i < size; i++){

        printf("Enter %d element of array : \n",i);
        scanf("%d",&arr[i]);

    }
    /*for(int y = 0;y < size;y++){

            if(arr[y]%5==0){
                printf("First element divisibe by 5 found at %d \n",y);
                x += 1;
                break;
            
        }
    }*/
    for(int y = 0;y < size;y++){
        if(x == 0){
            if(arr[y]%5==0){
                printf("First element divisibe by 5 found at %d \n",y);
                x += 1;
            }
        }
    }
}

