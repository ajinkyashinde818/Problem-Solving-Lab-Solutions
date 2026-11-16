#include <iostream>
using namespace std;

class Account
{
public:
    int id = 101;
    virtual void show()
    {
        cout << "Account ID: " << id << endl;
    }
};

class SavingsAccount : public Account
{
public:
    int balance = 5000;
    void showBalance()
    {
        cout << "Savings Balance: " << balance << endl;
    }
};

class CheckingAccount : public Account {};

int main()
{
    Account *p1 = new SavingsAccount();
    Account *p2 = new CheckingAccount();

    SavingsAccount *s1 = dynamic_cast<SavingsAccount*>(p1);
    if (s1 != NULL)
    {
        s1->show();
        s1->showBalance();
    }

    SavingsAccount *s2 = dynamic_cast<SavingsAccount*>(p2);
    if (s2 == NULL)
    {
        cout << "Cast Rejected" << endl;
    }

    delete p1;
    delete p2;

    return 0;
}
