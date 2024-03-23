#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "math.h"
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

void MainWindow::on_Exe_clicked()
{
    int a,b,c,ca;
    a=ui->A->text().toInt();
    b=ui->B->text().toInt();
    c=a+b;
    ca=sqrt(a);
    ui->AB->setText(QString("%1").arg(c));
    ui->CA->setText(QString("%1").arg(ca));
}
