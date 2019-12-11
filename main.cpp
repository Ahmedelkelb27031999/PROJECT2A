#include "mainwindow.h"
#include <QApplication>
#include <QMessageBox>
#include <QtSql>
#include "connect.h"
#include <QDebug>
#include <QSqlDatabase>
#include <QSqlQuery>
#include "integration.h"

int main(int argc, char *argv[])
{ bool test;
    QApplication a(argc, argv);
    MainWindow w;
    integration i;
  //  i.show();
   // i.exec();
    connect c;
    test=c.createconnect();

    if(test)
    {

        if(test)
        {//ui->tab->setModel(tmpclients.Display());//refresh
        QMessageBox::information(nullptr, QObject::tr("CONNEXION"),
                          QObject::tr("Connected.\n"
                                      "Click Cancel to exit."), QMessageBox::Cancel);
        }

    }
    w.show();
    return a.exec();
}
