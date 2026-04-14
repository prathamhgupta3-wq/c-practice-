
#include<stdio.h>

void main(){

	int column;
	int row;
	
	puts("Enter dimensions of matrix");
	puts("column :");
	scanf("%d",&column);
	puts("rows :");
	scanf("%d",&row);

	int w[column][row];
	int q[column][row];
		
	puts("Enter 1st matrix");
		for(int y = 0; y< row;y++){
			
			for(int z = 0; z< column;z++){
			
				printf("Enter %d,%d matrix element\n",z,y);
				getchar();
				scanf("%d",&w[z][y]);
			
			}
			puts("");
		
		}
		for(int y = 0; y< row;y++){
			
			for(int z = 0; z< column;z++){
			
				printf("%d\t",w[z][y]);
			
			}

			puts("");
		
		}

	puts("Enter 2nd matrix");
		for(int y = 0; y< row;y++){
			
			for(int z = 0; z< column;z++){
			
				printf("Enter %d,%d matrix element\n",z,y);
				getchar();
				scanf("%d",&q[z][y]);
			
			}
			puts("");
		
		}
		for(int y = 0; y< row;y++){
			
			for(int z = 0; z< column;z++){
			
				printf("%d\t",q[z][y]);
			
			}

			puts("");
		
		}

	

		puts("addition of given matrices is ");

		for(int y = 0; y< row;y++){
			
			for(int z = 0; z< column;z++){
				
				printf("%d\t",w[z][y]+q[z][y]);
			
			}

			puts("");
		
		}




}
