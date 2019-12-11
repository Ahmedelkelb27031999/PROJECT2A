#include "windowsponsor.h"
#include "ui_windowsponsor.h"
#include "sponsor.h"
#include <QMessageBox>
windowsponsor::windowsponsor(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::windowsponsor)
{
    ui->setupUi(this);
}

windowsponsor::~windowsponsor()
{
    delete ui;
}

void windowsponsor::on_pushButton_clicked()
{
    int id=ui->lineEdit->text().toInt();
    QString name=ui->lineEdit_2->text();
    QString location=ui->lineEdit_3->text();
    QString  products=ui->lineEdit_4->text();
    sponsor s(id,name,location,products);
    bool test=s.addsponsors();
    if(test)
    {
    QMessageBox::information(nullptr, QObject::tr("Add a sponsor"),
                      QObject::tr("sponsor added.\n"
                                  "Click Cancel to exit."), QMessageBox::Cancel);
    }
      else
          QMessageBox::critical(nullptr, QObject::tr("Add a sponsor"),
                      QObject::tr("Error !.\n"
                                  "Click Cancel to exit."), QMessageBox::Cancel);
}

void windowsponsor::on_pushButton_2_clicked()
{
    int id=ui->lineEdit->text().toInt();
    bool test=tmpsponsors.deletesponsors(id);
    if(test)
    {
        QMessageBox::information(nullptr, QObject::tr("Delete a Sponsor"),
                    QObject::tr("Sponsor deleted.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);

    }
    else
        QMessageBox::critical(nullptr, QObject::tr(""),
                    QObject::tr("Erreur !.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);

}

void windowsponsor::on_pushButton_3_clicked()
{
    int id=ui->lineEdit->text().toInt();
    QString location=ui->lineEdit_3->text();
     bool test=tmpsponsors.editsponsors(id,location);
     if(test)
     {
         QMessageBox::information(nullptr, QObject::tr("edit a sponsor"),
                     QObject::tr("Database has changed congats!\n"
                                 "Click Cancel to exit."), QMessageBox::Cancel);

     }
     else
         QMessageBox::critical(nullptr, QObject::tr("edit a sponsor"),
                     QObject::tr("Error  !.\n"
                                 "Click Cancel to exit."), QMessageBox::Cancel);

}
