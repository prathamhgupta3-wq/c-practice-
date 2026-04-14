
#include<iostream>

int main(){

	int x;

	int* ptr = &x;

	std::cout<<"Enter value of x "<<std::endl;

	std::cin>> x ;

	std::cout<<"value of x "<< x << std::endl;
	std::cout<<"value of x "<< *ptr << std::endl;

	std::cout<<"size of x "<< sizeof(x) << std::endl;
	std::cout<<"size of ptr "<< sizeof(ptr) << std::endl;


}
