#include "mainwindow.h"
#include "ui_mainwindow.h"
//QString a;
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


void MainWindow::on_radioButton_clicked()
{
    QString a;
    ui->radioButton->isChecked();
            a= "led 1 sáng";
    ui->label_4->setText(a);
}

void MainWindow::on_radioButton_2_clicked()
{
    QString a;
    ui->radioButton_2->isChecked();
            a= "led 2 sáng";
             ui->label_4->setText(a);
}

void MainWindow::on_radioButton_3_clicked()
{
    QString a;
    ui->radioButton_3->isChecked();
            a= "led 3 sáng";
             ui->label_4->setText(a);
}

void MainWindow::on_radioButton_4_clicked()
{
    QString a;
    ui->radioButton_4->isChecked();
            a= "led 4 sáng";
             ui->label_4->setText(a);
}
