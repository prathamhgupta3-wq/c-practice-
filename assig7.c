

#include<stdio.h>

void main(){
	int count = 0;

	int column;
	int row;

	int column2;
	int row2;

	do{
	
		puts("Enter dimensions of matrix 1");
		puts("column :");
		scanf("%d",&column);
		puts("rows :");
		scanf("%d",&row);
	
			puts("");
		puts("Enter dimensions of matrix 2");
		puts("column :");
		scanf("%d",&column2);
		puts("rows :");
		scanf("%d",&row2);


		if(column != row2){
			puts("In valid dimensions");
			count = count + 1;
		}
		puts("--------------------------");
			puts("Enter valid dimensions");
	}while(count == 1);

		int w[column][row];
		int q[column2][row2];

	puts("");

	puts("Enter 1st matrix");
		for(int y = 0; y< row;y++){
			
			for(int z = 0; z< column;z++){
			
				printf("Enter %d,%d matrix element\n",z,y);
				getchar();
				scanf("%d",&w[z][y]);
			
			}
			puts("");
		
		}
		puts("");

		for(int y = 0; y< row;y++){
			
			for(int z = 0; z< column;z++){
			
				printf("%d\t",w[z][y]);
			
			}

			puts("");
		
		}

			puts("---------------------");


	puts("Enter 2nd matrix");
		for(int y = 0; y< row2;y++){
			
			for(int z = 0; z< column2;z++){
			
				printf("Enter %d,%d matrix element\n",z,y);
				getchar();
				scanf("%d",&q[z][y]);
			}
			puts("");
		}

			puts("");
		for(int y = 0; y< row2;y++){
			
			for(int z = 0; z< column2;z++){
			
				printf("%d\t",q[z][y]);
			
			}

			puts("");
		
		}

	
			puts("---------------------");

			puts("Multiplication of two matrix is ");
		for(int y = 0; y< row;y++){
		

			for(int z = 0; z< column2;z++){
				int sum = 0;

				for(int m = 0;m < column;m++){
				
					sum += w[m][y]*q[z][m];

				}
				printf("%d\t",sum);
			}

			puts("");
		
		}

}
