#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QString>

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
    int a,b,c;
    ui->label_c->setText("");
    a=ui->lineEdit_a->text().toInt();
    b=ui->lineEdit_b->text().toInt();
    c=a+b;
    ui->label_c->setText(QString("%1").arg(c));

}
//void MainWindow::on_dial_actionTriggered(int value)
//{
  //      ui->lineEdit_b->setText(QString("%1").arg(value));
//}

//void MainWindow::on_horizontalScrollBar_actionTriggered(int value)
//{
  //   ui->lineEdit_a->setText(QString("%1").arg(value));
//}

void MainWindow::on_horizontalScrollBar_valueChanged(int value)
{
    ui->lineEdit_a->setText(QString("%1").arg(value));
}

void MainWindow::on_dial_valueChanged(int value)
{
    ui->lineEdit_b->setText(QString("%1").arg(value));
}
