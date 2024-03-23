#include "mainwindow.h"
#include "ui_mainwindow.h"
#include"math.h"

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
    int a,b,c1,c2,c3,c4,c5;
    a = ui->lineEdit->text().toInt();   //ham tolnt dung de chuyen doi van ban sang mot gia tri so nguyen, duoc luu trong bien a
    //a=ui->textEdit->text().toInt();
    b=ui->lineEdit_2->text().toInt();
    c1=a+b;
    c2=a-b;
    c3=a*b;
    c4=a/b;
    c5=sqrt(a);
    ui->lineEdit_3->setText(QString("%1").arg(c1));
    ui->lineEdit_4->setText(QString("%1").arg(c2));
    ui->lineEdit_5->setText(QString("%1").arg(c3));
    ui->lineEdit_6->setText(QString("%1").arg(c4));
    ui->lineEdit_7->setText(QString("%1").arg(c5));
}
