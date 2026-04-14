#include<stdio.h>

void main(){


int x = 10;
char ch = 'A';


void *ptr1 = &ch;
void *ptr2 = &x;

printf("%d\n",*ptr1);
printf("%d\n",*ptr2);

printf("%d\n",*((char*)ptr1));                           // valid paranthecis parenthesis validation 
printf("%d\n",*((int*)ptr2));              



}