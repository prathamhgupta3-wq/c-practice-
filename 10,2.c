#include<stdio.h>

void main(){

    int size;
    printf("Enter number of elements in array \n");
    scanf("%d",&size);

    char arr[size];

    for(int x = 0;x < size;x++){
        printf("Enter your %d element \n",x);
        getchar();
        scanf("%c",&arr[x]);
    }
    for(int x = 0;x < size;x++){
        printf("%d\n",arr[x]);
    }
}