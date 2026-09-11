#include<iostream>
#include<string>
using namespace std;

class Customer{
    private:
        int customerID;
        string name;

    public:
        Customer(int id, string n) {
            customerID = id;
            name = n;
        }

        void displayCustomer(){
            cout << "Customer ID   : " << customerID << endl;
            cout << "Customer Name : " << name << endl;
        }
};

class Transaction{
    private:
        string type;
        double amount;
    
    public:
        Transaction(string t,double a){
            type=t;
            amount=a;
        }
        void displayTransaction(){
            cout << "Transaction : " << type << endl;
            cout << "Amount      : Rs. " << amount << endl;
        }
};

class Account{
    private:
        int accountNumber;
        double balance;
        Customer customer;

    public:
        Account(int accNo, double initialBalance, Customer c): customer(c){
            accountNumber = accNo;

            if (initialBalance >= 0)
                balance = initialBalance;
            else
                balance = 0;
        }

        ~Account(){
            cout << "\nAccount object released." << endl;
        }

        void openAccount(){
            cout << "Account Number: " << accountNumber << endl;
            cout << "Initial Balance: Rs. " << balance << endl;
        }


        void deposit(double amount){
            if (amount > 0){
                balance = balance + amount;

                cout << "Deposited Amount: Rs. " << amount << endl;
                cout << "Current Balance : Rs. " << balance << endl;
            }else{
                cout << "\nInvalid deposit amount." << endl;
            }
    }

    
        void withdraw(double amount){
            if (amount <= 0){
                cout << "\nInvalid withdrawal amount." << endl;
            }else if (amount > balance){
                cout << "\nInsufficient balance." << endl;
            }else{
                balance = balance - amount;

                cout << "\n===== WITHDRAWAL =====" << endl;
                cout << "Withdrawn Amount: Rs. " << amount << endl;
                cout << "Current Balance : Rs. " << balance << endl;
            }
    }


        void transferFunds(Account &receiver, double amount){
            if (amount <= 0){
                cout << "\nInvalid transfer amount." << endl;
            }else if (amount > balance){
                cout << "\nInsufficient balance for transfer." << endl;
            }else{
                balance = balance - amount;
                receiver.balance = receiver.balance + amount;

                cout << "Transferred Amount: Rs. " << amount << endl;
                cout << "Sender Balance    : Rs. " << balance << endl;
                cout << "Receiver Balance  : Rs. "
                << receiver.balance << endl;
        }
    }

        void displayAccount(){
            cout << "Account Number: " << accountNumber << endl;
            customer.displayCustomer();
            cout << "Balance       : Rs. " << balance << endl;
        }
};

class BankManager{
    private:
        string managerName;

    public:
        BankManager(string name){
            managerName = name;
        }

        void displayManager(){
            cout << "\nBank Manager: " << managerName << endl;
        }
};


class Statement{
    public:
    void showMessage(){
        cout << "\nStatement generated successfully." << endl;
    }
};

int main(){

    int customerID;
    int accountNumber;
    string customerName;
    double initialBalance;
    double depositAmount;
    double withdrawAmount;
    double transferAmount;

    cout << "Enter Customer ID: ";
    cin >> customerID;

    cin.ignore();

    cout << "Enter Customer Name: ";
    getline(cin, customerName);

    cout << "Enter Account Number: ";
    cin >> accountNumber;

    cout << "Enter Initial Balance: ";
    cin >> initialBalance;

    Customer customer(customerID, customerName);

    Account account(accountNumber, initialBalance, customer);

    BankManager manager("Rahul Patil");
    Statement statement;

    cout << endl;
    account.openAccount();

    cout << endl;
    cout << "Enter deposit amount: ";
    cin >> depositAmount;
    account.deposit(depositAmount);

    cout << endl;
    cout << "Enter withdrawal amount: ";
    cin >> withdrawAmount;
    account.withdraw(withdrawAmount);

    Customer receiverCustomer(102, "Amit Sharma");
    Account receiverAccount(1002, 5000, receiverCustomer);

    cout << endl;
    cout << "Enter transfer amount: ";
    cin >> transferAmount;
    account.transferFunds(receiverAccount, transferAmount);

    cout << endl;
    cout << "Account Status:" << endl;
    account.displayAccount();

    cout << endl;
    manager.displayManager();

    cout << endl;
    statement.showMessage();

    return 0;
}