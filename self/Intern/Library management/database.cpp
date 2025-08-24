#include "Database.hpp"
#include "sqlite3.h"
#include <iostream>
using namespace std;

Database::Database(const string &dbname) {
    if (sqlite3_open(dbname.c_str(), &db)) {
        cerr << "Error opening DB: " << sqlite3_errmsg(db) << endl;
        db = nullptr;
    }
}

Database::~Database() {
    if (db) sqlite3_close(db);
}

void Database::execute(const string &sql) {
    char *errMsg = nullptr;
    if (sqlite3_exec(db, sql.c_str(), nullptr, nullptr, &errMsg) != SQLITE_OK) {
        cerr << "SQL Error: " << errMsg << endl;
        sqlite3_free(errMsg);
    }
}

static int callback(void *NotUsed, int argc, char **argv, char **azColName) {
    for (int i = 0; i < argc; i++) {
        cout << azColName[i] << ": " << (argv[i] ? argv[i] : "NULL") << " | ";
    }
    cout << endl;
    return 0;
}

void Database::query(const string &sql) {
    char *errMsg = nullptr;
    if (sqlite3_exec(db, sql.c_str(), callback, nullptr, &errMsg) != SQLITE_OK) {
        cerr << "SQL Error: " << errMsg << endl;
        sqlite3_free(errMsg);
    }
}
