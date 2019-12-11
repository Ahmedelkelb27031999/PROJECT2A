#include "windowachats.h"
#include "ui_windowachats.h"
#include <QTableView>
#include "achats.h"
#include <QMessageBox>
#include <QLCDNumber>
#include <QDebug>
#include "d5.h"
#include <QSqlQuery>
#include "searchresult.h"
#include "result.h"
#include "dialog.h"
Windowachats::Windowachats(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Windowachats)
{
    ui->setupUi(this);
    //ui->tableView->setModel(tmpachats.Display());
}

Windowachats::~Windowachats()
{
    delete ui;
}

void Windowachats::on_pushButton_clicked()
{
   /* int id_achats= ui->line_Edit->text().toInt();
    QString fournisseur= ui->lineEdit_2->text();
     int cout= ui->lineEdit_3->text().toInt();
    QString description= ui->lineEdit_4->text();*/
    int id_achats=ui->lineEdit->text().toInt();
    QString fournisseur=ui->lineEdit_2->text();
    int cout=ui->lineEdit_3->text().toInt();
    QString  description=ui->lineEdit_4->text();

   // QString address=ui->lineEdit_5->text();
    achats a(id_achats,fournisseur,cout,description);
 //   QMessageBox:information(nullptr,QObject::tr("client Ajouté"));
    bool test=a.addachats();
    if(test)
    {//ui->tab->setModel(tmpclients.Display());//refresh
    QMessageBox::information(nullptr, QObject::tr("Ajouter un achat"),
                      QObject::tr("achat ajouté.\n"
                                  "Click Cancel to exit."), QMessageBox::Cancel);

    }
      else
          QMessageBox::critical(nullptr, QObject::tr("Ajouter un achat"),
                      QObject::tr("Erreur !.\n"
                                  "Click Cancel to exit."), QMessageBox::Cancel);

}

void Windowachats::on_pushButton_2_clicked()
{
    int id_achats=ui->lineEdit->text().toInt();
    bool test=tmpachats.deleteachats(id_achats);
    if(test)
    {
        QMessageBox::information(nullptr, QObject::tr("Supprimer un achat"),
                    QObject::tr("achat supprimé.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);

    }
    else
        QMessageBox::critical(nullptr, QObject::tr("Supprimer un achat"),
                    QObject::tr("Erreur !.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);

}
void Windowachats::on_pushButton_3_clicked()
{
    int id_achats=ui->lineEdit->text().toInt();
    int cout=ui->lineEdit_3->text().toInt();
     bool test=tmpachats.editachats(id_achats,cout);
     if(test)
     {
         QMessageBox::information(nullptr, QObject::tr("modifier un achat"),
                     QObject::tr("Database has changed congats!\n"
                                 "Click Cancel to exit."), QMessageBox::Cancel);

     }
     else
         QMessageBox::critical(nullptr, QObject::tr("Supprimer un achat"),
                     QObject::tr("Error  !.\n"
                                 "Click Cancel to exit."), QMessageBox::Cancel);

}
void Windowachats::on_pushButton_4_clicked()
{
 //ui->tableView->setModel(tmpachats.Display());
    D5 d;
    d.displaytab();
    d.exec();
    d.show();
}



void Windowachats::on_pushButton_5_clicked()
{
    searchresult sr;

    sr.exec();
    sr.show();

}

void Windowachats::on_pushButton_6_clicked()
{
 dialog  r;
 r.displaytab();
 r.exec();
 r.show();
}
