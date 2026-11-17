#include <iostream>
using namespace std;

class Employee {
public:
    virtual void display() {
        cout << "Employee Base Class" << endl;
    }
};

class Manager : public Employee {
public:
    void display() override {
        cout << "Manager Details" << endl;
    }
};

class Developer : public Employee {
public:
    void display() override {
        cout << "Developer Details" << endl;
    }
};

int main() {
    Employee *ptr;

    Manager m;
    ptr = &m;
    ptr->display();

    Developer d;
    ptr = &d;
    ptr->display();

    return 0;
}