#include<iostream>
using namespace std;

class Account{
    private:
        int accountNumber;
        double balance;

    public:

        // Default Constructor
        Account(){
            accountNumber = 0;
            balance = 0;
        }

        // Parameterized Constructor
        Account(int accNo, double bal){
            accountNumber = accNo;
            balance = bal;
        }

        // Copy Constructor
        Account(const Account &a){
            accountNumber = a.accountNumber;
            balance = a.balance;
        }

        // Member Function
        void display(){
            cout << "Account Number: " << accountNumber << endl;
            cout << "Balance: Rs. " << balance << endl;
        }

        // Validation Function
        void validate(){
            if(accountNumber > 0 && balance >= 0)
                cout << "Account is valid." << endl;
            else
                cout << "Account is invalid." << endl;
        }
};

int main(){

    cout << "Default Constructor:" << endl;
    Account a1;
    a1.display();
    a1.validate();

    cout << "\nParameterized Constructor:" << endl;
    Account a2(1001, 15000);
    a2.display();
    a2.validate();

    cout << "\nCopy Constructor:" << endl;
    Account a3(a2);
    a3.display();
    a3.validate();

    return 0;
}