#include "d3.h"
#include "ui_d3.h"
#include "mainwindow.cpp"
D3::D3(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::D3)
{
    ui->setupUi(this);
    ui->tableView->setModel(gain());
}

D3::~D3()
{
    delete ui;

}
QSqlQueryModel * D3::gain()
{
    QSqlQueryModel * model= new QSqlQueryModel();

        model->setQuery("select * from statistiques");
        model->setHeaderData(0, Qt::Horizontal, QObject::tr("income"));

            return model;

 }
void D3::displaytab()
{
 ui->tableView->setModel(gain());
}
