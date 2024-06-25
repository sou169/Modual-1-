#include<iostream>
using namespace std;
class DATE{
	int date;
	string month;
	int year;
	public:
	DATE(){
		cout<<"Enter date: ";
		cin>>date;
		if(date > 31){
			cout<<"Invalid Date";
		}else{
			cout<<"Enter month: ";
			cin>>month;
		}
			if(month == ("feb") && (date>28)){
				cout<<"date is not valid";
			}else{
				cout<<"Enter Year: ";
		     	cin>>year;
		     	cout<<date<<"-"<<month<<"-"<<year;
		}
	};	
};
int main()
{
	DATE obj;
	return 0;
}
