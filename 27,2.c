

#include<stdio.h>

void fun(int ch){


	if(ch < 91 && ch > 64){

		printf("entered alphabet is uppercase \n");

	}else if(ch < 123 && ch > 96){

		printf("enterd alphabet is lowercase \n");
	}else{

		printf("entered charachter is in valid \n");
	}

}

void main(){

	char ch;
	printf("enter any charachter \n");
	
	scanf("%c",&ch);

	void (*ptr)() = fun;
	ptr(ch);

}
