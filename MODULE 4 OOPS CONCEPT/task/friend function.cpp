#include<iostream>
using namespace std;
class employee{
	int id;
	string name;
	
	friend void get(employee);
};
void get(employee obj1){
	cout<<"Enter ID : ";
	cin>>obj1.id;
	cout<<"Enter Name : ";
	cin>>obj1.name;
	
	cout<<"ID is "<<obj1.id<<" Name is "<<obj1.name;
}
int main()
{
	employee obj;
	get(obj);
	return 0;
}
