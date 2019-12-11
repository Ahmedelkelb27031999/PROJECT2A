#include "result.h"
#include "ui_result.h"
#include "achats.h"
result1::result1(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::result1)
{
    ui->setupUi(this);
}

result1::~result1()
{
    delete ui;
}
void result1::displaytab()
{achats a;
 ui->tableView->setModel(a.Sort());
    }
