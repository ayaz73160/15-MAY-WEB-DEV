//4. Class BankAccount with Deposit and Withdraw

#include <iostream>
using namespace std;

class BankAccount {
private:
    int accountNumber;
    double balance;

public:
    BankAccount(int accNum, double bal) : accountNumber(accNum), balance(bal) {}

    void deposit(double amount) {
        balance += amount;
        cout << "Deposited: " << amount << ", New Balance: " << balance << endl;
    }

    void withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
            cout << "Withdrawn: " << amount << ", Remaining Balance: " << balance << endl;
        } else {
            cout << "Insufficient balance!" << endl;
        }
    }
};

int main() {
    BankAccount account(123456, 500.0);
    account.deposit(300);
    account.withdraw(200);
    account.withdraw(700);

    return 0;
}

