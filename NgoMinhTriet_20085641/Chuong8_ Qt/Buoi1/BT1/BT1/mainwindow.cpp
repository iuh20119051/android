#include "mainwindow.h"
#include "ui_mainwindow.h"

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
    int a,b,cong;
    a=ui->lineEdit->text().toInt();
    b=ui->lineEdit_2->text().toInt();
    cong=a+b;
    ui->lineEdit_3->setText(QString("%1").arg(cong));
}

void MainWindow::on_pushButton_2_clicked()
{
    int a,b,tru;
    a=ui->lineEdit->text().toInt();
    b=ui->lineEdit_2->text().toInt();
    tru=a-b;
    ui->lineEdit_3->setText(QString("%1").arg(tru));
}

void MainWindow::on_pushButton_3_clicked()
{
    int a,b,nhan;
    a=ui->lineEdit->text().toInt();
    b=ui->lineEdit_2->text().toInt();
    nhan=a*b;
    ui->lineEdit_3->setText(QString("%1").arg(nhan));
}

void MainWindow::on_pushButton_4_clicked()
{
    int a,b,chia;
    a=ui->lineEdit->text().toInt();
    b=ui->lineEdit_2->text().toInt();
    chia=a/b;
    ui->lineEdit_3->setText(QString("%1").arg(chia));
}
