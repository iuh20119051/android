#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <qmessagebox.h>
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
    int a,b;
    a=ui->lineEdit->text().toInt();
    b=ui->lineEdit_2->text().toInt();
    if(a==NULL && b==NULL)
        QMessageBox::question(this,"Lỗi","Bạn chưa nhập a và b ",QMessageBox::Ok);
    else if (a==NULL)
        QMessageBox::question(this,"Lỗi","Bạn chưa nhập a",QMessageBox::Ok);
    else if (b==NULL)
        QMessageBox::question(this,"Lỗi","Bạn chưa nhập b ",QMessageBox::Ok);
    else if(a>b)
        ui->label_4->setText("A lớn hơn B");
    else if(a<b)
        ui->label_4->setText("A bé hơn B");
    else if (a==b)
        ui->label_4->setText("A bằng B");
}
