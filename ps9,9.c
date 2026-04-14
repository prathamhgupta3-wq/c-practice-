#include<stdio.h>

void main(){

    int size;
    printf("enter number of elements of array \n");
    scanf("%d",&size);

    int arr[size];
    int count = 0;

    for(int x = 0; x < size;x++){

        printf("enter %d element of array \n",x);
        scanf("%d",&arr[x]);

        if(x > 0){

            if(arr[x-1] < arr[x]){

            }else{
                count += 1;
            }
        }
    }

    if(count == 0){
        printf("This is an increasing array \n ");
    }else{
        printf("array is not an increasing array \n");
    }

    printf("____________________________________\n\n");
}