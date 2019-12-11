#include "dialog.h"
#include "ui_dialog.h"
#include "achats.h"
dialog::dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::dialog)
{
    ui->setupUi(this);
}

dialog::~dialog()
{
    delete ui;
}
void dialog::displaytab()
{achats a;
 ui->tableView->setModel(a.Sort());
    }
