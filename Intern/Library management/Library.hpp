#ifndef LIBRARY_H
#define LIBRARY_H

#include <string>
#include "Database.hpp"

class Library {
private:
    Database db;
public:
    Library(const std::string &dbname) : db(dbname) {}
    void addBook();
    void searchBook();
    void checkoutBook();
    void returnBook();
};

#endif
