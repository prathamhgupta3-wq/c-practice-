
#include<stdio.h>

void main(){
	char name[20];
	int salary;
	int empid;

	puts("enter employee name");
	fgets(name,20,stdin);

	puts("enter employee id ");
	scanf("%d",&empid);

	puts("enter employee's salary ");
	scanf("%d",&salary);
	
	if(salary > 1000000){
		puts("employee is manager ");
	}else if(salary < 1000000 && salary > 700000){
		puts("employee is team leader");
	}else if(salary > 500000 && salary < 700000 ){

		puts("employee is senior engineer");
	}else if(salary < 500000){

		puts("employee is junior engineer ");

	}


}
