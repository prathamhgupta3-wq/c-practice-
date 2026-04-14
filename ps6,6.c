#include<stdio.h>

void main(){
    int size;
    printf("Enter number of array elements \n");
    scanf("%d",&size);

    int arr[size];
    int sum = 0;

    for(int i = 0; i < size; i++){

        printf("Enter %d array element \n",i);
        scanf("%d",&arr[i]);
            sum += arr[i];
        
    }
    printf("sum of all elements : %d",sum);
    
}