#include<iostream>
using namespace std;

class Account;

class BankManager{
    public:
        void showPrivateData(Account &a);
};


class Account{
    private:
        int accountNumber;
        double balance;

        static int count;

    public:

        Account(int accNo, double bal){
            this->accountNumber = accNo;
            this->balance = bal;
            count++;
        }

        // Inline function
        inline bool isValid(){
            return balance >= 0;
        }

        // this pointer
        Account& updateBalance(double amount){
            this->balance += amount;
            return *this;
        }

        // Static member function
        static void showCount(){
            cout << "Total Accounts: " << count << endl;
        }

        // Friend class
        friend class BankManager;

        void display(){
            cout << "Account Number: " << accountNumber << endl;
            cout << "Balance: Rs. " << balance << endl;
        }
};


// Static data member definition
int Account::count = 0;


// Friend class function
void BankManager::showPrivateData(Account &a){
    cout << "Manager Access:" << endl;
    cout << "Account Number: " << a.accountNumber << endl;
    cout << "Balance: Rs. " << a.balance << endl;
}


int main(){

    Account a1(1001, 10000);
    Account a2(1002, 15000);

    cout << "Account Details:" << endl;
    a1.display();
    a2.display();

    cout << "\nInline Function:" << endl;

    if(a1.isValid())
        cout << "Account is valid." << endl;

    cout << "\nthis Pointer:" << endl;

    a1.updateBalance(2000);
    a1.display();

    cout << "\nStatic Member Function:" << endl;
    Account::showCount();

    cout << "\nFriend Class:" << endl;

    BankManager manager;
    manager.showPrivateData(a1);

    return 0;
}