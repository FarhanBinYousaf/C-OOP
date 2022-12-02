#include<iostream>
using namespace std;
class Test{
	private:
		int n;
	public:
		Test():n(10){
			cout<<"Value of N is: "<<n<<endl;
		}
};
main(){
	Test t;
}
