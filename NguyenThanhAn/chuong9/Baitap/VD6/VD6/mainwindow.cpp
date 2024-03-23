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

void MainWindow::on_horizontalScrollBar_valueChanged(int value)
{
    ui->a_text->setText(QString("%1").arg(value));
}

void MainWindow::on_dial_valueChanged(int value)
{
    ui->b_text->setText(QString("%1").arg(value));
}

void MainWindow::on_result_button_clicked()
{
    int sum_ab,a,b;
    a = ui->a_text->text().toInt();
    b = ui->b_text->text().toInt();
    sum_ab = a + b;
    ui->sum_ab_text->setText(QString("%1").arg(sum_ab));
}
