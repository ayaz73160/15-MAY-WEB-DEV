//2. Define a Class to Represent a Bank Account

#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    string depositorName;
    int accountNumber;
    string accountType;
    double balance;

public:
    // Constructor to initialize the account
    BankAccount(string name, int accNum, string type, double initialBalance) {
        depositorName = name;
        accountNumber = accNum;
        accountType = type;
        balance = initialBalance;
    }

    // Member function to deposit amount
    void deposit(double amount) {
        balance += amount;
        cout << "Amount deposited successfully! New Balance: " << balance << endl;
    }

    // Member function to withdraw amount
    void withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
            cout << "Amount withdrawn successfully! Remaining Balance: " << balance << endl;
        } else {
            cout << "Insufficient balance!" << endl;
        }
    }

    // Member function to display account details
    void display() {
        cout << "Account Holder: " << depositorName << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Type: " << accountType << endl;
        cout << "Current Balance: " << balance << endl;
    }
};

int main() {
    // Creating an object of BankAccount
    BankAccount account("John Doe", 123456, "Savings", 1000.0);

    // Displaying initial account details
    account.display();

    // Performing transactions
    account.deposit(500);
    account.withdraw(200);
    account.withdraw(1500); // Attempt to withdraw more than balance

    return 0;
}

