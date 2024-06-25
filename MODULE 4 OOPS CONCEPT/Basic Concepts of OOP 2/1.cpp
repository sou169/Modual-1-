#include<iostream>
using namespace std;
class calc{
	int n1,n2;
	public:
		void get(){
			cout<<"Enter no. 1 : ";
			cin>>n1;
			cout<<"Enter no. 2 : ";
			cin>>n2;
		}
		void add(){
			cout<<n1<<" + "<<n2<<" = "<<n1+n2;
		}
		void sub(){
			cout<<n1<<" - "<<n2<<" = "<<n1-n2;
		}
		void mul(){
			cout<<n1<<" * "<<n2<<" = "<<n1*n2;
		}
		void div(){
			if(n2==0){
				cout<<"Cannot divide by 0 ";
			}
			else{
			cout<<n1<<" / "<<n2<<" = "<<n1/n2;
		}
		}
		void mod(){
			cout<<n1<<" % "<<n2<<" = "<<n1%n2;
		}
};

int main()
{
	int choice;
	calc obj;
	obj.get();
	cout<<"\n---Enter your choice---\n";
	cout<<"\n1.ADD\n2.SUB\n3.MUL\n4.DIV\n5.MOD\n";
	cout<<"\nEnter choice from above : ";
	cin>>choice;
	cout<<"\n=======================================\n";
	switch(choice){
		case 1:obj.add(); break;
		case 2:obj.sub(); break;
	    case 3:obj.mul(); break;
	    case 4:obj.div(); break;
		case 5:obj.mod(); break;
	    default:cout<<"Enter Valid Choice !!!!!";
	}
	return 0;
}
