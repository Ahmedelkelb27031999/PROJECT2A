#ifndef FOURNISSEURS_H
#define FOURNISSEURS_H
#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>

class sponcors
{
public:
     sponcors(QString,QString,int,QString);
     QString getname();
     QString getlocation();
     QString  getproducts();
     int getid();
     bool addsponcors();
     QSqlQueryModel *Display();
     bool deletesponcors(int id);
     bool editsponcors(int id,QString p);
    sponcors();
private:
     QString products,name,location;
     int id;

};

#endif // FOURNISSEURS_H
