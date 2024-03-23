#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QMessageBox"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    screen2 = new Screen_2(this);
}

MainWindow::~MainWindow()
{
    delete ui;
    delete screen2;
}

QString user,pass,check_user,check_pass;

void MainWindow::infomation()
{
    user = "an";
    pass = "123";
}

void MainWindow::on_btn_login_clicked()
{
    infomation();
    check_user = ui->text_user->text();
    check_pass = ui->text_pass->text();
    if (check_user == user & check_pass == pass)
    {
        screen2->show();
        this->hide();
    }
    else
    {
        if (check_user != user & check_pass != pass)
            QMessageBox::warning(this,"Cảnh báo","Tài khoản và mật khảu sai!",QMessageBox::Ok);
        else if (check_user != user)
            QMessageBox::warning(this,"Cảnh báo","Tài khoản sai!",QMessageBox::Ok);
        else
            QMessageBox::warning(this,"Cảnh báo","Mật khảu sai!",QMessageBox::Ok);
    }
}
