#include<stdio.h>
 void main(){

    int x = 0;
    int y = 1;
    int z = 3;

    int ans = 0;

    ans = (x++ || --y)&& ++z;

    printf("%d;%d;%d;%d;",x,y,z,ans);

    



 }