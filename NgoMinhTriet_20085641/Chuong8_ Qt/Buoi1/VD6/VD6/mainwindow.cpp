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

void MainWindow::on_dial_valueChanged(int value)
{
    ui->LineB->setText(QString("%1").arg(value));
}

void MainWindow::on_horizontalScrollBar_valueChanged(int value)
{
    ui->LineA->setText(QString("%1").arg(value));
}


void MainWindow::on_pushButton_clicked()
{
    int a,b,kq;
    ui->KQ->setText("");
    a=ui->LineA->text().toInt();
    b=ui->LineB->text().toInt();
    kq=a+b;
    ui->KQ->setText(QString("%1").arg(kq));
}
