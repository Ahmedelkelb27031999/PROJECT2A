#ifndef ACHATS_H
#define ACHATS_H


#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>
class achats
{
public:
    achats();
    achats(int,QString,int,QString);
    QString getfournisseur();
     QString getdescription();
     int getcout();
     //QString getaddress();
     int getidachats();
     bool addachats();
     QSqlQueryModel *Display();
     bool deleteachats(int id);
     bool editachats(int id,int c);
     int sumachats();
     QSqlQueryModel *Search(QString);
     QSqlQueryModel *Sort();

private:
     QString fournisseur,description;
     int id_achats;
     int cout;
};
#endif // ACHATS_H
