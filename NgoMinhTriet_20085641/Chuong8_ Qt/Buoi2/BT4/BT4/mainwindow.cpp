#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dialog2.h"
#include <QMessageBox>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QString a,b;
    a=ui->username->text();
    b=ui->password->text();
    if (a!="root" && b!="1234")
        QMessageBox::question(this,"Lỗi","Sai username và password",QMessageBox::Ok);
    else if(a!="root")
        QMessageBox::question(this,"Lỗi","Sai username",QMessageBox::Ok);
    else if(b!="1234")
        QMessageBox::question(this,"Lỗi","Sai password",QMessageBox::Ok);
    else
    {
        Dialog2 Dialog;
        Dialog.setModal(true);
        this->hide();
        Dialog.exec();
    }
}
