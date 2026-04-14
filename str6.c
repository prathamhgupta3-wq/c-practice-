
#include<stdio.h>

int mystrchr(char* str,char* ptr){
		for(int x = 0;str[x] != '\n';x++){
			if(*(ptr) == str[x]){
				return x;
			}
		
		}
}

void main(){
	char str[20];
	char ch;

	puts("enter any string ");
	fgets(str,20,stdin);

	puts("enter any charachter ");             // dont use getchar() before scanf if you are taking string as input first it will take garbage value
	scanf("%c",&ch);

	puts("charachter found at ");

	printf("%d\n",mystrchr(str,&ch));
	


}
