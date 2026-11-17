#include <iostream>
using namespace std;

// Virtual Base Class
class Employee {
protected:
    int id;
    string name;

public:
    void getEmployee() {
        cout << "Enter Employee ID: ";
        cin >> id;

        cout << "Enter Employee Name: ";
        cin >> name;
    }

    virtual void display() {
        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
    }
};

// Derived Class
class Manager : virtual public Employee {
protected:
    string department;

public:
    void getManager() {
        getEmployee();

        cout << "Enter Department: ";
        cin >> department;
    }

    void display() override {
        cout << "\n--- Manager Details ---" << endl;
        Employee::display();
        cout << "Department: " << department << endl;
    }
};

// Another Derived Class
class Developer : virtual public Employee {
protected:
    string language;

public:
    void getDeveloper() {
        getEmployee();

        cout << "Enter Programming Language: ";
        cin >> language;
    }

    void display() override {
        cout << "\n--- Developer Details ---" << endl;
        Employee::display();
        cout << "Programming Language: " << language << endl;
    }
};

int main() {
    Manager m;
    Developer d;

    cout << "Enter Manager Details" << endl;
    m.getManager();
    m.display();

    cout << "\nEnter Developer Details" << endl;
    d.getDeveloper();
    d.display();

    return 0;
}