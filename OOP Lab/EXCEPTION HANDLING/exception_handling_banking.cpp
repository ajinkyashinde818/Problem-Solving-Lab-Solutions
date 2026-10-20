#include<iostream>
using namespace std;

class Account{
    private:
        int pin;
        double balance;
        int transactionCount;

    public:
        Account(int p, double b){
            pin = p;
            balance = b;
            transactionCount = 0;
        }

        void withdraw(int enteredPin, double amount){
            try{
                if(enteredPin != pin)
                    throw "Invalid PIN!";

                if(amount < 0)
                    throw "Negative amount is not allowed!";

                if(amount > balance)
                    throw "Insufficient funds!";

                if(transactionCount >= 3)
                    throw "Transaction limit exceeded!";

                // Update only after all validations pass
                balance -= amount;
                transactionCount++;

                cout << "Withdrawal successful." << endl;
                cout << "Remaining Balance: Rs. " << balance << endl;
            }
            catch(const char *msg){
                cout << "Error: " << msg << endl;
                cout << "Balance unchanged: Rs. " << balance << endl;
            }
        }

        void display(){
            cout << "Current Balance: Rs. " << balance << endl;
        }
};

int main(){
    Account a(1234, 5000);

    cout << "Initial Account Details:" << endl;
    a.display();
    cout << "\n1. Invalid PIN:" << endl;
    a.withdraw(1111, 500);
    cout << "\n2. Negative Amount:" << endl;
    a.withdraw(1234, -200);
    cout << "\n3. Insufficient Funds:" << endl;
    a.withdraw(1234, 6000);
    cout << "\n4. Successful Withdrawal:" << endl;
    a.withdraw(1234, 1000);
    cout << "\n5. More Successful Transactions:" << endl;
    a.withdraw(1234, 500);
    a.withdraw(1234, 500);

    cout << "\n6. Transaction Limit:" << endl;
    a.withdraw(1234, 500);
    cout << "\nFinal Account Details:" << endl;
    a.display();

    return 0;
}