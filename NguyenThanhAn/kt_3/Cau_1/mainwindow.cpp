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


void MainWindow::on_led0_clicked()
{
    if (ui->led0->isChecked())
        ui->label_result->setText("Led 0 sang");
}

void MainWindow::on_led1_clicked()
{
    if (ui->led1->isChecked())
        ui->label_result->setText("Led 1 sang");
}

void MainWindow::on_led2_clicked()
{
    if (ui->led2->isChecked())
        ui->label_result->setText("Led 2 sang");
}

void MainWindow::on_led3_clicked()
{
    if (ui->led3->isChecked())
        ui->label_result->setText("Led 3 sang");
}
