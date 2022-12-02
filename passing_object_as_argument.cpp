#include<iostream>

using namespace std;
class complex{
	private:
		int a;
		int b;
	public:
		void setData(int v1, int v2){
			a = v1;
			b = v2;
		}
		void setDataBySum(complex obj1,complex obj2){
			a = obj1.a + obj2.a;
			b = obj1.b + obj2.b;
		}
		void showData(){
			cout<<"Your complex number is "<<a<<"+"<<b<<"i"<<endl;
		}
};
main(){
	complex c1,c2,c3;
	c1.setData(1,2);
	c1.showData();
	
	c2.setData(3,4);
	c2.showData();
	
	c3.setDataBySum(c1,c2);
	c3.showData();
}
