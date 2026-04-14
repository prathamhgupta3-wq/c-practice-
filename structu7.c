
#include<stdio.h>

struct player {
	
	int jerNo;
	char pName[20];
	float ave;

};

void fun(){

	struct player c1player = {18,"virat",450.132}; 
}
	
void main(){
	
	/*printf("%d\n",cplayer.jerNo);
	printf("%s\n",cplayer.pName);
	printf("%f\n",cplayer.ave);*/

	struct player cplayer = {7,"M S Dhoni",450.213};
	
	
	printf("%d\n",cplayer.jerNo);
	printf("%s\n",cplayer.pName);
	printf("%f\n",cplayer.ave);

	struct player c1player = {18,"virat",450.132}; 

	fun();

	printf("%d\n",c1player.jerNo);
	printf("%s\n",c1player.pName);
	printf("%f\n",c1player.ave);
	
	fun();

}
