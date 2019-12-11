#ifndef RESULT_H
#define RESULT_H

#include <QDialog>

namespace Ui {
class result1;
}

class result1 : public QDialog
{
    Q_OBJECT

public:
    explicit result1(QWidget *parent = nullptr);
    ~result1();
    void displaytab();
private:
    Ui::result1 *ui;
};

#endif // RESULT_H
