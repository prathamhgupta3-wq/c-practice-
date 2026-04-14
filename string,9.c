
#include<stdio.h>

void main(){


	char name[] = {'p','i','y','u','s','h','\0'};

	printf("%s\n",name);
	printf("%p\n",name);

	printf("%ld \n",sizeof(name));
	printf("\n");
	
	char name2[] = "pawan";


	printf("%s\n",name2);
	printf("%p\n",name2);
	
	printf("%ld \n",sizeof(name2));
	printf("\n");


	char name3[]= "pratham";


	printf("%s\n",name3);
	printf("%p\n",name3);

	printf("%ld \n",sizeof(name3));
	
	printf("\n");
	
}











