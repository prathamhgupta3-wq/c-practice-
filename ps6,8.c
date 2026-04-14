#include<stdio.h>

void main(){

    int size;
    printf("Enter number of elements in array : \n");
    scanf("%d",&size);

    int arr[size];
    int product = 1;

    for(int i = 0; i < size;i++ ){

        printf("Enter your %d element : \n",i);
        scanf("%d",&arr[i]);

        if(i%2 == 1){
            product *= arr[i];
        }
    }
    printf("Product of odd index elements is : %d\n",product);
}