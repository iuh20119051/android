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


int a,b,c;
void MainWindow::on_spinBox_valueChanged(int arg1)
{
    a= arg1;
    ui->lcdNumber_a->display(a);
}

//void MainWindow::on_pushButton_chon_clicked()
//{
  //  b= ui->comboBox->currentText().toInt();
    //ui->lcdNumber_b->display(b);
//}



void MainWindow::on_pushButton_thuchien_clicked()
{
    c=a+b;
    ui->lcdNumber_c->display(c);
}

void MainWindow::on_comboBox_activated(int index)
{
    b=ui->comboBox->currentText().toInt();
    ui->lcdNumber_b->display(b);
}
