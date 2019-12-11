#include "d2.h"
#include "ui_d2.h"
#include "QSqlQueryModel"
D2::D2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::D2)
{
    ui->setupUi(this);
      // ui->tableView->setModel(tmpachats.Display());
}

D2::~D2()
{
    delete ui;
}
QSqlQueryModel * D2::set()
{
    QSqlQueryModel * model= new QSqlQueryModel();

    model->setQuery("select * from agents");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("cin"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("name_lastname"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("salary"));


        return model;
}
void D2::display()
{D2 d;
// ui->tableView->setModel((d.set));
    ui->tableView->setModel(d.set());
}
