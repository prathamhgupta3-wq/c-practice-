#include<stdio.h>

void main(){

    int size;
    printf("Enter number of elements in array \n");
    scanf("%d",&size);
    int arr[size];

    for(int x = 0;x < size;x++){

        printf("Enter %d element of array \n",x);
        scanf("%d",&arr[x]);

    }

    printf("Factorials of elements : \n");

    for(int x = 0; x < size;x++){
            int product = 1;
        while(arr[x] > 0){
            
                product = product*arr[x];
                arr[x]--;
            }
            printf("%d\n",product);
    }
}