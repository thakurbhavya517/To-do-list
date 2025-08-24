#include "Library.hpp"
#include <iostream>
using namespace std;

void Library::addBook() {
    string title, author, isbn;
    cout << "Enter title: "; cin.ignore(); getline(cin, title);
    cout << "Enter author: "; getline(cin, author);
    cout << "Enter ISBN: "; getline(cin, isbn);

    string query = "INSERT INTO Books (Title, Author, ISBN) VALUES ('" +
                   title + "', '" + author + "', '" + isbn + "');";
    db.execute(query);
    cout << "Book added successfully.\n";
}

void Library::searchBook() {
    string keyword;
    cout << "Enter title/author/ISBN to search: ";
    cin.ignore(); getline(cin, keyword);

    string query = "SELECT * FROM Books WHERE Title LIKE '%" + keyword +
                   "%' OR Author LIKE '%" + keyword +
                   "%' OR ISBN LIKE '%" + keyword + "%';";
    db.query(query);
}

void Library::checkoutBook() {
    int bookID, borrowerID;
    cout << "Enter Book ID: "; cin >> bookID;
    cout << "Enter Borrower ID: "; cin >> borrowerID;

    string query = "UPDATE Books SET Available=0 WHERE ID=" + to_string(bookID) + ";";
    db.execute(query);

    query = "INSERT INTO Transactions (BorrowerID, BookID, CheckoutDate) "
            "VALUES (" + to_string(borrowerID) + ", " + to_string(bookID) + ", date('now'));";
    db.execute(query);

    cout << "Book checked out successfully.\n";
}

void Library::returnBook() {
    int bookID;
    cout << "Enter Book ID: "; cin >> bookID;

    string query = "UPDATE Books SET Available=1 WHERE ID=" + to_string(bookID) + ";";
    db.execute(query);

    query = "UPDATE Transactions SET ReturnDate=date('now') WHERE BookID=" + to_string(bookID) +
            " AND ReturnDate IS NULL;";
    db.execute(query);

    cout << "Book returned successfully.\n";
}
