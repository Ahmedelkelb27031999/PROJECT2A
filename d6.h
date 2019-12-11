#ifndef D6_H
#define D6_H

#include <QDialog>

namespace Ui {
class D6;
}

class D6 : public QDialog
{
    Q_OBJECT

public:
    explicit D6(QWidget *parent = nullptr);
    ~D6();

private:
    Ui::D6 *ui;
};

#endif // D6_H
