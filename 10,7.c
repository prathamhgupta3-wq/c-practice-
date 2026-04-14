#include<stdio.h>

void main(){

    int size;
    printf("Enter number of elements : \n");
    scanf("%d",&size);

    int arr[size];
    int arr2[size];

    for(int x = 0; x < size;x++){

        printf("Enter %d element of arrar \n",x);
        scanf("%d",&arr[x]);

        if(arr[x]%2 == 0){

            arr2[x] = arr[x]*arr[x];
        }else{

            arr2[x] = arr[x]*arr[x]*arr[x];
        }
    }

    printf("____________________________________________\n\n");
    
    for(int x = 0;x < size;x++){

        printf("%d\n",arr2[x]);
    }
}