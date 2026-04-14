#include<stdio.h>

void main(){

    int arr[2][3][3] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18};

    printf("Array elements : \n");
    
    for(int x = 0;x < 2;x++){

        for(int y = 0;y < 3;y++){

            for(int z = 0;z < 3;z++){

                printf("%d\t",arr[x][y][z]);
            }
            printf("\n");
        }
        printf("\n");
    }
}