#include<iostream>
using namespace std;

class area{
	int res,n1,n2,n3;
	public:
	void result(){
		cout<<"Enter length of Rectangle : ";
		cin>>n1;
		cout<<"Enter width of Rectangle : ";
		cin>>n2;
		res=n1*n2;
		cout<<"Area of Rectangle : "<<res;
	}
	void result(int no1,int no2){
		n1=no1;
		n2=no2;
		float(res)=0.5*float(n1)*float(n2);
		cout<<"Area of Triangle : "<<res;
	}
	void result(float no1){
		n1=no1;
		float(res)=float(n1)*float(n1)*3.14;
		cout<<"Area of Circle : "<<res;
	}
};

int main()
{
	int choice,n1,n2;
	float no1;
	area obj;
	cout<<"1> AREA OF RECTANGLE\n2> AREA OF TRIANGLE\n3> AREA OF CIRCLE\n";
	cin>>choice;
	switch(choice){
		case 1: obj.result(); break;
		case 2: cout<<"Enter base of triangle : "; cin>>n1; cout<<"Enter height of triangle : "; cin>>n2; obj.result(n1,n2); break;
		case 3: cout<<"Enter radius of circle : "; cin>>no1; obj.result(no1); break;
		default: cout<<"Invalid !";
	}
	return 0;
}
