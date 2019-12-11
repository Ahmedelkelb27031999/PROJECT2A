#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "windowachats.h"
#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    int counttrips();
      QSqlQueryModel * gain();
    int income();
    int verification(int i);
private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_4_clicked();



    void on_pushButton_7_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
