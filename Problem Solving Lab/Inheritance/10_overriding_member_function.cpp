#include <iostream>
using namespace std;

class Account {
public:
    void display() {
        cout << "Account class display()" << endl;
    }
};

class SavingsAccount : public Account {
public:
    void display() {
        cout << "Savings Account class display()" << endl;
    }
};

class CurrentAccount : public Account {
public:
    void display() {
        cout << "Current Account class display()" << endl;
    }
};

int main() {
    Account a;
    SavingsAccount s;
    CurrentAccount c;

    a.display();
    s.display();
    c.display();

    return 0;
}