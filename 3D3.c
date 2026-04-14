#include<stdio.h>

void main(){

    int arr[2][2][2] = {1,2,3,4,5,6,7,8,};
for(int z = 0;z < 2;z++){    
    for(int x = 0;x < 2;x++){
        for(int y = 0;y < 2;y++){
            
            printf("%p\n",&arr[z][x][y]);
            printf("%p\n",arr + z);
            printf("%d\n",*(*(*(arr + z) + x) + y));
            printf("%d\n",arr[z][x][y]);

            int*** ptr1 = arr[z][x];
            printf("%p\n",ptr1);


            printf("\n");

        }
        


    }
}

}
