
#include<stdio.h>

char* mystrtoupr(char* str,char* str1){
		int index = 0;
		for(int x = 0;str[x] != '\n';x++){
		
			*(str1 + x) = str[x] - 32;
			index += 1;
		}
		str1[index] = '\0';
		return str1;

}
void main(){

	char str[20];
	char str1[20];
	puts("enter any string ");
	fgets(str,20,stdin);

	puts("modified string is ");

	puts(mystrtoupr(str,str1));




		


}
