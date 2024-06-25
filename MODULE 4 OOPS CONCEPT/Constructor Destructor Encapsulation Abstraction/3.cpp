#include<iostream>
using namespace std;
class car{
private:
	int year;
	string company;
	string model;
public:
car(){
	cout<<"Enter Car Company : ";
	getline(cin,company);
	cout<<"Enter Car Model : ";
	getline(cin,model);
	cout<<"Enter Car Manufacturnig Year : ";
	cin>>year;
}
void display(){
	cout<<"\nCar Company is "<<company<<"\nCar Model is "<<model<<"\nCar manufacturing year is :"<<year;
}
};
int main()
{
	car obj;
	obj.display();
	return 0;
}
