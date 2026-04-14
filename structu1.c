
int printf(const char*,...);

struct Employee {

};

void main(){

	printf("in main \n");
	printf("%ld\n",sizeof(struct Employee));

	struct Employee emp1;

	printf("%ld\n",sizeof(emp1));

}
