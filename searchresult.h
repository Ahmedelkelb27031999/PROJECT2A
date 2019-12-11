#ifndef SEARCHRESULT_H
#define SEARCHRESULT_H

#include <QDialog>

namespace Ui {
class searchresult;
}

class searchresult : public QDialog
{
    Q_OBJECT

public:
    explicit searchresult(QWidget *parent = nullptr);
    ~searchresult();
     void displaytab();

private slots:
     void on_pushButton_clicked();

private:
    Ui::searchresult *ui;
};

#endif // SEARCHRESULT_H
