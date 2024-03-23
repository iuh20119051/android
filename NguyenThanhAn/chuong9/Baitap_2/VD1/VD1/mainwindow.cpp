#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->exit_btn,SIGNAL(clicked()),this,SLOT(close()));
    connect(ui->hello_btn,SIGNAL(clicked()),this,SLOT(displayText()));
}

void MainWindow::displayText()
{
    ui->label->setText("Chao cac ban");
}

MainWindow::~MainWindow()
{
    delete ui;
}
