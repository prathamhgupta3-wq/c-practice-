#include <stdio.h>

void main(){

    int x = 10;
    int y = 20;

    printf("%d\n",x + y);
    
    printf("%d\n",x - y);
    
    printf("%d\n",x * y);
    
    printf("%d\n",x / y);
    
    printf("%d\n",x % y);
    

    // relational operator 

    
    printf("%d\n",x < y);
    printf("%d\n",x > y);
    printf("%d\n",x <= y);
    printf("%d\n",x >= y);
    printf("%d\n",x == y);
    printf("%d\n",x != y);


    // loical operators 
    
    int x = 1;
    int y = 2;
    
    int ans = 0;
    ans = --x || y++;

    printf("%d;%d;%d",x,y,ans);

    









}