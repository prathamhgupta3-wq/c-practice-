#include<stdio.h>

void main(){
    
    int size;
    printf("Enter size of array \n");
    scanf("%d",&size);
    char arr[size];
    char arrv[] = {'A','E','I','O','U','a','e','i','o','u'};

    for(int x = 0;x < size;x++){
        printf("Enter %d element \n",x);
        getchar();
        scanf("%c",&arr[x]);
    }
    for(int x = 0;x < 10;x++){

        for(int y = 0; y < size;y++){
            if(arr[y] == arrv[x]){
                printf("%c is vowel found at index %d \n",arr[y],y);
            }
        }

    }

}