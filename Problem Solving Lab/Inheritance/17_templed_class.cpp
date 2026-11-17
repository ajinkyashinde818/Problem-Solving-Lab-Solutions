#include <iostream>
using namespace std;

// Non-Templated Base Class
class Student {
protected:
    int rollNo;

public:
    void getRollNo() {
        cout << "Enter Roll No: ";
        cin >> rollNo;
    }
};

// Templated Derived Class
template <class T>
class Marks : public Student {
    T marks;

public:
    void getMarks() {
        cout << "Enter Marks: ";
        cin >> marks;
    }

    void display() {
        cout << "\nRoll No: " << rollNo << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    Marks<int> s1;

    s1.getRollNo();
    s1.getMarks();
    s1.display();

    return 0;
}