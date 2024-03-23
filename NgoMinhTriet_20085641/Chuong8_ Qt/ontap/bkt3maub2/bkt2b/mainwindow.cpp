#include "mainwindow.h"
#include "ui_mainwindow.h"
QString a,b,c,d;
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->Ten->setText("Bùi Hửu Thạnh");
    ui->mssv->setText("20084591");
    if(ui->checkBox_led1->isChecked())
        a="Sáng";
    else {
        a="Tắt";
    }
    if(ui->checkBox_led2->isChecked())
        b="Sáng";
    else {
        b="Tắt";
    }
    if(ui->checkBox_led3->isChecked())
        c="Sáng";
    else {
        c="Tắt";
    }
    if(ui->checkBox_led4->isChecked())
        d="Sáng";
    else {
        d="Tắt";
    }
    ui->kq->setText("Tất cả LED đều tắt.");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_checkBox_led1_clicked()
{
    a = "Tắt";
    if(ui->checkBox_led1->isChecked())
        a="Sáng";
        ui->kq->setText("LED 1"+a+", LED 2"+b+",LED 3"+c+",LED 4"+d);
    if(a=="bật"&&b=="bật"&&c=="bật"&&d=="bật")
        ui->kq->setText("Tất cả LED đều bật.");
    if (a=="Tắt" && b =="Tắt"&&c=="Tắt"&&d=="Tắt")
        ui->kq->setText("Tất cả LED đều tắt.");
}

void MainWindow::on_checkBox_led2_clicked()
{
    b = "Tắt";
    if(ui->checkBox_led2->isChecked())
        b="Sáng";
        ui->kq->setText("LED 1"+a+", LED 2"+b+",LED 3"+c+",LED 4"+d);
    if(a=="Sáng"&&b=="Sáng"&&c=="Sáng"&&d=="Sáng")
        ui->kq->setText("Tất cả LED đều Sáng.");
    if (a==" Tắt" && b ==" Tắt"&&c==" Tắt"&&d=="Tắt")
        ui->kq->setText("Tất cả LED đều tắt.");
}

void MainWindow::on_checkBox_led3_clicked()
{
    c = "Tắt";
    if(ui->checkBox_led3->isChecked())
        c="Sáng";
        ui->kq->setText("LED 1"+a+", LED 2"+b+",LED 3"+c+",LED 4"+d);
    if(a=="Sáng"&&b=="Sáng"&&c=="Sáng"&&d=="Sáng")
        ui->kq->setText("Tất cả LED đều Sáng.");
    if (a==" Tắt" && b ==" Tắt"&&c==" Tắt"&&d==" Tắt")
        ui->kq->setText("Tất cả LED đều tắt.");
}

void MainWindow::on_checkBox_led4_clicked()
{
    d = "Tắt";
    if(ui->checkBox_led4->isChecked())
        d="Sáng";
        ui->kq->setText("LED 1"+a+", LED 2"+b+",LED 3"+c+",LED 4"+d);
    if(a=="Sáng"&&b=="Sáng"&&c=="Sáng"&&d=="Sáng")
        ui->kq->setText("Tất cả LED đều Sáng.");
    if (a==" Tắt" && b ==" Tắt"&&c==" Tắt"&&d==" Tắt")
        ui->kq->setText("Tất cả LED đều tắt.");
}
