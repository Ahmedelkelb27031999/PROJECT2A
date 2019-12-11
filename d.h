#ifndef D_H
#define D_H

#include <QDialog>

namespace Ui {
class D;
}

class D : public QDialog
{
    Q_OBJECT

public:
    explicit D(QWidget *parent = nullptr);
    ~D();
    void set(QString);


private:
    Ui::D *ui;
};

#endif // D_H
