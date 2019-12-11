#include "achats.h"
#include <QDebug>
achats::achats()
{
    cout=0;
    fournisseur="";
    description="";
    id_achats=0;

}
achats::achats(int id,QString f,int c,QString d)
{
   this->id_achats=id;
   this->fournisseur=f;
   this->cout=c;
   this ->description=d;

}
QString achats ::getfournisseur(){return fournisseur;}
QString achats ::getdescription(){return description;}
int achats ::getidachats(){return id_achats;}
int achats ::getcout(){return cout;}
bool achats::addachats()
{
QSqlQuery query;
QString res=QString::number(id_achats);
QString res1=QString::number(cout);
query.prepare("INSERT INTO achats(id_achats,fournisseur,cout,description)"
              "VALUES(:id_achats,:fournisseur,:cout,:description)");
query.bindValue(":id_achats",res);query.bindValue(":fournisseur",fournisseur);
query.bindValue(":cout",res1);
query.bindValue(":description",description);

return query.exec();
}
bool achats::deleteachats(int id)
{
QSqlQuery query;
QString res= QString::number(id);
query.prepare("Delete from achats where id_achats = :id ");
query.bindValue(":id", res);
return    query.exec();
}
bool achats::editachats(int id,int c)
{
    QSqlQuery query;
    QString res= QString::number(id);
    QString res1= QString::number(c);
    query.prepare("UPDATE achats "
                  "SET cout=:c "
                  "WHERE id_achats=:id ");
    query.bindValue(":id", res);
    query.bindValue(":c", res1);
    return    query.exec();
}
int achats::sumachats()
{
    QSqlQuery query;
   query.exec("SELECT cout FROM achats");
   int x=0;
    while (query.next()) {

            int cout = query.value(0).toInt();
         //   qDebug()  << cout;
            x=x+cout;
        }
    return x;

}
QSqlQueryModel * achats::Display()
{QSqlQueryModel * model= new QSqlQueryModel();

model->setQuery("select * from achats");
model->setHeaderData(0, Qt::Horizontal, QObject::tr("id_achats"));
model->setHeaderData(1, Qt::Horizontal, QObject::tr("fournisseur"));
model->setHeaderData(2, Qt::Horizontal, QObject::tr("cout"));
model->setHeaderData(3, Qt::Horizontal, QObject::tr("description"));
    return model;
}
QSqlQueryModel * achats::Search(QString f)
{QSqlQueryModel * model= new QSqlQueryModel();

model->setQuery("select * from achats where fournisseur like '"+f+"%' ");
model->setHeaderData(0, Qt::Horizontal, QObject::tr("id_achats"));
model->setHeaderData(1, Qt::Horizontal, QObject::tr("fournisseur"));
model->setHeaderData(2, Qt::Horizontal, QObject::tr("cout"));
model->setHeaderData(3, Qt::Horizontal, QObject::tr("description"));
    return model;
}
QSqlQueryModel * achats::Sort()
{QSqlQueryModel * model= new QSqlQueryModel();

model->setQuery("select * from achats order by cout");
model->setHeaderData(0, Qt::Horizontal, QObject::tr("id_achats"));
model->setHeaderData(1, Qt::Horizontal, QObject::tr("fournisseur"));
model->setHeaderData(2, Qt::Horizontal, QObject::tr("cout"));
model->setHeaderData(3, Qt::Horizontal, QObject::tr("description"));
    return model;
}
