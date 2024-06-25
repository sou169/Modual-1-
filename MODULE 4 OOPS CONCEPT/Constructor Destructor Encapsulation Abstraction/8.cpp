#include <iostream>
#include <string>
using namespace std;
class address {
private:
    string street;
    string city;
    string state;
    string zipCode;
public:
	void input() {
        cout << "Enter street: ";
        getline(cin, street);
        cout << "Enter city: ";
        getline(cin, city);
        cout << "Enter state: ";
        getline(cin, state);
        cout << "Enter zip code: ";
        getline(cin, zipCode);
    }
    void display() const {
        cout << "Address: " << street << ", " << city << ", " << state << ", " << zipCode << endl;
    }
};
class student {
private:
    string name;
    string className;
    int rollNumber;
    float marks;
    address address;
public:
    void input() {
        cout << "Enter name: ";
        getline(cin, name);
        cout << "Enter class: ";
        getline(cin, className);
        cout << "Enter roll number: ";
        cin >> rollNumber;
        cout << "Enter marks: ";
        cin >> marks;
        cin.ignore();
        address.input();
    }
    char calculateGrade() const {
        if (marks >= 90) return 'A';
        else if (marks >= 80) return 'B';
        else if (marks >= 70) return 'C';
        else if (marks >= 60) return 'D';
        else return 'F';
    }
    void displayInfo() const {
        cout <<"\nName: " << name << endl;
        cout <<"Class: " << className << endl;
        cout <<"Roll Number: " << rollNumber << endl;
        cout <<"Marks: " << marks << endl;
        cout <<"Grade: " << calculateGrade() << endl;
        address.display();
    }
};

int main() {
    student obj1;
    obj1.input();
    obj1.displayInfo();
    return 0;
}
