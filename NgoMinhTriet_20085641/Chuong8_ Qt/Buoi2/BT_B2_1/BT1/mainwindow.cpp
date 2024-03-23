#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->exit,SIGNAL(clicked()),this,SLOT(close()));
    connect(ui->chao,SIGNAL(clicked()),this,SLOT(displayText()));
}
void MainWindow::displayText()
{
    ui->lineEdit->setText("Chào các bạn");
}

MainWindow::~MainWindow()
{
    delete ui;
}
