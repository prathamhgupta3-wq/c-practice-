#include<Stdio.h>

void main(){

    int row;
    int column;
    int sum = 0;
    int sum1 = 0;

    printf("Enter number of rows \n"); 
    scanf("%d",&row);

    printf("Enter number of column \n");
    scanf("%d",&column);

    int arr[row][column];
    

    for(int x = 0;x < row;x++){

        for(int y = 0;y < column;y++){

            printf("Enter elements arr[%d][%d] \n",x,y);
            scanf("%d",&arr[x][y]);

            if(x == y){
                sum += arr[x][y];
            }
            if(x + y == column - 1){
                sum1 += arr[x][y];
                
            }

        }
        
    }
    for(int x = 0;x < row;x++){

        for(int y = 0;y < column;y++){

            printf("%d\t",arr[x][y]);
        }
        printf("\n");
    }

    printf("\n");
    printf("sum of left diagonal elements is : %d \n",sum);
    printf("sum of right diagonal elements is : %d \n",sum1);

    printf("\n");

    printf("%d\n",*(arr[1] + 0));











}















