#include<stdio.h>

void main(){

    int size;
    printf("Enter number of elements of array \n");
    scanf("%d",&size);

    int arr[size];

    for(int x = 0;x < size;x++){

        printf("Enter %d element of array \n",x);
        scanf("%d",&arr[x]);

    }
    int count = 0;
    for(int x = 0;x < size;x++){

        int y = 0;
        int temp = arr[x];
        int temp1 = 0;

        while(y == 0){

            temp1 = temp1*10 + temp%10;
            temp = temp/10;

            if(temp == 0){
                y++;
            }
        }

        if(temp1 == arr[x]){
            printf("array contain pallindrome numbber  \n");
            count += 1;
            break;
        }
    }
    if(count == 0){
        printf("array not contain pallindrome number \n");

    }

    printf("_________________________________-\n\n");
}