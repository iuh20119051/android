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
int a,b,c=0;
int sum_b=0;
void MainWindow::on_dial_valueChanged(int value)
{
     ui->kq->display(value);
     b=value;
}

void MainWindow::on_spinBox_valueChanged(int arg1)
{
    ui->lineEditBD->setText(QString("%1").arg(arg1));
}

void MainWindow::on_pushButtonC_clicked()
{
    a = ui->lineEditBD->text().toInt();
    if(sum_b==0 || c!=a)
        sum_b = a;
        c=a;
    sum_b +=b;
    if(sum_b>2000)
        sum_b=2000;
    ui->lineEditTD->setText(QString("%1").arg(sum_b));
}
void MainWindow::on_pushButtonT_clicked()
{
    a = ui->lineEditBD->text().toInt();
    if(sum_b==0 || c!=a)
        sum_b = a;
        c=a;
    sum_b -=b;
    if(sum_b<100)
        sum_b=100;
    ui->lineEditTD->setText(QString("%1").arg(sum_b));
}
