#include<stdio.h>

void main(){

    int x;
    int y;
    int z;

    //int arr[];
    int arr[] = {};
    int arr[4];
    int arr[4] = {10,20,30,40};
    int arr[4] = {10,20,30};
    int arr[4] = {};
    int arr[4] = {10,20,30,40,50};
    int arr[4] = {10,20,30,40,50,60};

    printf("%d\n",x);
    printf("%d\n",y);
    printf("%d\n",z);
    printf("%d\n",arr[0]);          // 10
    printf("%d\n",arr[1]);          // 20
    printf("%d\n",arr[2]);          // 30
    printf("%d\n",arr[3]);          // whenever we intialize any array and dont give any value and clean up space and gives default value as per datatype 



    
}