#include<iostream>
using namespace std;
float w;
float l;
class rec{
	float rect_area;
	float rect_p;
	public:
	void perimeter(){
		rect_p = 2*l+2*w;
		cout<<"Ractangle perimeter is:"<<rect_p<<" Unit"<<endl;
	}
		void area(){
		rect_area = w*l;
		cout<<"Ractangle area is:"<<rect_area<<" Unit square"<<endl;
	}
};

int main(){
	rec obj;
	cout<<"Enter length : ";
	cin>>l;
	cout<<"Enter width : ";
	cin>>w;
	obj.perimeter();
	obj.area();
	return 0;
}
