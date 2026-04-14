
#include<stdlib.h>

void*realloc(void*,size_t);
void*calloc(size_t,size_t);
int printf(const char*,...);

void main(){

		int* iptr = calloc(3,sizeof(int));

		for(int x = 0;x < 3;x++){
			*(iptr + x) = 10 + x;
		}

		for(int x = 0; x < 3;x++){
			printf("%d\n",*(iptr + x));
		
		}

		realloc(iptr,5*sizeof(int));
		
		iptr[3] = 13;
		iptr[4] = 14;
	
		for(int x = 0; x < 6;x++){
			printf("%d\n",*(iptr + x));
		
		}


}
