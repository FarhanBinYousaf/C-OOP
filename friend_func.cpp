#include<iostream>

using namespace std;
class complex{
	private:
		int a;
		int b;
	friend complex sumOfComplex(complex o1,complex o2);
	
	public:
		void setValues(int n1, int n2){
			a = n1;
			b = n2;
		}
		void ShowValues(){
			cout<<"Your complex number in :"<<a<<" + "<<b<<"i"<<endl;
		}
};
complex sumOfComplex(complex obj1, complex obj2){
	complex obj3;
	obj3.setValues((obj1.a + obj2.a),(obj1.b + obj2.b));
	return obj3;
}
main(){
	complex c1,c2,c3;
	c1.setValues(1,2);
	c1.ShowValues();
	
	c2.setValues(3,4);
	c2.ShowValues();
	
	c3 = sumOfComplex(c1,c2);
	c3.ShowValues();
}
