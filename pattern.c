#include <stdio.h>

void main(){
     int q =0;
   
    for(int x = 1; x<=3; x++ ){                       // for row
        q = x;
    
        for(int y = 1; y <= 3; y++){                  // for column 
        
           printf("%d ",q);
           q++;
            

        }
        printf("\n");
    }
}