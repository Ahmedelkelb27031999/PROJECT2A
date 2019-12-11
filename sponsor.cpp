#include "sponsor.h"
#include <QSqlQuery>
sponsor::sponsor()
{
    id=0;
    name="";
    location="";
    products="";

}

sponsor::sponsor(int id,QString n,QString l ,QString p)
{
   this->id=id;
   this->name=n;
   this->location=l;
   this ->products=p;

}
QString sponsor ::getname(){return name;}
QString sponsor ::getlocation(){return location;}
int sponsor ::getid(){return id;}
QString sponsor ::getproducts(){return products;}
bool sponsor::addsponsors()
{
QSqlQuery query;
QString res=QString::number(id);

query.prepare("INSERT INTO sponsor(id,name,location,products)"
              "VALUES(:id,:name,:location,:products)");
query.bindValue(":id",res);query.bindValue(":name",name);
query.bindValue(":location",location);
query.bindValue(":products",products);

return query.exec();
}
bool sponsor::deletesponsors(int id)
{
QSqlQuery query;
QString res= QString::number(id);
query.prepare("Delete from sponsor where id= :id ");
query.bindValue(":id", res);
return    query.exec();
}
bool sponsor::editsponsors(int id, QString s)
{
    QSqlQuery query;
    QString res= QString::number(id);

    query.prepare("UPDATE sponsor "
                  "SET location=:s "
                  "WHERE id=:id ");
    query.bindValue(":id", res);
    query.bindValue(":s", s);
    return    query.exec();
}
QSqlQueryModel * sponsor::Display()
{QSqlQueryModel * model= new QSqlQueryModel();

model->setQuery("select * from sponsor");
model->setHeaderData(0, Qt::Horizontal, QObject::tr("id"));
model->setHeaderData(1, Qt::Horizontal, QObject::tr("name"));
model->setHeaderData(2, Qt::Horizontal, QObject::tr("location"));
model->setHeaderData(3, Qt::Horizontal, QObject::tr("products"));
    return model;
}
