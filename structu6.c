
#include<stdio.h>
#include<string.h>

struct company {
	
	char comName[20];
	char comLoc[20];
	int comEmp;

};

void fun(){

	const struct company comp1 = {"veritas","Balewadi",2500};

	printf("%s\n",comp1.comName);
	printf("%s\n",comp1.comLoc);
	printf("%d\n",comp1.comEmp);

	strcpy(comp1.comName,"verimeta");              // warning 
	comp1.comEmp = 2501;				// assignment of member Emp in read only obj	

	printf("%s\n",comp1.comName);
	printf("%s\n",comp1.comLoc);
	printf("%d\n",comp1.comEmp);

}


void main(){

	struct company comp = {"veritas","Balewadi",2500};

	printf("%s\n",comp.comName);
	printf("%s\n",comp.comLoc);
	printf("%d\n",comp.comEmp);

	// comp.comName = "verimeta";           // error : assignment to expression with array type
	
	strcpy(comp.comName,"verimeta");
	comp.comEmp = 2501;

	printf("%s\n",comp.comName);
	printf("%s\n",comp.comLoc);
	printf("%d\n",comp.comEmp);

	fun();

}
