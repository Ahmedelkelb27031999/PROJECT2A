#ifndef D4_H
#define D4_H

#include <QDialog>

namespace Ui {
class D4;
}

class D4 : public QDialog
{
    Q_OBJECT

public:
    explicit D4(QWidget *parent = nullptr);
    ~D4();
    int peak();
    void set(QString);

private:
    Ui::D4 *ui;
};

#endif // D4_H
