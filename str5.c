
#include<stdio.h>
char* togglecharachter(char* str,char* str1){
		int index = 0;
	for(int x = 0; str[x] != '\n';x++){

		if(str[x] > 64 && str[x] < 91){
			str1[x] = str[x] + 32;
		}else if(str[x] > 96 && str[x] < 123){
			str1[x] = str[x] - 32;				
		}else{
			puts("invalid charachter ");
			break;
		}
		index += 1;
	}

	str1[index] = '\0';
	return str1;
}
void main(){

	char str[20];
	char str1[20];

	puts("enter your string");

	fgets(str,20,stdin);
	
	puts("converted string is");

	puts(togglecharachter(str,str1));

}
