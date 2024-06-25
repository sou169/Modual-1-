#include<iostream>
using namespace std;
class student{
	public:
		int id;
		string name;
		public:
			student(int id1,string name1){
				id=id1;
				name=name1;
			}
};	
class result{
	float pr;
	student *ref;
	public:
		result(float pr1,student *ref1){
			pr=pr1;
			ref=ref1;
		}
	void display(){
		cout<<"ID is "<<ref->id<<" Name is "<<ref->name<<" Percentage is "<<pr;
	}
};
int main()
{
	student stu(101,"jay");
	result res(55,&stu);
	res.display();
	return 0;
}
