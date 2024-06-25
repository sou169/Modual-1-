#include<iostream>
using namespace std;
class rect{
	protected:
	float len,wid;
};

class area: public rect{
	public:
	area(){
		cout<<"\nEnter Lenght rectangle : ";
		cin>>len;
		cout<<"Enter Width of rectangle : ";
		cin>>wid;  
		cout<<"\n\nArea of Rectangle : "<<len*wid;
	}
};

int main()
{
	area obj;
	return 0;
}
