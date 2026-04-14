#include<stdio.h>

void main(){

    int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int arr1[][3] = {{1,2,3},{4,},{7,8,9}};
    int arr2[][3] = {{1,2,3},{4,5},{7}};
    int arr3[4][3] = {{1,2,3},{4,5},{7}};   



    for(int x = 0;x < 3;x++){

        for(int y = 0;y < 3;y++){

            printf("%d\t",arr[x][y]);


        }
        printf("\n");
    }
    printf("\n");
    for(int x = 0;x < 3;x++){

        for(int y = 0;y < 3;y++){

            printf("%d\t",arr1[x][y]);


        }
        printf("\n");
    }
    printf("\n");
    for(int x = 0;x < 3;x++){

        for(int y = 0;y < 3;y++){

            printf("%d\t",arr2[x][y]);


        }
        printf("\n");
    }
    printf("\n");
    for(int x = 0;x < 4;x++){

        for(int y = 0;y < 3;y++){

            printf("%d\t",arr3[x][y]);


        }
        printf("\n");
    }
}