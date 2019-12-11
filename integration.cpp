#include "integration.h"
#include "ui_integration.h"
#include "mainwindow.h"
integration::integration(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::integration)
{
    ui->setupUi(this);
}

integration::~integration()
{
    delete ui;
}

void integration::on_pushButton_clicked()
{
    MainWindow w;
   // w.exec();
    w.show();
}
