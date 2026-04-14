

#include<stdio.h>
#include<string.h>

struct student{

	char stuName[20];
	int sturoll;
	float stugrade;
	char fback[50];
	

};

void main(){
	
	struct student stu[5];

	for(int y = 0; y < 5; y++){
			
			printf("Enter %d student name \n",y+1);
			scanf("%s",(stu + y)->stuName);

			printf("Enter %d student Roll No \n",y+1);
			scanf("%d",&(stu + y)->sturoll);


			float temp = 0;
			float w = 0;

			puts("");

		for(int x = 0;x < 5; x++){
		
			printf("Enter %d sub marks\n",x+1);
			scanf("%f",&w);

			temp += w;
			

		}

		puts("");

		temp = temp/5;

		if(temp > 75 ){
			(stu + y)->stugrade = temp;
			strcpy((stu+y)->fback,"passed with distinction");
		}else if(temp > 60 && temp < 75 ){
			(stu + y)->stugrade = temp;
			strcpy((stu+y)->fback,"passed with first class");
		}else if(temp > 50 && temp < 60 ){
			(stu + y)->stugrade = temp;
			strcpy((stu+y)->fback,"passed with second class");
		}else if(temp > 40 && temp < 50 ){
			(stu + y)->stugrade = temp;
			strcpy((stu+y)->fback,"passed with third class");
		}else if(temp < 40 ){
			(stu + y)->stugrade = temp;
			strcpy((stu + y)->fback,"failed !!!!!!!!!!!!!");
		}else{
		
		}


	}

	puts("-------------------------------------------------");

	for(int x = 0; x < 5; x++){
	
		printf("stu %d Name =  %s\n",x+1,(stu + x)->stuName);
		printf("stu %d roll no =  %d\n",x+1,(stu + x)->sturoll);
		printf("stu %d Name =  %f\n",x+1,(stu + x)->stugrade);
		printf("stu %d Name =  %s\n",x+1,(stu + x)->fback);

		puts("");

	}

}
