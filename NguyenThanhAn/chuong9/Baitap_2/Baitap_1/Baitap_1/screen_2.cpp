#include "screen_2.h"
#include "ui_screen_2.h"
#include "mainwindow.h"


Screen_2::Screen_2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Screen_2)
{
    ui->setupUi(this);
}

Screen_2::~Screen_2()
{
    delete ui;
}

void Screen_2::on_btn_return_clicked()
{
    MainWindow *mainwindow = dynamic_cast<MainWindow *>(parent());
    //MainWindow *mainwindow = new MainWindow();
    mainwindow->show();
    this->hide();
}
