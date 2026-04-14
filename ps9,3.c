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
    int count = 0;
    for(int x = 0;x < size;x++){
        
        int sum = 0;
        for(int y = 1;y < arr[x]/2 + 1; y++){

            if(arr[x]%y == 0){
                sum += y;
            }
        }
        if(sum == arr[x]){
            count += 1;
            printf("Array contain perfect number \n");
            break;
        }else{
        }
        
        }
        if(count == 0){
            
            printf("Array not contain perfect number \n");
        }
    }

    
