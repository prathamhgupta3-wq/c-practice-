
#include<stdio.h>
#include<stdlib.h>
struct Employee{

	char empName[20];
	int empId;
	float empsal;

	/*char empName[20] = "pratham";
	int empId = 10;
	float empsal = 1.5;*/


};

void main() {
	struct Employee emp1;

	emp1.empName = "rutuja";
	emp1.empId = 28;
	emp1.empsal = 1.5;
	
	printf("%s\n",emp1.empName);
}

