#include<stdio.h>

void main(){
    int size;
    
    printf("Enter size of array : \n");
    scanf("%d",&size);
    int arr[size];

    for(int x = 0; x < size; x++){

        printf("Enter %d array element \n",x);
        scanf("%d",&arr[x]);
    }
if(size%2 == 0){
    for(int x = 0; x < size/2;x++ ){
        printf("%d element + %d element : %d \n",(x+1),(size-x),arr[x]+arr[size-x-1]);        
    }
}else{
    for(int x = 0; x < (size+1)/2;x++){

        if(x == (size-1)/2){
            printf("middle element of array : %d\n",arr[x]);
        }else{
            printf("%d element + %d element : %d\n",(x+1),(size-x),arr[x]+arr[size-x-1]);
            
        }
    }
}




}