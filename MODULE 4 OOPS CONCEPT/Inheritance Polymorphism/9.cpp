#include <iostream>
using namespace std;
class matrix{
    int i,arr[3];
public:
    void accept();
    void display();
    void operator+(matrix x);
};
void matrix::accept() {
    cout<< "\nEnter Array Elements:\n";
    for(i=0;i<3;i++){
        cout <<" ";
        cin>>arr[i];
    }
}

void matrix::display() {
    cout<<"\nArray Elements:\n";
    for(i=0;i<3;i++){
        cout<<arr[i]<<"\t";
    }
    cout<<"\n";
}

void matrix::operator+(matrix x) {
    int result[3];
    for(i=0;i<3;i++){
        result[i]=arr[i]+x.arr[i];
    }
    cout<<"\nAddition of Arrays:\n";
    for(int i=0;i<3;i++){
        cout<<result[i]<<"\t";
    }
    cout<<"\n";
}

int main() {
    matrix m,n;
    m.accept();
    n.accept();
    cout<<"\nFirst Array:\n";
    m.display();
    cout << "\nSecond Array:\n";
    n.display();
    m+n;
    return 0;
}
