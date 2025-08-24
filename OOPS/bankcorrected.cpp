#include <iostream>
#include <string>

using namespace std;

class BankAccount {
    string empname;
    float balance;

public:
    BankAccount() {
        balance = 10000;
    }

    void deposit() {
        float amt;
        cout << "Enter the amount to deposit: ";
        cin >> amt;
        if (amt > 0) {
            balance += amt;
        } else {
            cout << "Invalid deposit amount." << endl;
        }
    }

    void withdraw() {
        float amt;
        cout << "Enter the amount to withdraw: ";
        cin >> amt;
        if (amt > balance) {
            cout << "Insufficient balance!" << endl;
        } else if (amt > 0) {
            balance -= amt;
        } else {
            cout << "Invalid withdrawal amount." << endl;
        }
    }

    void show() const {
        cout << "The balance is: " << balance << endl;
    }
};

int main() {
    BankAccount b;
    int choice;
    char continueChoice;

    do {
        cout << "1. Deposit" << endl;
        cout << "2. Withdraw" << endl;
        cout << "3. Balance Check" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: 
                b.deposit();
                break;
            case 2: 
                b.withdraw();
                break;
            case 3: 
                b.show();
                break;
            default:
                cout << "Invalid choice. Please enter a number between 1 and 3." << endl;
                break;
        }

        cout << "Do you want to continue (Y/N)? ";
        cin >> continueChoice;

    } while (continueChoice == 'Y' || continueChoice == 'y');

    return 0;
}