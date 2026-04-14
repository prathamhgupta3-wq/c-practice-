
#include<stdio.h>

struct employee{

	char empName[20];
	int empId;
	float empSal;

}emp1;

void main(){

	puts("Enter Employee Name");
	scanf("%s",emp1.empName);
	
	puts("Enter Employee Id");
	scanf("%d",&emp1.empId);

	puts("Enter Employee Salary");
	scanf("%f",&emp1.empSal);

	puts("");

	printf("Emp Name =  %s\n",emp1.empName);
	printf("Emp Id   =  %d\n",emp1.empId);
	printf("Emp sal  =  %f\n",emp1.empSal);


}
