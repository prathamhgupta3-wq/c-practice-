#include<stdio.h>

void main(){

    int size;

    printf("Enter number of elements in array \n");
    scanf("%d",&size);

    int arr[size];
    int sum = 0;

    for(int x = 0;x < size;x++){
        printf("Enter your %d element \n",x);
        scanf("%d",&arr[x]);

        sum += arr[x]*arr[x];

    }
    
        printf("%d\n",sum);
    
}