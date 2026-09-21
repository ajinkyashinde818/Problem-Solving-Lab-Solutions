#include<iostream>
using namespace std;

// Base Class
class Account{
protected:
    int accountNumber;
    double balance;

public:
    Account(int accNo, double bal){
        accountNumber = accNo;
        balance = bal;
    }

    void displayAccount(){
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: Rs. " << balance << endl;
    }
};

// Hierarchical Inheritance
class SavingsAccount : public Account{
private:
    double interestRate;

public:
    SavingsAccount(int accNo, double bal, double rate)
        : Account(accNo, bal){
        interestRate = rate;
    }

    void display(){
        displayAccount();
        cout << "Interest Rate: " << interestRate << "%" << endl;
    }
};

class CurrentAccount : public Account{
private:
    double overdraftLimit;

public:
    CurrentAccount(int accNo, double bal, double limit)
        : Account(accNo, bal){
        overdraftLimit = limit;
    }

    void display(){
        displayAccount();
        cout << "Overdraft Limit: Rs. " << overdraftLimit << endl;
    }
};

class LoanAccount : public Account{
private:
    double loanAmount;

public:
    LoanAccount(int accNo, double bal, double loan)
        : Account(accNo, bal){
        loanAmount = loan;
    }

    void display(){
        displayAccount();
        cout << "Loan Amount: Rs. " << loanAmount << endl;
    }
};

// Support class
class Insurance{
public:
    void showInsurance(){
        cout << "Insurance facility available." << endl;
    }
};

// Multiple Inheritance
class PremiumAccount : public Account, public Insurance{
public:
    PremiumAccount(int accNo, double bal)
        : Account(accNo, bal){
    }

    void display(){
        displayAccount();
        showInsurance();
    }
};

int main(){

    cout << "Savings Account:" << endl;
    SavingsAccount s(1001, 15000, 5.5);
    s.display();

    cout << "\nCurrent Account:" << endl;
    CurrentAccount c(1002, 20000, 5000);
    c.display();

    cout << "\nLoan Account:" << endl;
    LoanAccount l(1003, 10000, 50000);
    l.display();

    cout << "\nPremium Account:" << endl;
    PremiumAccount p(1004, 30000);
    p.display();

    return 0;
}