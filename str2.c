#include<stdio.h>


void mystrcpy(char str[],char str1[]){
	
	int i = 0 ;

	do{
		str1[i] = str[i];
		i++;

	}while(str[i] != '\0');
	
	str1[i] = '\0';

	
}

void main(){

	char str[20];
	char str1[20];

	puts("enter any string");

	fgets(str,20,stdin);

	mystrcpy(str,str1);
	
	puts(str1);	




}

