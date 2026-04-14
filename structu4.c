
int printf(const char*,...);

#include<stdlib.h>
void*malloc(size_t);


struct Employee {

	char empName[20];
	int empId;
	float empSal;

};

struct Employee  *emp1 = malloc(sizeof(struct Employee));

void fun(){

	struct Employee *emp = malloc(sizeof(struct Employee));
	
	strcpy((*emp).empName,"ameya");
	(*emp).empId = 10;
	(*emp).empSal = 1.5;


	printf("%s\n",emp->empName);
	printf("%d\n",emp->empId);
	printf("%f\n",emp->empSal);


}

void main(){

	puts("in main");
	fun();
	puts("end main");

}


