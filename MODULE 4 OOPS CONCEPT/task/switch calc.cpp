#include<iostream>
using namespace std;
int main()
{
	int n1,n2;
	char choice;
	cout<<"Enter no.1 : ";
	cin>>n1;
	cout<<"Enter operator(+,-,*,/) : ";
	cin>>choice;
	cout<<"Enter no.2 : ";
	cin>>n2;
	switch(choice){
		case '+':
			cout<<n1<<" + "<<n2<<" = "<<n1+n2;
			break;
		case '-':
			cout<<n1<<" - "<<n2<<" = "<<n1-n2;
			break;
		case '*':
			cout<<n1<<" * "<<n2<<" = "<<n1*n2;
			break;
		case '/':
			if(n2==0){
				cout<<"Cannot devide by 0";
				break;
			}
			else{
			cout<<n1<<" + "<<n2<<" = "<<n1/n2;
			break;
		}
		default:cout<<"Enter valid operator !!!!!!!!!";
	}
	return 0;
}
