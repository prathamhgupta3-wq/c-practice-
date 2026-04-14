#include<stdio.h>

void main(){

    int size = 0;

    
    printf("Enter number of elements of array \n");
    scanf("%d",&size);


    int arr[size];

    for(int x = 0; x < size; x++){

        printf("Enter your %d element : \n",x);
        scanf("%d",&arr[x]);
    }
    for(int x = 0;x < size;x++){
        printf("%d\n",arr[size - x -1]);

    }
    

}

