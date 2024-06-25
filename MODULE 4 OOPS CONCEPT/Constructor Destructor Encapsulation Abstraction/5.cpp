#include<iostream>
using namespace std;
class tringle{
	int a,b,c;
public:
	tringle()
	{
		cout<<"Enter length of 3 side : ";
		cin>>a>>b>>c;
		if(a==b && b==c){
			cout<<"\nIt's Equilateral Tringle";
		}
		else if(a==b || b==c || a==c){
			cout<<"\nIt's Isosceles Tringle";
		}	
		else{
			cout<<"\nIt's Scalene Tringle";	
		}
	}
};
int main()
{
	tringle obj;
	return 0;
}
