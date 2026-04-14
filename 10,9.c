#include<stdio.h>

void main(){

    int size;
    printf("Enter number of elements \n");
    scanf("%d",&size);

    int arr[size];
    int temp;

    for(int x = 0;x < size;x++){

        printf("Enter %d element \n",x);
        scanf("%d",&arr[x]);

    }
     printf("Enter inde upto which array should be printed \n");
    
    for(int x = 0; x < 1;x++){

        scanf("%d",&temp);

        if(temp >= size){
            printf("index cannot be greater than and equal size \n");
            printf("Re - enter index value \n");
            x--;
        }else{

        }
    }

    for(int x = 0;x <= temp ; x++){

        printf("%d|",arr[x]);

    }

}