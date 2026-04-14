#include<stdio.h>



void main(){

    int size;
    printf("Enter number of elements in array \n");
    scanf("%d",&size);
    int arr[size];
    
    
    

    for(int x = 0; x < size; x++){
        printf("Enter %d element of array 1 \n",x);
        scanf("%d",&arr[x]);
         
    }

    printf("Prime numbers in array are \n");
    for(int x = 0; x < size; x++){
        int count = 0;
        for(int y = 2;y < arr[x]/2 + 1; y++){

            if(arr[x]%y == 0){
                count += 1;
            }else{

            }
        }

        if(arr[x] == 1){
            count += 1;
        
        }else if(count == 0){

        }else{
            printf("%d\n",x);
        }
        
    

}

}