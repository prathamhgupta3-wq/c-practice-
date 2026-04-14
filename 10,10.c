#include<stdio.h>

void main(){

    int size;
    printf("Enter number of elements : \n");
    scanf("%d",&size);

    int arr[size];

    for(int x = 0; x < size; x++){

        printf("Enter %d element \n",x);
        scanf("%d",&arr[x]);
    }

    printf("____________________________________\n\n");

    for(int x = 0;x < size;x++){
        
        if(x < (size + 1)/2){
            printf("%d|",arr[size - x*2 - 1]);
        
        }else{}
    }
}