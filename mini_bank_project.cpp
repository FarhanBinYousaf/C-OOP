#include<iostream>
using namespace std;
class Bank{
	private:
		char name[40],acntName[40];
		int balance;
	public:
		Bank(){
			cout<<"Enter Account Name: ";
			cin>>acntName;
			cout<<"Enter Customer Name: ";
			cin>>name;
			cout<<"Enter Balance: ";
			cin>>balance;
			
		}
		void Deposit(int amount){
			balance = balance + amount;
			cout<<endl;
			cout<<"----------- After Depositing Amount to "<< acntName <<" associated with "<< name <<endl;
			cout<<endl;
			cout<<"Balance After Deposit: "<<balance<<endl;
			system("pause");
		}
		void WithDraw(int withDrawAmount){
			if(withDrawAmount > balance){
				cout<<"Sorry! Your balance is less than withdraw amount: "<<endl;
				
			}
			else{
				balance = balance - withDrawAmount;
				cout<<endl;
				cout<<"----------- After withdrawing Amount from "<< acntName <<" associated with "<< name <<endl;				cout<<endl;
				cout<<"Balance after withdraw: "<<balance<<endl;
				system("pause");
			}
		}
};
main(){
	Bank b;
	int choice;
	do{
		system("cls");
		cout<<"------- Main Menu -------:"<<endl;
		cout<<"1:- To Deposit Amount: "<<endl;
		cout<<"2:- To Withdraw Amount:"<<endl;
		cout<<"3:- To check Detail: "<<endl;
		cout<<"4:- Quit"<<endl;
		cout<<"Enter any choice: "<<" ";
		cin>>choice;
		switch(choice){
			case 1:
				cout<<"----------- Deposit Your Amount----------"<<endl;
				int amnt;
				cout<<"Enter Amount to deposit: ";
				cin>>amnt;
				b.Deposit(amnt);
				break;
			case 2:
				cout<<"----------- Withdraw Your Amount----------"<<endl;
				int withdrawamount;
				cout<<"Enter Amount to withdraw: ";
				cin>> withdrawamount;
				b.WithDraw(withdrawamount);
			case 4:
				exit(1);
				break;
		}
	}while(1);
	
	
	
}
