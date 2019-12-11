#include "d5.h"
#include "ui_d5.h"
#include "achats.h"
D5::D5(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::D5)
{
    ui->setupUi(this);
    achats a;
    ui->TableView->setModel(a.Display());
}

D5::~D5()
{
    delete ui;
}
void D5::displaytab()
{achats a;
 ui->TableView->setModel(a.Display());
    }
