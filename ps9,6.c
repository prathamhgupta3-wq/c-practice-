#include<stdio.h>

void main(){

    int size;
    printf("Enter number of elements in array \n");
    scanf("%d",&size);

    int arr[size];

    for(int x = 0;x < size;x++){
        
        printf("enter your %d element of array \n",x);
        scanf("%d",&arr[x]);
    }

    printf("Sum of digits of elements \n");

    for(int x = 0;x < size;x++){

        int y = 0;
        int temp = arr[x];
        int sum = 0;
        int temp1;

        while(y == 0){

            temp1 = temp%10;
            temp = temp/10;

            if(temp == 0){
                sum += temp1;
                y++;
            }else{
                sum += temp1;
            }

        }
        printf("%d\n",sum);
    }
}