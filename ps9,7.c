#include<Stdio.h>

void main(){

    int size;
    printf("Enter number of elements in array \n");
    scanf("%d",&size);

    int arr[size];

    for(int x = 0 ; x < size;x++){

        printf("Enter %d element of array \n",x);
        scanf("%d",&arr[x]);

    }
    int count = 0;

for(int x = 0;x < size; x++){

    int sum = 0;
    int y = 0;
    int temp = arr[x];
    int temp1;

    while(y == 0){

        int product = 1;

        temp1 = temp%10;
        temp = temp/10;
        
        if(temp == 0){
            while(temp1 > 0){
                product = product*temp1;
                temp1--;
            }
            sum += product;

            y++;
        }else{
            while(temp1 > 0){
                    product = product*temp1;
                temp1--;
            }
            sum += product;

        }
    }
    if(sum == arr[x]){
        printf("array contain strong number \n");
        count += 1;
        break;

    }

}
if(count == 0){
    printf("array not contain strong number \n");
}

}