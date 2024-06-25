//#include<iostream>
//using namespace std;
//class bank{
//	string name;
//	int acc_no;
//	string type;
//	float balance,x;
//public:
//	void get(){
//		cout<<"\n-----Enter your details-----\n\n";
//		cout<<"Enter Name of the depositor         : ";
//		cin>>name;
//		cout<<"Enter Account Number                : ";
//		cin>>acc_no;
//		cout<<"Enter Account Type                  : ";
//		cin>>type;
//		cout<<"Enter Balance amount in the account : ";
//		cin>>balance;
//	}
//	void depo(){
//		cout<<"Enter amount to deposite : ";
//		cin>>x;
//		balance+=x;
//		cout<<"\nTotal balance : "<<balance;
//	}
//	void with(){
//		cout<<"\nCurrent balance : "<<balance;
//		cout<<"\nEnter amount to withdraw : ";
//		cin>>x;
//		if(x>balance){
//			cout<<"\nINSUFFICIENT BALANCE\n";
//		}
//		else{
//		balance-=x;
//		cout<<"\nUpdated balance : "<<balance;
//	}
//	}
//};
//
//int main()
//{
//	int choice;
//	bank acc;
//	acc.get();
//	cout<<"\n---Choose the operation you want to perform---";
//	cout<<"\n1.DEPOSITE\n2.WITHDRAW\n";
//	cout<<"ENTER YOUR CHOICE : ";
//	cin>>choice;
//	switch(choice){
//		case 1:acc.depo(); break;
//		case 2:acc.with(); break;
//		default: cout<<"Enter valid choice!!!!!";
//	}
//	return 0;
//}
#include<iostream>
#include<ctime>
using namespace std;

class bank{
    string name;
    int acc_no;
    string type;
    float balance,x;
public:
    void get(){
        cout<<"\n-----Enter your details-----\n\n";
        cout<<"Enter Name of the depositor         : ";
        cin>>name;
        cout<<"Enter Account Number                : ";
        cin>>acc_no;
        cout<<"Enter Account Type                  : ";
        cin>>type;
        cout<<"Enter Balance amount in the account : ";
        cin>>balance;
    }
    void depo(){
        cout<<"Enter amount to deposite : ";
        cin>>x;
        balance+=x;
        cout<<"\nTotal balance : "<<balance;
    }
    void with(){
        cout<<"\nCurrent balance : "<<balance;
        cout<<"\nEnter amount to withdraw : ";
        cin>>x;
        if(x>balance){
            cout<<"\nINSUFFICIENT BALANCE\n";
        }
        else{
            balance-=x;
            cout<<"\nUpdated balance : "<<balance;
        }
    }
};

int main()
{
	cout<<"\nNOTE : IT'S BREAK TIME BETWEEN 1 PM to 2 PM\n\n";
    time_t now = time(0);
    tm *ltm = localtime(&now);
    int hour = ltm->tm_hour;
    int min = ltm->tm_min;

    if(hour == 13 && min >= 0 && min < 60){
        cout << "It's break time!";
        return 0;
    }

    int choice;
    bank acc;
    acc.get();
    cout<<"\n---Choose the operation you want to perform---";
    cout<<"\n1.DEPOSITE\n2.WITHDRAW\n";
    cout<<"ENTER YOUR CHOICE : ";
    cin>>choice;
    switch(choice){
        case 1:acc.depo(); break;
        case 2:acc.with(); break;
        default: cout<<"Enter valid choice!!!!!";
    }
    return 0;
}
