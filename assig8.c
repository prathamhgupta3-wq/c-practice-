
#include<stdio.h>

void main(){
	int plane;
	int column;
	int row;

	puts("Enter dimensions of 3D matrix");
	puts("plane ");
	scanf("%d",&plane);
	puts("row  ");
	scanf("%d",&row);
	puts("column ");
	scanf("%d",&column);

	int arr[plane][row][column];

	for(int x = 0; x < plane;x++ ){
	
		for(int y = 0;y < row;y++){
		
			for(int z = 0; z < column;z++){
				printf("Enter %d , %d , %d array element \n ",x,y,z);
				scanf("%d",(*(*(arr + x)+y)+z));
			}
		
		}
	
	}
		
	for(int x = 0; x < plane;x++ ){
		printf("plane %d \n",x);

		for(int y = 0;y < row;y++){
		
			for(int z = 0; z < column;z++){
				printf("%d\t",*(*(*(arr + x)+y)+z));
			}

			puts("");
		
		}
		puts("");
	
	}
		
		



}
