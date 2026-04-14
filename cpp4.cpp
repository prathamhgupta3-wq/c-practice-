#include<iostream>

int run(){
	
				
	std::cout<<"In run"<<std::endl;

	std::cout<<"end run"<<std::endl;

}

int fun(){
	
	std::cout<<"In fun"<<std::endl;

	run();


	std::cout<<"end fun"<<std::endl;
	
	return 0;


}

//void main(){
int main(){

	std::cout<<"In main"<<std::endl;

	fun();

	std::cout<<"end main"<<std::endl;


}
