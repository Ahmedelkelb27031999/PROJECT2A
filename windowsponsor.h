#ifndef WINDOWSPONSOR_H
#define WINDOWSPONSOR_H

#include <QDialog>
#include "sponsor.h"
namespace Ui {
class windowsponsor;
}

class windowsponsor : public QDialog
{
    Q_OBJECT

public:
    explicit windowsponsor(QWidget *parent = nullptr);
    ~windowsponsor();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::windowsponsor *ui;
    sponsor tmpsponsors;
};

#endif // WINDOWSPONSOR_H
