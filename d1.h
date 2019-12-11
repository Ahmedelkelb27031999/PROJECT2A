#ifndef D1_H
#define D1_H

#include <QDialog>

namespace Ui {
class D1;
}

class D1 : public QDialog
{
    Q_OBJECT

public:
    explicit D1(QWidget *parent = nullptr);
    ~D1();
    void set(QString);
private:
    Ui::D1 *ui;
};

#endif // D1_H
