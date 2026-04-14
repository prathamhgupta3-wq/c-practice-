
#include<stdio.h>
#include"myhead.h"


void main(){
	
	puts("in msin");
	int x;
	int y;

	fun(x,y);
	run();

	printf("%c\n",x);
	
	puts("end main");
}

void fun(int x,int y){

	printf("%d\n",x+y);
	
}

void run(){

	puts("In run");

}
