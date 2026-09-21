#include<iostream>
using namespace std;

class Account{
    private:
        int accountNumber;
        double amount;

    public:

        // Default Constructor
        Account(){
            accountNumber = 0;
            amount = 0;
        }

        // Parameterized Constructor
        Account(int accNo, double amt){
            accountNumber = accNo;
            amount = amt;
        }

        // Overloading == operator
        bool operator==(Account a){
            return accountNumber == a.accountNumber;
        }

        // Overloading + operator
        Account operator+(Account a){
            Account temp;
            temp.accountNumber = accountNumber;
            temp.amount = amount + a.amount;
            return temp;
        }

        // Validation Function
        bool validate(){
            return accountNumber > 0 && amount >= 0;
        }

        // Display Function
        void display(){
            cout << "Account Number: " << accountNumber << endl;
            cout << "Amount: Rs. " << amount << endl;
        }
};

int main(){

    cout << "Default Constructor:" << endl;

    Account a1;

    if(a1.validate())
        a1.display();
    else
        cout << "Invalid account." << endl;


    cout << "\nParameterized Objects:" << endl;

    Account a2(1001, 10000);
    Account a3(1001, 5000);

    a2.display();
    a3.display();


    cout << "\n== Operator:" << endl;

    if(a2.validate() && a3.validate()){
        if(a2 == a3)
            cout << "Both accounts have the same account number." << endl;
        else
            cout << "Accounts have different account numbers." << endl;
    }
    else{
        cout << "Comparison cannot be performed." << endl;
    }


    cout << "\n+ Operator:" << endl;

    if(a2.validate() && a3.validate()){
        Account total = a2 + a3;

        cout << "The + operator combines the amounts." << endl;
        total.display();
    }
    else{
        cout << "Addition cannot be performed on invalid accounts." << endl;
    }

    return 0;
}