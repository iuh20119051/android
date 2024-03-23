#include "dialog2.h"
#include "ui_dialog2.h"
#include "dialog1.h"

Dialog2::Dialog2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog2)
{
    ui->setupUi(this);
}

Dialog2::~Dialog2()
{
    delete ui;
}

void Dialog2::on_pushButton_clicked()
{
    Dialog1 dialog(this);
      dialog.setModal(true);
      this->hide();
        dialog.exec();
}
