#include<stdio.h>

void main(){

    int x = 97;
    float f = 20.5;
    char ch = 'A';
    

    int *ptr1 = &ch;
    int *ptr2 = &ch;

    void *vptr1 = &x;
    void *vptr2 = &ch;
    
    //printf("%d\n",*vptr1);                 // error
    //printf("%c\n",*vptr2);

    printf("%p\n",vptr1);
    printf("%p\n",vptr2);


    printf("%d\n",*((int*)vptr1));
    printf("%c\n",*((char*)vptr2));




    
}