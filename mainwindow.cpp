#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QApplication>
#include "windowachats.h"
#include <QDebug>
#include "achats.h"
#include "d.h"
#include "d1.h"
#include "d2.h"
#include "d3.h"
#include "d4.h"
#include "QVector"
#include "QMessageBox"
#include "windowsponsor.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap pix("C:/shutterstock_117385867");
    ui->label_3->setPixmap(pix);
     // ui->label
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_2_clicked()
{
    Windowachats wa;
    wa.show();
    wa.exec();
}
int MainWindow::verification(int i)
{
    QSqlQuery query;
    query.exec("SELECT income FROM statistiques");
    int x=0;
    //query.
     while (query.next())
         {
             if(query.next()==i)
                {
                 x=1;
                 break;
                }
         }
     return x;
}
void MainWindow::on_pushButton_clicked()
{achats a;
    D d;
   QSqlQuery query,query1;
   query.exec("SELECT price FROM voyages");
   int x=0;
    while (query.next()) {

            int price = query.value(0).toInt();
            x=x+price;
        }
     int Income=x-a.sumachats();
     QString res=QString::number(Income);

     if((Income>0)&&(verification(Income)==0)){
     QString res1=QString::number(Income);
     qDebug()<< verification(Income);
     query1.prepare("INSERT INTO statistiques(income)"
                    "VALUES(:income)");
    query1.bindValue(":income",res1);

     query1.exec();
      }

    d.set(res);
    d.exec();
    //z++;
}
int MainWindow::counttrips()
{
    QSqlQuery query;
   query.exec("SELECT price FROM voyages");
   int x=0;
    while (query.next())
        {
            x++;
        }
    return x;
}
int MainWindow::income()
{
    achats a;
        QSqlQuery query;
       query.exec("SELECT price FROM voyages");
       int x=0;
        while (query.next())
            {

                int price = query.value(0).toInt();
                x=x+price;
            }
         int Income=x-a.sumachats();
 return Income;
}

void MainWindow::on_pushButton_3_clicked()
{ QSqlQuery query;
    achats a;
    D2 d;
    query.exec("SELECT price FROM voyages");
    int x=0;
     while (query.next()) {

             int price = query.value(0).toInt();
             x=x+price;
         }
    int Income=x-a.sumachats();
    QSqlQuery q;
    QSqlQuery q1;
    q.exec("SELECT cin FROM agents");
    QSqlQuery query1;

   int w=0;
   while (q.next())
        {
         w++;
        }
   int salary=(Income-Income/2)/w;
   //qDebug()<<salary;
   QString res=QString::number(salary);
   q1.exec("SELECT salary FROM agents");
   while (q1.next())
       {
         query1.prepare("UPDATE agents "
                         "SET salary=:salary");
        query1.bindValue(":salary",res);
         query1.exec();
       }
   d.display();

   d.exec();
}
void MainWindow::on_pushButton_5_clicked()
{
   D1 d;
   int x=counttrips();
   QString res=QString::number(x);
   d.set(res);
   d.exec();

}
void MainWindow::on_pushButton_6_clicked()
{ D3 d;
   d.show();
   d.exec();
}

void MainWindow::on_pushButton_4_clicked()
{
   D4 d;
   QString n=QString::number(d.peak());
   d.set(n);
   d.show();
   d.exec();
}



void MainWindow::on_pushButton_7_clicked()
{
windowsponsor ws;
ws.exec();
ws.show();
}
