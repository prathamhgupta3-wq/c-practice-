#include<stdio.h>

int* fun(int);
int gun(int);

void main(){

		int x;
		int x2;

		printf("enter any two number : \n");

		printf("x = \n");
		scanf("%d",&x);

		printf("y = \n");
		scanf("%d",&x2);

        int retval = gun(x);
        int retval1 = gun(x2);

        int arr[retval];
        int arr1[retval1];

        int* retvalf = fun(x);
        int* retvalf1 = fun(x2);

        for(int w = 0;w < retval;w++ ){

            arr[w] = *(retvalf + w);
            printf("%d |",*(arr + w));

        }
        for(int w = 0;w < retval1;w++ ){

            arr1[w] = *(retvalf1 + w);
            printf("%d |",*(arr1 + w));

        }

    int product = 1;
	int temph = 2;

	for(int b = 0;b < retval;b++){

		for(int m = 0;m < retval1;m++){

			if(arr[b] == arr1[m]){

				if(temph > arr1[m]){
					temph = temph;
				}else{
					temph = arr1[m];
				}
				
				product = product*arr1[m];

				arr[b] = 0;
                arr1[m] = 0;
			}
		}



	}

	printf("lcm of %d and %d is %d \n",x,x2,(x*x2)/product);
	printf("hcf of %d and %d is %d \n",x,x2,temph);
		





}
int gun(int x){
	
	int w = 2;
	int y = 0;
	int temp = x;
	
	do{
	
	    if(temp%w == 0){
		temp = temp/w;
		y++;
	    }else{
	    	w++;
	    }
	}while(temp != 1 );

    return y;

}

int* fun(int x){
	
	int t = gun(x);
		
	int z = 2;
	int q = 0;
	int arr[t];

	do{

		if(x%z == 0){
			x = x/z;
			arr[q] = z;
			q++;
		}else{

			z++;
		}
	


	}while(x != 1);

	printf("factors of %d : \n",t);
	for(int b = 0; b < t;b++){
		printf("%d |",arr[b]);
	}

	printf("\n");

    int *ptr = arr;

    return ptr;
}
