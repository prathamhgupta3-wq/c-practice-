
#include<stdio.h>

void main(){
	
/*	char name[] = {'p','r','a','t','h','a','m','\0'};

	printf("%ld\n",sizeof(name));
	printf("%p\n",name);
	printf("%s\n",name);
	printf("\n");
	
	char name2[20];                   // scanf can only read upto _ space 
	printf("enter your name  : \n");
	scanf("%s",name2);

	printf("%s\n",name2);
	do{
		getchar();
	}while(getchar() != '\n');

	char name3[20];                   // scanf can read until you hit enter but its a cheat code  
	printf("enter your name  : \n");
	scanf("%[^\n]",name3);

	printf("%s\n",name3);


	do{
		getchar();
	}while(getchar() != '\n');

	char name4[20];	// scanf can read until // correct way to take input from user 

	int index = 0;
	char ch;

	printf("enter your number : \n");

	while((ch = getchar()) != '\n'){		
		name4[index] = ch;
		index++;
	}

	index = '\0';

	printf("%s\n",name4);

	char name5[20];	// scanf can read until

	int index = 0;
	char ch;
	ch = getchar();

	printf("enter your number : \n");

	while((ch = getchar()) != '\n'){		
	
		name4[index] = ch;
		index++;
		ch = getchar();
	}

	printf("%s",name5);*/


	char name6[20];	// gets cannot read how many inputs are given  

	int index = 0;
	char ch;

	printf("enter your number : \n");

	gets(name6);

	puts(name6);


	char name7[20];	// gets cannot read how many inputs are given  

	printf("enter your number : \n");

	fgets(name7,10,stdin);

	puts(name7);

}
