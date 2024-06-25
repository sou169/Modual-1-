#include<iostream>
using namespace std;
class employee{
	string name;
	int id;
	int salary;
	int choice;
	public:
	employee(){
		cout<<"Enter employee name: ";
		getline(cin,name);	
		cout<<"Enter employee id: ";
		cin>>id;
		cout<<"\n---------Choose Employee performance----------\n";
		cout<<"\n1.very good perfomance \n2.good perfomance \n3.average perfomance \n4.bad perfomance\n\n";
		cout<<"Enter choice via perfomance employee: ";
		cin>>choice;
		switch(choice){
			case 1:
				cout<<"\nVery Good perfomance\n";
				salary = 60000;
				cout<<"Salary should be : "<<salary<<"/-";
				break;
			case 2:
				cout<<"\nGood perfomance\n";
				salary = 45000;
				cout<<"Salary should be : "<<salary<<"/-";
				break;
			case 3:
				cout<<"\nAverage perfomance\n";
				salary = 30000;
				cout<<"Salary should be : "<<salary<<"/-";
				break;
			case 4:
				cout<<"\nBad perfomance\n";
				salary = 10000;
				cout<<"Salary should be : "<<salary<<"/-";
				break;
			default:
				cout<<"\nInvalid choice !!!!!";
		}
	}
};

int main(){
	employee obj;
	return 0;
}
