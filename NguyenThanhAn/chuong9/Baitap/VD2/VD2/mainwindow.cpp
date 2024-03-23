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

void MainWindow::on_hello_button_clicked(bool checked)
{
    ui->hello_label->setText("Hello everyones");
}

void MainWindow::on_chao_button_clicked()
{
    ui->chao_label->setText("Chào các bạn");
}

void MainWindow::on_exit_button_clicked()
{
    this->close();
}
