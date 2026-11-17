#include <iostream>
using namespace std;

// Base Class
class Employee {
protected:
    int id;
    string name;

public:
    void getEmployeeDetails() {
        cout << "Enter Employee ID: ";
        cin >> id;

        cout << "Enter Employee Name: ";
        cin >> name;
    }
};

// Derived Class 1
class Developer : public Employee {
public:
    void display() {
        cout << "\n--- Developer ---" << endl;
        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Field: Software Development" << endl;
    }
};

// Derived Class 2
class Designer : public Employee {
public:
    void display() {
        cout << "\n--- Designer ---" << endl;
        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Field: UI/UX Design" << endl;
    }
};

// Derived Class 3
class Tester : public Employee {
public:
    void display() {
        cout << "\n--- Tester ---" << endl;
        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Field: Software Testing" << endl;
    }
};

int main() {
    Developer d;
    Designer ds;
    Tester t;

    cout << "Enter Developer Details" << endl;
    d.getEmployeeDetails();
    d.display();

    cout << "\nEnter Designer Details" << endl;
    ds.getEmployeeDetails();
    ds.display();

    cout << "\nEnter Tester Details" << endl;
    t.getEmployeeDetails();
    t.display();

    return 0;
}