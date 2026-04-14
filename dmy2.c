
#include<stdlib.h>

void*malloc(size_t);
int printf(const char*,...);

char ch;

void main(){

	char* cptr = (char*)malloc(sizeof(char));
	int* iptr = (int*)malloc(sizeof(int));

	printf("%c\n",ch);
	printf("%d\n",*cptr);
	printf("%d\n",*iptr);
	


}
