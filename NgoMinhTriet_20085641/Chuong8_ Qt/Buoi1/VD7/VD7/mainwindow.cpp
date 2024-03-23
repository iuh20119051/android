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
int a,b,kq;
void MainWindow::on_spinBox_valueChanged(int arg1)
{
    a=arg1;
    ui->lcdNumber->display(a);
}

void MainWindow::on_pushButton_2_clicked()
{
    b=ui->comboBox->currentText().toInt();
    ui->lcdNumber_2->display(b);
}

void MainWindow::on_pushButton_clicked()
{
    kq=a+b;
    ui->lcdNumber_3->display(kq);
}
