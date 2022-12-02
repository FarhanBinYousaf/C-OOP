#include<iostream>
using namespace std;
class Player{
	private:
		int age;
		char team[40],name[40];
	public:
		Player(){
			cout<<"Enter Player Name: ";
			cin.getline(name,40);
			cout<<"Enter Team Name: ";
			cin.getline(team,40);
			cout<<"Enter Player Age : ";
			cin>>age;
		}
		void InputData(){
			cout<<"Enter Player Name: ";
			cin>>name;
			cout<<"Enter Player Age: ";
			cin>>age;
			cout<<"Enter Team Name: ";
			cin>>team;
		}
		void DisplayData(){
			cout<<"Team Name is: "<<" "<<team<<endl;
			cout<<"Player Name is: "<<"  "<<name<<endl;
			cout<<"Player Age is : "<<" "<<age<<endl;
			system("pause");
		}
		void changeData(){
			cout<<"-------------- Your Old Data is --------------"<<endl;
			DisplayData();	
			cout<<"-------------- Enter Your New Data --------------"<<endl;
			InputData();
		}
};
main(){
	Player p;
	int choice;
	do{
		system("cls");
		cout<<"--------------Main Menu--------------"<<endl;
		cout<<"1:- Input Data"<<endl;
		cout<<"2:- Show Data"<<endl;
		cout<<"3:- Change Data"<<endl;
		cout<<"4:- Exit"<<endl;
		cout<<"Enter Any Choice";
		cin>>choice;
		switch(choice){
			case 1:
				p.InputData();
				break;
			case 2:
				p.DisplayData();
				break;
			case 3:
				p.changeData();
				break;
			case 4:
				exit(1);
				break;
			default:
				cout<<"Invalid Choice"<<endl;
		}
	}while(1);
}
