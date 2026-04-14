
#include<iostream>


void swap(int a; int b){
	
	/*a = b;
	y = a;

	int temp = a;

	a = b;
	b = temp;

	std::cout << "value of x and y after swap "<< x << " " << y <<std::endl;*/            // error 




}

int main(){

	int x;
	int y;

	std::cout<<"Enter values for x and y "<<std::endl;

	std::cin>> x >> y ;

	std::cout << "value of x and y before swap "<< x << " " << y <<std::endl;
																	
												
	int temp = x;
	x = y;
	y = temp;

	swap(x,y);

	

	std::cout << "value of x and y after swap "<< x << " " << y <<std::endl;


	

		



}
