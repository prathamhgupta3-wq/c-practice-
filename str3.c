
#include<stdio.h>

int mystrtoint(char str[]){
		int temp = 0;
		int x = 0;

		while(str[x] != '\n'){

			char ch = str[x] - 48;	
			temp = temp*10 + ch ;
			x++;
		}
		return temp;


}

void main(){

	char str[20];

	puts("enter number string");
	
	fgets(str,20,stdin);

	puts("integer number of string is");

	printf("%d\n",mystrtoint(str));






}

