#include<stdio.h>

void main(){

    int x = 10;
    char ch = 'A';
    float f = 20.5;
    double d = 35.50;

    //refrencing

    int *ptr1 = &x;
    char *ptr2 = &ch;                 // *ptr here * is only for declaration
    float *ptr3 = &f;
    double *ptr4 = &d;

    //derefrencing

    printf("%d\n",*ptr1);
    printf("%ch\n",*ptr2);            // *ptr here * is for accessing data 
    printf("%f\n",*ptr3);
    printf("%f\n",*ptr4);


}