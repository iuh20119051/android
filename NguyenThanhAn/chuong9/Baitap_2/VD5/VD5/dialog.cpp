#include "dialog.h"
#include "ui_dialog.h"
#include "mainwindow.h"
Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}
int c;
void Dialog::on_pushButton_clicked()
{
    MainWindow sceen1;
    sceen1.set_ab();
    c=a+b;
    ui->lineEdit->setText(QString("%1").arg(c));
}
