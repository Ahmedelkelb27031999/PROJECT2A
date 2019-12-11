#include "searchresult.h"
#include "ui_searchresult.h"
#include "achats.h"
searchresult::searchresult(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::searchresult)
{
    ui->setupUi(this);
}

searchresult::~searchresult()
{
    delete ui;
}
void searchresult::displaytab()
{
 achats a;
  QString f=ui->lineEdit->text();
 ui->tableView->setModel(a.Search(f));
 }

void searchresult::on_pushButton_clicked()
{
    displaytab();
}
