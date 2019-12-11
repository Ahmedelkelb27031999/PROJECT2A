#ifndef WINDOWACHATS_H
#define WINDOWACHATS_H
#include "achats.h"
#include <QDialog>

namespace Ui {
class Windowachats;
}

class Windowachats : public QDialog
{
    Q_OBJECT

public:
    explicit Windowachats(QWidget *parent = nullptr);
    ~Windowachats();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();


    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

private:
    Ui::Windowachats *ui;
      //Ui::Windowachats *tab;
    achats tmpachats;
    //achats tab;
};

#endif // WINDOWACHATS_H
