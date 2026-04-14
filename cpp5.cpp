
#include<iostream>

// using c2w namespace;

namespace std{

	void course3(){
		std::cout<<"in course 3"<<std::endl;

	}

};

namespace c2w{

	void course1(){
		std::cout<< "c, cpp, java, c#"<<std::endl;
		}

};

namespace c2w{

	void course2(){
		std::cout<<"flutter, spring, spring boot"<<std::endl;
		}

};


// using namespace c2w;

int main(){
	
	//	course1();
	//	course2();
	
	c2w::course1();
	c2w::course2();
	std::course3();

}
