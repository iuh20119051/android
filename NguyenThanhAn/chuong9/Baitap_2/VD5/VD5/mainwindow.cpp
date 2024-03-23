#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dialog.h"

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

int a,b;
void MainWindow::on_pushButton_clicked()
{
    Dialog dialog;
    dialog.setModal(true);
    this->hide();
    dialog.exec();
}
void MainWindow::set_ab()
{
    a=ui->text_a->text().toInt();
    b=ui->text_b->text().toInt();
}
