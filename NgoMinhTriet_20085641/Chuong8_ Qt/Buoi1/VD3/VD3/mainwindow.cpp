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

void MainWindow::on_Button_clicked()
{
    QString str;
        str= ui->Name->text();
    ui->Say_Hi->setText("Xin chào "+str+", chúc bạn một ngày tốt lành.");
}
