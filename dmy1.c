
#include<stdio.h>
void*malloc(size_t);

void main(){

	void* vptr = malloc(sizeof(int));
	int* iptr = vptr;

	int* iptr1 = (int*)malloc(sizeof(int));
	char* ch = &iptr;

	int* iptr2 = ch;	

}
