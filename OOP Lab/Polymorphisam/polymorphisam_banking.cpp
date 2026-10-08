#include<iostream>
using namespace std;

// Base Class
class Account{
protected:
    double balance;

public:
    Account(double bal){
        balance = bal;
    }

    virtual void calculateInterest(){
        cout << "Account Interest: " << balance * 0.03 << endl;
    }
};

// Derived Class
class SavingsAccount : public Account{
public:
    SavingsAccount(double bal) : Account(bal){
    }

    void calculateInterest(){
        cout << "Savings Interest: " << balance * 0.05 << endl;
    }
};

// Derived Class
class CurrentAccount : public Account{
public:
    CurrentAccount(double bal) : Account(bal){
    }

    void calculateInterest(){
        cout << "Current Account Interest: " << balance * 0.02 << endl;
    }
};

// Derived Class
class LoanAccount : public Account{
public:
    LoanAccount(double bal) : Account(bal){
    }

    void calculateInterest(){
        cout << "Loan Interest: " << balance * 0.08 << endl;
    }
};

int main(){

    SavingsAccount s(10000);
    CurrentAccount c(10000);
    LoanAccount l(10000);

    // Base class pointer
    Account *ptr;

    cout << "Savings Account:" << endl;
    ptr = &s;
    ptr->calculateInterest();

    cout << "\nCurrent Account:" << endl;
    ptr = &c;
    ptr->calculateInterest();

    cout << "\nLoan Account:" << endl;
    ptr = &l;
    ptr->calculateInterest();

    return 0;
}