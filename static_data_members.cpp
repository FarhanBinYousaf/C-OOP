#include<iostream>
//Static data members are class members that are declared using 
//static keywords. A static member has certain special characteristics.
// These are: Only one copy of that member is created for the entire 
// class and is shared by all the objects of that class, no matter 
//how many objects are created.

using namespace std;
class Counter{
	private:
		static int count;
	public:
		Counter(){
			count++;
		}
		void showData(){
			cout<<"You Created "<<count <<" Object of this class"<<endl;
		}
};
int Counter::count=0;
main(){
	Counter c,c1,c3;
	c.showData();
}
