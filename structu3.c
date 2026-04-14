
int printf(const char*,...);
#include<stdlib.h>
#include<string.h>

struct Employee {
	
	char empName[20];
	int empId;
	float empSal; 


}emp1 = {"ameya",20,1.5};

void main(){

	struct Employee emp2;

	strcpy(emp2.empName,"ameya");
	emp2.empId = 20;
	emp2.empSal = 1.5;


	struct Employee emp3 = {"ameya",20,1.5};

	printf("%s\n",emp1.empName);
	printf("%d\n",emp1.empId);
	printf("%f\n\n",emp1.empSal);

	printf("%s\n",emp2.empName);
	printf("%d\n",emp2.empId);
	printf("%f\n\n",emp2.empSal);

	printf("%s\n",emp3.empName);
	printf("%d\n",emp3.empId);
	printf("%f\n\n",emp3.empSal);
}
