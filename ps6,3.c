#include<stdio.h>

void main(){

    int size;
    printf("Enter size of array : ");
    scanf("%d",&size);
    int arr[size];

    for(int i = 0 ; i < size; i++){
        printf("Enter %d array element \n",i);
        scanf("%d",&arr[i]);

    }
    printf("Even elements are : \n");
    for(int i = 0; i < size; i++){
        if(arr[i]%2 == 0){
            printf("%d\t",arr[i]);
        }
    }
}