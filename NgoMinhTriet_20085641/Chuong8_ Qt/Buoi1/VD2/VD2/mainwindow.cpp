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

void MainWindow::on_Chao_Button_clicked()
{
    ui->label_2->setText("Chào CC!");
}

void MainWindow::on_Hello_Button_clicked()
{
    ui->label->setText("Hello everyone!");
}

void MainWindow::on_it_Button_clicked()
{
    this->close();
}
