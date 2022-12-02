#include<iostream>
//The static member functions are special functions used to access the 
//static data members or other static member functions. A member 
//function is defined using the static keyword. A static member 
//function shares the single copy of the member function to any number
//of the class' objects

// Static member function is accessed not creating class object, 
// it can be accessed by acccessing class with scope resolution operator

using namespace std;
class MyStaticMemFun{
	private:
	
	public:
		static void display(){
			cout<<"This is static member function"<<endl;
		}
};
main(){
	MyStaticMemFun::display();
}
