#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->ten->setText("MT");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_checkBox_clicked()
{
    QString a,b,c,d;
    if(ui->checkBox->isChecked())
        a=" bật";
    else {
        a=" tắt";
    }
    if(ui->checkBox_2->isChecked())
        b=" bật";
    else {
        b=" tắt";
    }
    if(ui->checkBox_3->isChecked())
        c=" bật";
    else {
        c=" tắt";
    }
    if(ui->checkBox_4->isChecked())
        d=" bật";
    else {
        d=" tắt";
    }
    ui->KQ->setText("LED 1"+a+", LED 2"+b+",LED 3"+c+",LED 4"+d);
    if(a==" bật"&&b==" bật"&&c==" bật"&&d==" bật")
        ui->KQ->setText("Tất cả LED đều bật.");
    if(a==" tắt"&&b==" tắt"&&c==" tắt"&&d==" tắt")
        ui->KQ->setText("Tất cả LED đều tắt.");
}

void MainWindow::on_checkBox_2_clicked()
{
    QString a,b,c,d;
    if(ui->checkBox->isChecked())
        a=" bật";
    else {
        a=" tắt";
    }
    if(ui->checkBox_2->isChecked())
        b=" bật";
    else {
        b=" tắt";
    }
    if(ui->checkBox_3->isChecked())
        c=" bật";
    else {
        c=" tắt";
    }
    if(ui->checkBox_4->isChecked())
        d=" bật";
    else {
        d=" tắt";
    }
    ui->KQ->setText("LED 1"+a+", LED 2"+b+",LED 3"+c+",LED 4"+d);
    if(a==" bật"&&b==" bật"&&c==" bật"&&d==" bật")
        ui->KQ->setText("Tất cả LED đều bật.");
    if(a==" tắt"&&b==" tắt"&&c==" tắt"&&d==" tắt")
        ui->KQ->setText("Tất cả LED đều tắt.");
}

void MainWindow::on_checkBox_3_clicked()
{
    QString a,b,c,d;
    if(ui->checkBox->isChecked())
        a=" bật";
    else {
        a=" tắt";
    }
    if(ui->checkBox_2->isChecked())
        b=" bật";
    else {
        b=" tắt";
    }
    if(ui->checkBox_3->isChecked())
        c=" bật";
    else {
        c=" tắt";
    }
    if(ui->checkBox_4->isChecked())
        d=" bật";
    else {
        d=" tắt";
    }
    ui->KQ->setText("LED 1"+a+", LED 2"+b+",LED 3"+c+",LED 4"+d);
    if(a==" bật"&&b==" bật"&&c==" bật"&&d==" bật")
        ui->KQ->setText("Tất cả LED đều bật.");
    if(a==" tắt"&&b==" tắt"&&c==" tắt"&&d==" tắt")
        ui->KQ->setText("Tất cả LED đều tắt.");
}

void MainWindow::on_checkBox_4_clicked()
{
    QString a,b,c,d;
    if(ui->checkBox->isChecked())
        a=" bật";
    else {
        a=" tắt";
    }
    if(ui->checkBox_2->isChecked())
        b=" bật";
    else {
        b=" tắt";
    }
    if(ui->checkBox_3->isChecked())
        c=" bật";
    else {
        c=" tắt";
    }
    if(ui->checkBox_4->isChecked())
        d=" bật";
    else {
        d=" tắt";
    }
    ui->KQ->setText("LED 1"+a+", LED 2"+b+",LED 3"+c+",LED 4"+d);
    if(a==" bật"&&b==" bật"&&c==" bật"&&d==" bật")
        ui->KQ->setText("Tất cả LED đều bật.");
    if(a==" tắt"&&b==" tắt"&&c==" tắt"&&d==" tắt")
        ui->KQ->setText("Tất cả LED đều tắt.");
}
