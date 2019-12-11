#ifndef D3_H
#define D3_H

#include <QDialog>
#include <QSqlQueryModel>
namespace Ui {
class D3;
}

class D3 : public QDialog
{
    Q_OBJECT

public:
    explicit D3(QWidget *parent = nullptr);
    ~D3();
     void displaytab();
        QSqlQueryModel * gain();
private:
    Ui::D3 *ui;
};

#endif // D3_H
