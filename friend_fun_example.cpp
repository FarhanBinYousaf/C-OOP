#include<iostream>
using namespace std;
class A{
	private:
		int num;
		char name[40];
	public:
//		void getData(){
//			cout<<"Enter Number: ";
//			cin>>num;
//			cout<<"Enter Name: ";
//			cin>>name;
//		}
//		void display()
//		{
//		cout<<"Number is : "<<num<<endl;
//		cout<<"String is : "<<name<<endl;
//		}	
		friend class B;
};
class B{
	public:
		void getData(A obj){
			cout<<"Enter Number: ";
			cin>>obj.num;
			cout<<"Enter Name: ";
			cin>>obj.name;
		}
		void display(A a)
		{
		cout<<"Number is : "<<a.num<<endl;
		cout<<"String is : "<<a.name<<endl;
		}	
};
main(){
	B b;
	A a;
//	a.getData();
//	a.display();
	
	b.getData(a);
	b.display(a);
}
