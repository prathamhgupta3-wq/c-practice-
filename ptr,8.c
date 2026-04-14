#include<stdio.h>

void main(){


int arr[] = {10.20,30,40,50};

int *ptr1 = arr;
int *ptr2 = &arr[4];

printf("%d\n",ptr1 - ptr2);
printf("%d\n",ptr2 - ptr1);
printf("%d\n",ptr1 == ptr2);
printf("%d\n",ptr1 != ptr2);



}