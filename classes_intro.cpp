#include<iostream>
using namespace std;
class Test{
	private:
		int n;
	public:
		void get(){
			cout<<"Enter Any Number: ";
			cin>>n;
		}
		void show(){
			cout<<"The Number is : "<<n;
		}
};
main(){
	Test t;
	t.get();
	t.show();
}
