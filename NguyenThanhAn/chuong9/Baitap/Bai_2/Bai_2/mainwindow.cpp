#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QMessageBox"
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
int a,b,kq;

void MainWindow::set_ab(){
    a = ui->a_text->text().toInt();
    b = ui->b_text->text().toInt();
}

void MainWindow::on_cong_button_clicked()
{
    set_ab();
    kq = a + b;
    ui->kq_text->setText(QString("%1").arg(kq));

}

void MainWindow::on_tru_button_clicked()
{
    set_ab();
    kq = a - b;
    ui->kq_text->setText(QString("%1").arg(kq));
}

void MainWindow::on_nhan_button_clicked()
{
    set_ab();
    kq = a * b;
    ui->kq_text->setText(QString("%1").arg(kq));
}

void MainWindow::on_chia_button_clicked()
{
    set_ab();

    if (b==0)
        QMessageBox::warning(this,"Warning","Khong chia duoc cho 0",QMessageBox::Ok);
    else
        kq = a / b;
        ui->kq_text->setText(QString("%1").arg(kq));
}
