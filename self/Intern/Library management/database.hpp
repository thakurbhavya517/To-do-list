#ifndef DATABASE_H
#define DATABASE_H

#include <string>
extern "C" {
    #include "sqlite3.h"   // ensure sqlite3 is visible
}

class Database {
    
private:
    sqlite3 *db;
public:
    Database(const std::string& dbname);
    ~Database();
    void execute(const std::string& query);
    void query(const std::string& query);
};

#endif
