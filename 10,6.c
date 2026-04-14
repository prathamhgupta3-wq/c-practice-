#include<stdio.h>

void main(){

    int size;
    printf("Enter number of students : \n");
    scanf("%d",&size);

    float arr[size];
    float temp;

    for(int x = 0;x < size;x++){

        printf("Enter height of %d student : \n",x + 1);
        scanf("%f",&temp);

        if( temp >= 5.5 && temp <= 6){
            arr[x] = temp;
        }else{

            printf("height if student shall not be less than 5.5 ft and greater than 6 ft \n ");
            printf("Re - enter height : \n");
            x--;
        }

    }
    printf("_____________________________________________\n\n");
    for(int x = 0; x < size;x++){

        printf("%f\n",arr[x]);
    }
}