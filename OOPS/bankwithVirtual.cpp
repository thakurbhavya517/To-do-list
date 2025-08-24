/*#include<iostream>
using namespace std;

class bank
{
    string employee;
    float balance;
    public:
        bank account(){
            balance=10000;
        }
        void deposit(){
            float amt;
            cout<<"Enter the amout to be deposited: ";
            cin>>amt;
            balance+=amt;
        }

    void withdraw(){
        float amt;
        cout<<"Enter the amount to be withdrawn: ";
        cin>>amt;
        if (amt>=balance){
            cout<<"Error withdrawing, amount inefficient!";
        }
        else{
            balance-=amt;
        }
    }
    void show(){
        cout<<"Your Balance is: "<<balance;
    }   
};
class savings:public bank{
    public:
        void interest(){
            float simple, rate=4;
            int time;
            cout<<"Enter time";
            cin>>time;

            simple = (amt*rate*time)/100;

            cout<<simple;
        }
};
class current:public bank{
    public:
        void interest_2(){
            float simple, rate=7;
            int time;
            cout<<"Enter time: ";
            cin>>time;

            simple = (amt*rate*time)/100;

            cout<<simple;
        } 
}
int main(){
    saving s;
    int ch;
    char choice
}*/


#include <iostream>
using namespace std;

// Base class
class BankAccount {
protected:
    float balance;

public:
    BankAccount() : balance(10000.0) {} // Initialize with a default balance

    void deposit() {
        float amount;
        cout << "Enter the amount to deposit: ";
        cin >> amount;
        balance += amount;
        cout << "Amount deposited successfully.\n";
    }

    void withdraw() {
        float amount;
        cout << "Enter the amount to withdraw: ";
        cin >> amount;
        if (amount > balance) {
            cout << "Error: Insufficient balance!\n";
        } else {
            balance -= amount;
            cout << "Amount withdrawn successfully.\n";
        }
    }

    void showBalance() const {
        cout << "Current balance: " << balance << endl;
    }
};

// Derived class: SavingsAccount
class SavingsAccount : public BankAccount {
public:
    void calculateInterest() {
        float rate = 12.0; // Interest rate
        int time;
        cout << "Enter the time period (in years): ";
        cin >> time;
        float interest = (balance * rate * time) / 100;
        cout << "Interest earned: " << interest << endl;
    }
};

// Derived class: CurrentAccount
class CurrentAccount : public BankAccount {
public:
    void calculateInterest() {
        float rate = 7.0; // Interest rate
        int time;
        cout << "Enter the time period (in years): ";
        cin >> time;
        float interest = (balance * rate * time) / 100;
        cout << "Interest earned: " << interest << endl;
    }
};

int main() {
    SavingsAccount savings;
    CurrentAccount current;
    int choice;
    char accountType;

    do {
        cout << "--- Bank Menu ---\n";
        cout << "1. Deposit\n";
        cout << "2. Withdraw\n";
        cout << "3. Show Balance\n";
        cout << "4. Calculate Interest\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice != 5) {
            cout << "Select account type (S for Savings, C for Current): ";
            cin >> accountType;
        }

        switch (choice) {
            case 1:
                if (accountType == 'S' || accountType == 's')
                    savings.deposit();
                else if (accountType == 'C' || accountType == 'c')
                    current.deposit();
                else
                    cout << "Invalid account type.\n";
                break;

            case 2:
                if (accountType == 'S' || accountType == 's')
                    savings.withdraw();
                else if (accountType == 'C' || accountType == 'c')
                    current.withdraw();
                else
                    cout << "Invalid account type.\n";
                break;

            case 3:
                if (accountType == 'S' || accountType == 's')
                    savings.showBalance();
                else if (accountType == 'C' || accountType == 'c')
                    current.showBalance();
                else
                    cout << "Invalid account type.\n";
                break;

            case 4:
                if (accountType == 'S' || accountType == 's')
                    savings.calculateInterest();
                else if (accountType == 'C' || accountType == 'c')
                    current.calculateInterest();
                else
                    cout << "Invalid account type.\n";
                break;

            case 5:
                cout << "Exiting program.\n";
                break;

            default:
                cout << "Invalid choice. Please try again.\n";
        }

    } while (choice != 5);

    return 0;
}
