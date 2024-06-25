#include<iostream>
using namespace std;

class crickter{
	protected:
	int run,best_p;
	float avg_run;
};

class batsman: public crickter{
	protected:
		int ball;
	public:
	batsman(){
		cout<<"\nEnter Total Run : ";
		cin>>run;
		cout<<"Enter Best Performance : ";
		cin>>best_p;  
	}
	void avg(){
		cout<<"Enter total balls played by a batsman : ";
		cin>>ball;
		avg_run=float(run)/float(ball);	
	}
	void display(){
		cout<<"\nTotal runs scored: "<<run<<endl;
        cout<<"Average runs scored: "<<avg_run<<endl;
        cout<<"Best performance: "<<best_p<<endl;
	}
};

int main()
{
	batsman obj;
	obj.avg();
	obj.display();
	return 0;
}
