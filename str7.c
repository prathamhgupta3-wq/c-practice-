
#include<stdio.h>


char* strr(char* str,char* str1,char ch,char ch1){
	int index = 0;
	for(int x = 0;str[x] != '\n';x++){
	
		if(str[x] == ch){
			str1[x] = ch1;
		}else if(str[x] == ch1){
			str1[x] = ch;
		}else{
			str1[x] = str[x];
		}

		index += 1;
	}
	
	str1[index] = '\0';

	return str1;	


}
void main(){

	char str[20];
	char str1[20];
	char ch;
	char ch1;

	puts("enter string ");
	fgets(str,20,stdin);

	puts("charachter to replace");
	scanf("%c",&ch);

	getchar();
	
	puts("charachter to replace");
	scanf("%c",&ch1);

	puts("string with replaced charachters ");
	puts(strr(str,str1,ch,ch1));
}
