#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QString>
QString a,b,c;

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
    a=""; b=""; c="";
    if(ui->checkBox->isChecked())
        a=" xem phim";
    if (ui->checkBox_2->isChecked())
            b="nghe nhac";
    if (ui->checkBox_3->isChecked())
            c= " chơi game";
    ui->label->setText("so thich cua ban la:"+a+b+c);
    if(a+b+c=="")
        ui->label->setText("ban ko thich gì ca");


}
