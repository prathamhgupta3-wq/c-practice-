
#include<stdio.h>
#include<string.h>
#include<stdlib.h>


struct player {

	char pname[20];
	int jnumber;
	float ave;

};

struct player *cplayer;


void fun(){
	
	cplayer = malloc(sizeof(struct player));
	struct player *cricplayer = malloc(sizeof(struct player));
	
	strcpy(cricplayer->pname,"ameya");
	cricplayer->jnumber = 10;
	cricplayer->ave = 250;

	strcpy(cplayer->pname,"M S Dhoni");
	cplayer->jnumber = 7;
	cplayer->ave = 450;

	printf("%s\n",cricplayer->pname);
	printf("%d\n",cricplayer->jnumber);
	printf("%f\n\n",cricplayer->ave);

	printf("%s\n",cplayer->pname);
	printf("%d\n",cplayer->jnumber);
	printf("%f\n\n",cplayer->ave);
	

}

void main(){

	puts("in main");
	fun();
	puts("end main");

	printf("%s\n",cplayer->pname);
	printf("%d\n",cplayer->jnumber);
	printf("%f\n\n",cplayer->ave);

}
