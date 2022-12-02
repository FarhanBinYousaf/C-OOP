#include<iostream>
using namespace std;
class Employee{
	private:
		int id;
		int salary;
	public:
		void setId(){
			salary = 1200;
			cout<<endl;
			cout<<"Enter Employee ID: ";
			cin>>id;
		}
		void DisplayData(){
			cout<<"-------------- Output -------------"<<endl<<endl;
			cout<<"ID of Employee is : "<<id<<endl;
			cout<<"Salary of Employee is : "<<salary<<endl;
		}
};
main(){
	Employee emp[4];
	for(int i=0;i<4;i++){
		emp[i].setId();
		emp[i].DisplayData();	
	}

}
