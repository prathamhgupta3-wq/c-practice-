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

    printf("number of digits  : \n");
    
    for(int x = 0; x < size;x++){
            
        int y = 0;
        int count = 1;
        int temp = arr[x];
        while(y == 0){

            temp = temp/10;

            if(temp == 0){
                y++;
            }else{
                count += 1;
            }

        }
        printf("%d\n",count);

            
    }
}