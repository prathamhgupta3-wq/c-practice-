
#include<stdio.h>

void main(){


	char* name = "kanaha";
	char** ptr = &name;
	char* name1 = "kanaha";

	puts(name);
	puts(name1);
	
	char name2[] = {'k','a','n','a','h','a','\0'};

	*(name2 + 0) = 'R';

	puts(name2);	

	char* name3 = "kanaha";

	printf("%c\n",*name);
	printf("%c\n",*(name + 1));

	*(*ptr + 0 ) = 'R';

	printf("%s\n",name);

	printf("%s\n",name1);



}
