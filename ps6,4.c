#include<stdio.h>

void main(){

    int size;
    printf("Enter size of array : \n");
    scanf("%d",&size);
    int arr[size];
    int product = 1;

    for(int i = 0 ; i < size; i++){
        printf("Enter %d array element \n",i);
        scanf("%d",&arr[i]);
        if(arr[i]%2 == 0){
            product *= arr[i];
        }

    }
    printf("product of even elements are : %d\n",product);
}