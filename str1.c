
#include<stdio.h>

long mystrlen(char str1[]){
		
	long index = 0;
	int i = 0;
	while(str1[i] != '\0' ){
	
		index += 1;
		i++;
	
	}

		return index;

}


void main(){

	char* str = "core2web";
	char str2[20];
	
	puts("Enter your name ");
	fgets(str2,20,stdin);

	puts(str);
	
	puts("string length of str");
	int strlen1 = mystrlen(str);
	printf("%d\n",strlen1);

	puts("string length of str1");
	int strlen = mystrlen(str2) - 1;
	printf("%d\n",strlen);





}
