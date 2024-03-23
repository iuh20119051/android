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

void MainWindow::on_pushButton_clicked()
{
    QString a,b,c;
    a="";b="";c="";
    if(ui->game->isChecked())
        c=" Game";
    if(ui->nhac->isChecked())
        a=" Nhạc";
    if(ui->phim->isChecked())
        b=" Phim";

    ui->label->setText("Sở thích của bạn là:"+a+b+c);
    if(a+b+c=="")
        ui->label->setText("Có lẽ bạn có sở thích khác :(");
}
