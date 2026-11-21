#include <iostream>
#include <iomanip>
using namespace std;

class Account {
public:
    int accNo;
    double balance;

    Account(int no, double b) {
        accNo = no;
        balance = b;
    }

    virtual void display() {
        cout << "Account No: " << accNo << endl;
        cout << "Balance: " << balance << endl;
    }

    virtual ~Account() {}
};

// Derived class
class Savings : public Account {
public:
    Savings(int no, double b) : Account(no, b) {}

    void display() override {
        cout << "Savings Account" << endl;
        Account::display();
    }
};

// Statement line contains only required fields
class AccountStatementLine {
public:
    int accNo;
    double balance;

    AccountStatementLine(Account a) {
        accNo = a.accNo;
        balance = a.balance;
    }

    void display() {
        cout << "Account No: " << accNo << endl;
        cout << "Balance: " << fixed << setprecision(2)
             << balance << endl;
    }
};

int main() {

    // 1. Built-in type casting
    double amount = 1250.75;
    int value = static_cast<int>(amount);

    cout << "--- Type Casting ---" << endl;
    cout << "Double: " << amount << endl;
    cout << "Integer: " << value << endl;

    // 2. Object conversion
    Savings s(101, 25000.50);

    AccountStatementLine line(s);

    cout << "\n--- Account Statement ---" << endl;
    line.display();

    // 3. Upcasting
    Account *ptr = &s;

    cout << "\n--- Upcasting ---" << endl;
    ptr->display();

    // 4. Checked Downcasting
    Savings *sptr = dynamic_cast<Savings*>(ptr);

    if(sptr != nullptr)
        cout << "\nDowncasting successful." << endl;

    return 0;
}