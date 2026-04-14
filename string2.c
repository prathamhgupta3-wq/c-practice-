#include<stdio.h>
#include<string.h>

void main(){
	
	char *name1 = "shashi";
	printf("%ld\n",sizeof(name1));
	printf("%s\n",name1);

	printf("%ld\n",strlen(name1));      // expected 7 but giving 6 



	char name2[20] = "shashi";
	printf("%ld\n",sizeof(name2));
	printf("%s\n",name2);
	printf("%ld\n",strlen(name2));        //






}
