#ifndef D5_H
#define D5_H

#include <QDialog>
#include <QSqlQueryModel>
namespace Ui {
class D5;
}

class D5 : public QDialog
{
    Q_OBJECT

public:
    explicit D5(QWidget *parent = nullptr);
    ~D5();
    void displaytab();
       QSqlQueryModel * displayelement();

private:
    Ui::D5 *ui;
};

#endif // D5_H
