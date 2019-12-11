#include "fournisseurs.h"

sponcors::sponcors()
{
    name="";
    location="";
    products="";
    id=0;
}
fournisseurs::fournisseurs(QString l,QString n,int id,QString p)
{
   this->id=id;
   this->location=l;
   this->name=n;
   this ->products=p;
}
QString fournisseurs ::getname(){return name;}
QString fournisseurs ::getlocation(){return location;}
int fournisseurs ::getid(){return id;}
QString fournisseurs ::getproducts(){return products;}
bool fournisseurs::addfournisseures()
{
QSqlQuery query;
QString res=QString::number(id);

query.prepare("INSERT INTO achats(id,name,location,products)"
              "VALUES(:id,:name,:location,:products)");
query.bindValue(":id",res);
query.bindValue(":name",name);
query.bindValue(":location",location);
query.bindValue(":products",products);
return query.exec();
}
bool fournisseurs::deletefournisseurs(int id)
{
QSqlQuery query;
QString res= QString::number(id);
query.prepare("Delete from fournisseurs where id = :id ");
query.bindValue(":id", res);
return    query.exec();
}
bool fournisseurs::editfournisseures(int id, QString p)
{
    QSqlQuery query;
    QString res= QString::number(id);
    QString res1= p;
    query.prepare("UPDATE fournisseurs"
                  "SET products=:p"
                  "WHERE id=:id");
    query.bindValue(":id", res);
    query.bindValue(":p", res1);
    return    query.exec();
}
QSqlQueryModel * fournisseurs::Display()
{
QSqlQueryModel * model= new QSqlQueryModel();
model->setQuery("select * from fournisseurs");
model->setHeaderData(0, Qt::Horizontal, QObject::tr("id"));
model->setHeaderData(1, Qt::Horizontal, QObject::tr("name"));
model->setHeaderData(2, Qt::Horizontal, QObject::tr("location"));
model->setHeaderData(3, Qt::Horizontal, QObject::tr("products"));
 return model;
}
