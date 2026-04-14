

// #include<stdio.h>
#define data 5

#ifndef stdio.h
	#include<stdio.h>
#endif

void main(){

	printf("%d\n",data);

	#undef data

	printf("%d\n",data);	

}
