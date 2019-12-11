#include "d.h"
#include "ui_d.h"

D::D(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::D)
{
    ui->setupUi(this);
     //ui->tableView->setModel(tmpachats.Display());
}

D::~D()
{
    delete ui;
}
void D::set(QString n)
{
    //return(ui->lineEdit->setText(n));
    return(ui->lineEdit->setText(n));
}
