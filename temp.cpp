



#include<iostream>

void run(){
	
				
	std::cout<<"In run"<<std::endl;

	std::cout<<"end run"<<std::endl;

}

void fun(){
	
	std::cout<<"In fun"<<std::endl;

	run();


	std::cout<<"end fun"<<std::endl;

}

void main(){
//int main(){

	std::cout<<"In main"<<std::endl;

	fun();


}
