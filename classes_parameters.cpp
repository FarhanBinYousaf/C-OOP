#include<iostream>
using namespace std;
class student{
	public:
		void show(int no){
			cout<<"No is : "<<no;
		}
};

main(){
	int number;
	cout<<"Enter No:";
	cin>>number;
	student s;
	s.show(number);
}
