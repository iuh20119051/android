#include "mainwindow.h"
#include "ui_mainwindow.h"
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->horizontalSlider,SIGNAL(valueChanged(int)),this,SLOT(PWM()));
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::PWM()
{
    int a;
    a=ui->ADC->text().toInt();
    if(a<400)
        ui->PWM->setText("400");
    else if(a<800)
        ui->PWM->setText("800");
    else {
        ui->PWM->setText("1200");
    }
}

void MainWindow::on_horizontalSlider_valueChanged(int value)
{
    ui->ADC->setText(QString("%1").arg(value));
}

void MainWindow::on_pushButton_2_clicked()
{
    ui->ten->setText("Ngô Minh Triết");
}

void MainWindow::on_pushButton_clicked()
{
    ui->lop->setText("DHDTMT16B");
}
