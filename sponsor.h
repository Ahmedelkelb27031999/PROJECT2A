#ifndef SPONSOR_H
#define SPONSOR_H
#include <QString>
#include <QSqlQueryModel>

class sponsor
{
public:
    sponsor();

    sponsor(int,QString,QString,QString);
    QString getname();
     QString getlocation();
     QString getproducts();
     //QString getaddress();
     int getid();
     bool addsponsors();
     QSqlQueryModel *Display();
     bool deletesponsors(int id);
     bool editsponsors(int id,QString s);



private:
     QString name,location,products;
     int id;

};

#endif // SPONSOR_H
