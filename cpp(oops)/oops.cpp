#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    string ownerName;
    int accountNumber;
    double balance;

public:
    BankAccount(string name, int accNum, double initialBalance) {
        ownerName = name;
        accountNumber = accNum;
        balance = initialBalance;
    }

    void deposit(double amount) {
        balance += amount;
    }

    void withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
        } else {
            cout << "Insufficient funds!" << endl;
        }
    }

    void display() {
        cout << "Account Holder: " << ownerName << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: $" << balance << endl;
    }
};

int main() {
    BankAccount account1("John Doe", 123456, 1000.0);

    account1.display();

    account1.deposit(500.0);
    account1.display();

    account1.withdraw(2000.0);
    account1.display();

    return 0;
}
