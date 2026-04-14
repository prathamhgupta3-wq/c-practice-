#include<stdio.h>

void main(){

    int marks;

    printf("Enter your marks");
    scanf("%d",&marks);

    if(marks>=95 ){
        printf("Take Medical");
    }else if(marks <=95 && marks>=85 ){                                                            

        printf("Take Engineering");

    }else if(marks<=85 && marks>75){                                                                             
        
        printf("Take pharmacy or bachelor in science ");
        
    }else{

        printf("Take commerece");                                                                    

    }    
    
}
    





