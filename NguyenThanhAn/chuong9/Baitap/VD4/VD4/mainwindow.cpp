#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "math.h"

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
    int a,b,sum_ab,sqrt_a;
    a = ui->a_text->text().toInt();
    b = ui->b_text->text().toInt();
    sum_ab = a + b;
    sqrt_a = sqrt(a);
    ui->sum_ab_text->setText(QString("%1").arg(sum_ab));
    ui->sqrt_a_text->setText(QString("%1").arg(sqrt_a));
}
