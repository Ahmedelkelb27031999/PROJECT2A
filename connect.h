#ifndef CONNECT_H
#define CONNECT_H
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>

class connect
{ private:
    QSqlDatabase db;
public:
    connect();
    bool createconnect();
};

#endif // CONNECT_H
