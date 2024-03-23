#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QMessageBox"
#include "QString"
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

void MainWindow::on_submit_button_clicked()
{
    QString ten,mssv,namsinh;
    int tuoi;
    ten = ui->ten_text->text();
    mssv = ui->mssv_text->text();
    namsinh = ui->namsinh_text->text();
    tuoi = 2023 - namsinh.toInt();

    if (ten=="" && mssv=="" && namsinh=="")
        QMessageBox::information(this,"Information","Bạn chưa nhập ten, mssv, nam sinh",QMessageBox::Ok);
    else if (ten=="" && mssv=="")
        QMessageBox::information(this,"Information","Bạn chưa nhập ten, mssv",QMessageBox::Ok);
    else if (ten=="" && namsinh=="")
        QMessageBox::information(this,"Information","Bạn chưa nhập ten, nam sinh",QMessageBox::Ok);
    else if (mssv=="" && namsinh=="")
        QMessageBox::information(this,"Information","Bạn chưa nhập mssv, nam sinh",QMessageBox::Ok);
    else if (ten=="")
        QMessageBox::information(this,"Information","Bạn chưa nhập ten",QMessageBox::Ok);
    else if(mssv=="")
        QMessageBox::information(this,"Information","Bạn chưa nhập mssv",QMessageBox::Ok);
    else if (namsinh=="")
        QMessageBox::information(this,"Information","Bạn chưa nhập nam sinh",QMessageBox::Ok);
    else
        ui->result_label->setText("Chào bạn "+ten+", MSSV: "+mssv+", "+QString("%1").arg(tuoi)+" tuổi. Chúc bạn học tốt");
}
