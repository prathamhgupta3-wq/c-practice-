#include<stdio.h>

void main(){

    int size;
    int sum =0;
    printf("Enter size of array \n");
    scanf("%d",&size);

    int arr[size];

    for(int y = 0 ; y <= size - 1 ; y++){

        printf("Enter %d index element \n",y);
        scanf("%d",&arr[y]);

        sum += arr[y];
    }
    printf("Sum is : %d\n",sum);
    for(int y = 0; y <= size - 1; y ++){

        if(arr[y]%2 == 0){
            printf("%d number is even \n",arr[y]);
        }else{
            printf("%d number is odd \n",arr[y]);
        }
    }
    
}