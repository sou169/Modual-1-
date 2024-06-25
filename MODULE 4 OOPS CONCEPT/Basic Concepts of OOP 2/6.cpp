#include<iostream>
using namespace std;
class person{
	string name;
	int age;
	string country;
	public:
		void set(){
			cout<<"Enter Your name: ";
			getline(cin,name);
			cout<<"Enter you age: ";
			cin>>age;
			cout<<"Enter your country name: ";
			getline(cin,country);
			getline(cin,country);
		}
		void get(){
			cout<<"\nName : "<<name<<endl;
			cout<<"Age : "<<age<<endl;
			cout<<"Country : "<<country<<endl;
		}
};

int main(){
	person obj;
	obj.set();
	obj.get();
	return 0;
}
