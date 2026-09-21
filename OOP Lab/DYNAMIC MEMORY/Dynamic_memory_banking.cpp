#include<iostream>
using namespace std;

class Account{
    public:
        int accountNumber;
        double balance;

        void display(){
            cout << "Account Number: " << accountNumber << endl;
            cout << "Balance: Rs. " << balance << endl;
        }
};

class Transaction{
    public:
        double amount;

        void display(){
            cout << "Transaction Amount: Rs. " << amount << endl;
        }
};

// Modify record using reference
void modify(Account &a){
    a.balance += 1000;
}

int main(){

    int n;

    cout << "Enter number of accounts: ";
    cin >> n;

    if(n <= 0){
        cout << "Invalid capacity." << endl;
        return 0;
    }

    // Dynamic array using new
    Account *accounts = new Account[n];

    for(int i = 0; i < n; i++){
        cout << "Enter Account Number: ";
        cin >> accounts[i].accountNumber;

        cout << "Enter Balance: ";
        cin >> accounts[i].balance;
    }

    cout << "\nAccounts:" << endl;

    for(int i = 0; i < n; i++){
        accounts[i].display();
    }

    // Modify without copying using reference
    modify(accounts[0]);

    cout << "\nAfter modification:" << endl;
    accounts[0].display();

    // Release memory
    delete[] accounts;

    cout << "\nMemory released successfully." << endl;

    return 0;
}