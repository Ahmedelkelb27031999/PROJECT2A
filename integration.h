#ifndef INTEGRATION_H
#define INTEGRATION_H

#include <QDialog>

namespace Ui {
class integration;
}

class integration : public QDialog
{
    Q_OBJECT

public:
    explicit integration(QWidget *parent = nullptr);
    ~integration();

private slots:
    void on_pushButton_clicked();

private:
    Ui::integration *ui;
};

#endif // INTEGRATION_H
