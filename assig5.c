

#include<stdio.h>

void main(){
		int size;
		int temp = 0;

		puts("Enter size of array ");
		scanf("%d",&size);

		int arr[size];

		for(int x = 0;x < size ; x++){
		
			printf("Enter %d array element\n ",x);
			scanf("%d",arr + x);
		
		}

		for(int x = 0; x < size ; x++){
		
			printf("%d |",*(arr + x));
		
		}

		for(int x = 0; x < size;x++ ){
			if(temp < *(arr + x)){
				temp = *(arr + x);
			}
		
		}
		puts("");

		printf("largest number is : %d \n",temp);


}
