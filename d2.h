#ifndef D2_H
#define D2_H

#include <QDialog>
#include <QSqlQueryModel>
namespace Ui {
class D2;
}

class D2 : public QDialog
{
    Q_OBJECT

public:
    explicit D2(QWidget *parent = nullptr);
    ~D2();
    QSqlQueryModel * set();
    void display();
private:
    Ui::D2 *ui;
};

#endif // D2_H
