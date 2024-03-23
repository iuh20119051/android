#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QMessageBox>
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
    if (QMessageBox::question( this," question" , "câu hỏi",QMessageBox::Ok | QMessageBox :: Cancel) == QMessageBox::Ok)
            this->setWindowTitle("OK");
    else
            this->setWindowTitle("Cancel");
}
