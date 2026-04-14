#include<stdio.h>

void main(){

    int size;
    printf("Enter number of elements : \n");
    scanf("%d",&size);

    char arr[size];

    for(int x = 0; x < size; x++){

        printf("Enter %d element \n",x);
        getchar();
        scanf("%c",&arr[x]);
    }

    printf("____________________________________\n\n");

    for(int x = 0;x < size;x++){
        if(x%2 == 0){
            printf("%c|",arr[x]);
        }else{

        }
    }
}