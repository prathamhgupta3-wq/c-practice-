#include<stdio.h>

int x = 10;              // non BSS 
int y;                   // BSS Block started with symbol 

void fun(){

    printf("x = %d\n",x);
    printf("x = %d\n",y);
}
void main(){
    printf("x = %d\n",x);
    printf("x = %d\n",x);
    fun();


}