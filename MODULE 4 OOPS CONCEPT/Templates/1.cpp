#include <iostream>
using namespace std;template <class T>
void swap_values(T& a, T& b){
    T temp=a;
    a=b;
    b=temp;
}

int main() {
    int num1 = 10, num2 = 20;
    cout <<"Before swapping: num1="<<num1<<",num2="<<num2<<endl;
    swap_values(num1, num2);
    cout <<"After swapping: num1="<<num1<<",num2="<<num2<<endl;
    double x = 3.14, y = 2.71;
	cout <<"Before swapping: num1="<<x<<",num2="<<y<<endl;
    swap_values(num1, num2);
    cout <<"After swapping: num1="<<x<<",num2="<<y<<endl;
    return 0;
}
