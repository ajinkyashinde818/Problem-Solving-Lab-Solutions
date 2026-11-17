#include <iostream>
using namespace std;

// Base Class
class Student {
protected:
    int rollNo;
    string name;

public:
    void getStudentDetails() {
        cout << "Enter Roll No: ";
        cin >> rollNo;

        cout << "Enter Name: ";
        cin >> name;
    }
};

// Derived Class 1
class Computer : public Student {
public:
    void display() {
        cout << "\n--- Computer Stream ---" << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "Name: " << name << endl;
        cout << "Stream: Computer" << endl;
    }
};

// Derived Class 2
class Mechanical : public Student {
public:
    void display() {
        cout << "\n--- Mechanical Stream ---" << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "Name: " << name << endl;
        cout << "Stream: Mechanical" << endl;
    }
};

// Derived Class 3
class Civil : public Student {
public:
    void display() {
        cout << "\n--- Civil Stream ---" << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "Name: " << name << endl;
        cout << "Stream: Civil" << endl;
    }
};

int main() {
    Computer c;
    Mechanical m;
    Civil cv;

    cout << "Enter Computer Student Details" << endl;
    c.getStudentDetails();
    c.display();

    cout << "\nEnter Mechanical Student Details" << endl;
    m.getStudentDetails();
    m.display();

    cout << "\nEnter Civil Student Details" << endl;
    cv.getStudentDetails();
    cv.display();

    return 0;
}