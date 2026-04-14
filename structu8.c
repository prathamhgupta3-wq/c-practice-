
#include<stdio.h>


struct data {
	int x;
	int y;
};

struct player{
	char pName[20];
	int jerNo;
}

void main(){

	struct data obj1 = {10,20};
	struct data obj2 = {10,20};

	/*if(obj1 == obj2){                       // invalid use of operands 
		puts("equals");
	}else{
		puts("not equals");
	}*/

	
	struct player player1 = {"virat",18};
	struct player player2 = {"virat",18};

	if(player1.jerNo == player2.jerNo && player1.pName == player2.pName){           // compares address always not equals
			puts("equals");
	}else{
			puts("not equals");
	}

	if(player1.jerNo == player2.jerNo && strcmp(player1.pName,player2.pName)){ 
			puts("equals");
	}else{
			puts("not equals");
	}


	struct player ptr = malloc(sizeof(struct player));
	printf("%d\n",ptr->jerNo);



	
	


}
