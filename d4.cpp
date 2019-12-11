#include "d4.h"
#include "ui_d4.h"
#include "QSqlQuery"
D4::D4(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::D4)
{
    ui->setupUi(this);
}

D4::~D4()
{
    delete ui;
}
int D4:: peak()
{
    QSqlQuery query;
   query.exec("SELECT income FROM statistiques");
   int peak= query.exec("SELECT income FROM statistiques");
    while (query.next())
        {

            int value = query.value(0).toInt();
            if(value>peak)
                peak=value;

        }
    return peak;
}
void D4::set(QString n)
{
    return(ui->lineEdit->setText(n));
}
