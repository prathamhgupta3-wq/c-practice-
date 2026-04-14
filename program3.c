


#include<stdio.h>

void gun(){

		printf("In gun\n");

}

void fun(void(*ptr)()){

	printf("In fun\n");
	gun();

}

void main(){

	printf("start main\n");

	fun(gun);

	printf("end main \n ");

}

