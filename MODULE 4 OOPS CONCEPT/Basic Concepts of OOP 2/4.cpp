#include<iostream>
using namespace std;
float r;
class circ{
	float circle_area;
	float circle_cir;
	public:
		void area(){
			float(circle_area)= 3.14*r*r;
			cout<<"Area is: "<<float(circle_area)<<endl;
		}
		void circumference(){
			float(circle_cir)= 2*3.14*r;
			cout<<"Circumference is: "<<float(circle_cir);
		}
};

int main(){
	circ obj;
		cout<<"Enter Radius of circle: ";
		cin>>r;
		
		obj.area();
		obj.circumference();
		return 0;
}
