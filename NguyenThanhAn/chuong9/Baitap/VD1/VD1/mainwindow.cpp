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

void MainWindow::on_welcome_button_clicked()
{
    ui->textEdit->setText("Welcome to my world");
}

void MainWindow::on_clear_button_clicked()
{
    ui->textEdit->setText("");
}

void MainWindow::on_exit_button_clicked()
{
    this->close();
}
