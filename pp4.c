
#include<stdio.h>
#define data 5

void main(){

	#ifdef data 						// controlled compilation
		puts("in if");
	#else
		puts("in else");
	#endif

	#ifndef data 
		puts("in if");
	#else
		puts("in else");
	#endif



}
