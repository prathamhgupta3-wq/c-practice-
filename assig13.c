


#include<stdio.h>
#include<string.h>

struct data{
	
	int ovl_res;
	int totl_pass_stu;
	int fail_in_one;
	int totl_dis;


}tea;

struct student{

	char stuName[20];
	int sturoll;
	float stugrade;
	char fback[50];
	

};

void main(){
	
	struct student stu[10];
	int count = 0;
	int countd = 0;

	for(int y = 0; y < 10; y++){
			
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

			if(w < 40 ){
				strcpy((stu + y)->fback,"Student is failed in a subject");
				count += 1;
				break;
			}
			

		}

		puts("");

		temp = temp/5;

		if(temp > 75 ){
			(stu + y)->stugrade = temp;
			strcpy((stu+y)->fback,"passed with distinction");
			countd += 1;

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

		
	tea.ovl_res = ((10 - count)%10)*10;
	tea.totl_pass_stu = 10 - count;
	tea.fail_in_one = count;
	tea.totl_dis = countd;
	

	puts("-------------------------------------------------");

	for(int x = 0; x < 10; x++){
	
		printf("stu %d Name =  %s\n",x+1,(stu + x)->stuName);
		printf("stu %d roll no =  %d\n",x+1,(stu + x)->sturoll);
		printf("stu %d Name =  %f\n",x+1,(stu + x)->stugrade);
		printf("stu %d Name =  %s\n",x+1,(stu + x)->fback);

		puts("");

	}

	printf("overall result  = %d \n",tea.ovl_res);
	printf("overall passed stu  = %d \n",tea.totl_pass_stu);
	printf("overall fail in one subject  = %d \n",tea.fail_in_one);
	printf("overall distinction  = %d \n",tea.totl_dis);

}

