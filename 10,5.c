#include<stdio.h>

void main(){

    int size;
    int temp;

    printf("Enter number of children : \n");
    scanf("%d",&size);

    int arr[size];

    for(int x = 0;x < size;x++){

        printf("Enter age of %d children : \n",x+1);
        scanf("%d",&temp);

        if(temp > 5){
            printf("age sholud not be greater than 5. Re - enter the age \n");
            x--;

        }else{
            arr[x] = temp;
        }
        
    }
    printf("__________________________\n\n");
    for(int x = 0; x < size;x++){
        printf("%d\n",arr[x]);
    }
}