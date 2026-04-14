
#include<stdio.h>

int strr(char* str){
	int count = 0;
	int index = 0;
	for(int x = 0;str[x] != '\n';x++){
		index += 1;
		if(str[x] > 47 && str[x] < 58){
			count += 1;	
		}
	}

	return count/index;

}

void main(){

	char str[20];
	
	puts("enter string ");
	fgets(str,20,stdin);

	if(strr(str) == 1){
		puts("string contains only digits  ");
	}else{
	
		puts("string doesn't contains digit ");
	
	}




}
