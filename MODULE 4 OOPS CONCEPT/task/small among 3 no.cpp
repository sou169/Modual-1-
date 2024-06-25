#include<iostream>
using namespace std;
int main(){
	int n1,n2,n3;
	cout<<"Enter 3 no. : ";
	cin>>n1>>n2>>n3;
	if(n1<n2 && n1<n3){
		cout<<n1<<" is small";
	}
	else if(n2<n1 && n2<n3){
		cout<<n2<<" is small";
	}
	else{
		cout<<n3<<" is small";
	}
	return 0;
}
