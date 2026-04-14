#include<stdio.h>

void main(){

    int arr[][3] = {1,2,3,4,5,6,7,8,9};
    
    for(int x = 0;x < 3;x++){
        for(int y = 0;y < 3;y++){
            
            printf("%p\n",&arr[x][y]);
            printf("%p\n",arr + x);
            printf("%d\n",*(*(arr + x) + y));
            printf("%d\n",arr[x][y]);

            int* ptr1 = arr[x];
            printf("%p\n",ptr1);


            printf("\n");

        }
        


    }

}
