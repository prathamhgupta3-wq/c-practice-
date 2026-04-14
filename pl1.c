
#include<stdio.h>


void main(){
	
	char ch;

	puts("Enter any charachter ");
	scanf("%c",&ch);

	printf("%d\n ",ch);

	if(ch > 64 && ch < 91){
		puts("entered charachter is upper case ");
	}else if(ch > 96 && ch < 123 ){
	
		puts("entered charachter is lower case ");
	
	}else if(ch >47 && ch < 58 ){
	
		puts("entered charachter is digit ");
	
	}else{
	
		puts("entered charachter is special symbol  ");
	}
}
