
#include<stdio.h>

void main(){

	int a = 5;
	int b = 4;
	int c = 3;

	if(a*a == b*b + c*c){
		puts("in if ");
		puts("it is pythagorian triplet");
	}else{

		puts("in else ");
		puts("it is not  pythagorian triplet");

	}
}
