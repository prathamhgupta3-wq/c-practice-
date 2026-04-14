
#include<stdio.h>

struct employee{

	char empName[20];
	int empId;
	float empSal;

};

void main(){
	
	struct employee emp[10];
	for(int x = 0; x < 10; x++){
		printf("Enter Employee %d  Name \n",x+1);
		scanf("%s",(emp+x)->empName);
	
		puts("Enter Employee Id");
		scanf("%d",&(*(emp + x)).empId);

		puts("Enter Employee Salary");
		scanf("%f",&(*(emp + x)).empSal);
		
		puts("");
	}

	puts("-------------------------------------------------");

	for(int x = 0; x < 10; x++){
	
		printf("Emp %d Name =  %s\n",x+1,(*(emp+x)).empName);
		printf("Emp    Id   =  %d\n",(emp+x)->empId);
		printf("Emp    sal  =  %f\n",(emp+x)->empSal);

		puts("");

	}

}
