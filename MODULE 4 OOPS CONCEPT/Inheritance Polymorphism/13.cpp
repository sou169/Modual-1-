#include<iostream>
using namespace std;
class max_num{
    int a,b;
    public:
    friend void get(max_num&);
};

void get(max_num& obj1){		
    cout<<"Enter value of a: ";
    cin>>obj1.a;
    cout<<"Enter value of b: ";
    cin>>obj1.b;
    if(obj1.a>obj1.b){
        cout<<"A is greater.";
    }else{
        cout<<"B is greater.";
    }
}

int main(){
    max_num obj;
    get(obj);
    return 0;
}
