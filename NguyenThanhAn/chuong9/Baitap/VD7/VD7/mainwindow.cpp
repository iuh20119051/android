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

int a,b,sum_ab;
void MainWindow::on_spinBox_valueChanged(int arg1)
{
    a=arg1;
    ui->a_lcdNumber->display(a);
}

void MainWindow::on_chose_button_clicked()
{
    b = ui->comboBox->currentText().toInt();
    ui->b_lcdNumber->display(b);
}

void MainWindow::on_result_button_clicked()
{
    sum_ab = a + b;
    ui->sum_ab_lcdNumber->display(sum_ab);
}
