#include "connect.h"
#include <QDebug>
#include <QString>
connect::connect()
{

}
bool connect::createconnect()
{
   bool test=false;
QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
db.setDatabaseName("projet2A");
db.setUserName("jellyfish");
db.setPassword("27031999");
if (db.open())
test=true;
qDebug()<<db.lastError().text();
return test;
}
