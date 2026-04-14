#include<stdio.h>

void main(){
    int size;
    printf("Enter number of array elements \n");
    scanf("%d",&size);

    int arr[size];

    for(int i = 0; i < size; i++){

        printf("Enter %d array element \n",i);
        scanf("%d",&arr[i]);
        
    }
    for(int y = 0; y < size ; y++){
        if(y%2 == 0){
            printf("elements with even index %d\n",arr[y]);
        }
    }
}