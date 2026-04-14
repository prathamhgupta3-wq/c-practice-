
#include<stdio.h>

void*malloc(size_t);

void main(){

	int* iptr = (int*)malloc(sizeof(int));
	char* cptr = (char*)malloc(sizeof(char));
	float* fptr = (float*)malloc(sizeof(float));

	*iptr = 10;
	*cptr = 'X';
	*fptr = 53.55;

	printf("%d\n",*iptr);
	printf("%c\n",*cptr);
	printf("%f\n",*fptr);




}
