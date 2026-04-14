#include<stdio.h>

void fun(){

    printf("In fun \n");
}

void fun0(){

    printf("In fun 0 \n");
}

void fun1(int x){

    printf("In fun 1 \n");
}

/*void fun3(int x,int y){                         // error: too many arguments to function 'fun3'

    printf("In fun 3 \n");
}*/

/*void fun2(int x){                  // error: too few arguments to function 'fun2'

    printf("In fun 2 \n");                    
}*/


void main(){

    fun();
    fun0(10);
    fun0(10,20,30);
    fun1(10);
    // fun2();
    // fun3(10,20,30);

}