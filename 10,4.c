#include<stdio.h>

void main(){

    int size;
    int temp;
    int count = 0;
    printf("Enter number of students \n");
    scanf("%d",&size);

    int arr[size];

    for(int x = 0; x < size;x++){

        printf("Enter %d student's id \n",x+1);
        scanf("%d",&arr[x]);

    }
    printf("Enter any id \n");
    scanf("%d",&temp);

    for(int x = 0;x < size;x++){

        if(temp == arr[x]){
            printf("id %d found at index %d",temp,x);
            count += 1;
            break;
        }
        
    }
}