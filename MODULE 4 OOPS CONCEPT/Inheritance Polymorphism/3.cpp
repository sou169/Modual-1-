#include<iostream>
using namespace std;

class person{
	protected:
	string t_name,s_name;
	int s_age,t_age;
};

class student: public person{
	protected:
		float per;
	public:
	student(){
		cout<<"Enter name of Student : ";
		getline(cin,s_name);
		cout<<"Enter Age of Student : ";
		cin>>s_age;
		cout<<"Enter Percentage of Student : ";
		cin>>per;
	}
	void display(){
		cout<<"\nName of Student : "<<s_name<<endl;
		cout<<"Age of Student : "<<s_age<<endl;
		cout<<"Percentage of Student : "<<per<<endl;
	}
	void update(){
		cout<<"Enter updated percentage of Student : ";
		cin>>per;
	}
	};

class teacher: public person{
	protected:
		int salary;
	public:
		teacher(){
		cout<<"\nEnter name of Teacher : ";
		getline(cin,t_name); //Dummy call of getline(to avoid Enter)
		getline(cin,t_name);
		cout<<"Enter Age of Teacher : ";
		cin>>t_age;
		cout<<"Enter Salary of Teacher : ";
		cin>>salary;
		}
		void display(){
		cout<<"\nName of Teacher : "<<t_name<<endl;
		cout<<"Age of Teacher : "<<t_age<<endl;
		cout<<"Salary of Teacher : "<<salary<<endl;
	}
		void update(){
		cout<<"Enter updated salary of Teacher : ";
		cin>>salary;
	}
};

int main()
{
	char choice_t,choice_s;
	student obj1;
	teacher obj2;
	obj1.display();
	obj2.display();
	cout<<"\nDo you want to Update Students Percentage? (Y or N) : ";
	cin>>choice_s;
	if(choice_s=='y' || choice_s=='Y'){
		obj1.update();
	}
	cout<<"Do you want to Update Teacher Salary? (Y or N) : ";
	cin>>choice_t;
	if(choice_t=='y' || choice_t=='Y'){
		obj2.update();
	}
	cout<<"\n\n---Final DATA---\n";
	obj1.display();
	cout<<"\n";
	obj2.display();
	return 0;
}
