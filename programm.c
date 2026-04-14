#include<stdio.h>
void main(){


	int x = 1;
	int row;

	printf("Enter number of rows \n");
	scanf("%d",&row);

	do{
		int y = 1;
		int a = 1;
		int z = 1;

		do{
			printf("\t");
			a++;
		}while(a <= row - x);

		do{
			if(y < x){
				printf("%d\t",z++);
			}else{
				printf("%d\t",z--);

			}
			y++;
		}while(y <= x*2 - 1);

		x++;
		printf("\n");

	}while(x <= row);
}

