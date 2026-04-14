#include<stdio.h>

void main(){

	long unsigned int size = 20;

	char name[20];
	
	char* ptr = name;

	puts("enter your name ");

	getline(&ptr,&size,stdin);

	puts(name);


		










}
