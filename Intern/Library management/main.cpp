#include <iostream>
#include "Library.hpp"
#include <limits>

using namespace std;

int main() {
    Library lib("library.db");

    int choice;
    do {
        cout << "\n====> Library Management <====\n";
        cout << "1. Add Book\n2. Search Book\n3. Checkout Book\n4. Return Book\n5. Exit\n";
        cout << "Enter choice: ";
        while (!(cin >> choice)) {
            if (cin.eof()) {
                cout << "\nInput terminated. Exiting program.\n";
                return 0;
            }
            cout << "Invalid input! Please enter a number (1-5): ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }

        switch(choice) {
            case 1: lib.addBook(); break;
            case 2: lib.searchBook(); break;
            case 3: lib.checkoutBook(); break;
            case 4: lib.returnBook(); break;
            case 5: cout << "Exiting...\n"; break;
            default: cout << "Invalid choice\n"; break;
        }
    } while(choice != 5);

    return 0;
}
