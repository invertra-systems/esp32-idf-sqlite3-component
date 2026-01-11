#ifndef SQLLIB_H_
#define SQLLIB_H_

#include "sqlite3.h"

int db_open(const char *filename, sqlite3 **db);
int db_exec(sqlite3 *db, const char *sql);

#endif
