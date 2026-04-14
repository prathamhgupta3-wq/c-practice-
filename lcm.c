
#include<stdio.h>

int fun(int,int);

void main(){

		int x;
		int x2;

		printf("enter any two number : \n");

		printf("x = \n");
		scanf("%d",&x);

		printf("y = \n");
		scanf("%d",&x2);

		fun(x,x2);

		





}

int fun(int x,int x2){
	
	int w = 2;
	int y = 0;
	int t = x;
	int t2 = x2;
	int temp = x;
	
	do{
	
	    if(temp%w == 0){
		temp = temp/w;
		y++;
	    }else{
	    	w++;
	    }

	


	}while(temp != 1 );
	
	int z = 2;
	int q = 0;
	int arrx[y];

	do{

		if(x%z == 0){
			x = x/z;
			arrx[q] = z;
			q++;
		}else{

			z++;
		}
	


	}while(x != 1);

	printf("factors of %d : \n",t);
	for(int b = 0; b < y;b++){
		printf("%d |",arrx[b]);
	}
	int ex = y;
	printf("\n");

// for x2
	w = 2;
	y = 0;
	temp = x2;
	
	do{
	
	    if(temp%w == 0){
		temp = temp/w;
		y++;
	    }else{
	    	w++;
	    }

	


	}while(temp != 1 );
	
	z = 2;
	q = 0;
	int arrx2[y];

	do{

		if(x2%z == 0){
			x2 = x2/z;
			arrx2[q] = z;
			q++;
		}else{

			z++;
		}
	
	

	}while(x2 != 1);

	printf("factors of %d : \n",t2);
	for(int b = 0; b < y ; b++){
		printf("%d |",arrx2[b]);
	}
	int ex2 = y;

	printf("\n");

	int product = 1;
	int temph = 2;

	for(int b = 0;b < ex;b++){

		for(int m = 0;m < ex2;m++){

			if(arrx[b] == arrx2[m]){

				if(temph > arrx2[m]){
					temph = temph;
				}else{
					temph = arrx2[m];
				}
				
				product = product*arrx2[m];

				arrx[b] = 0;
			}
		}



	}

	printf("lcm of %d and %d is %d \n",t,t2,(t*t2)/product);
	printf("hcf of %d and %d is %d \n",t,t2,temph);
				
}


