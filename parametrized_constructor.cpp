#include<iostream>
using namespace std;
class Test{
	private:
		int n;
	public:
		Test(){
		}
		Test(int num){
			n = num;
		}
		void display(){
			cout<<"Value of N is :"<<n<<endl;
		}
};
main(){
	Test t(200);
	t.display();
}
