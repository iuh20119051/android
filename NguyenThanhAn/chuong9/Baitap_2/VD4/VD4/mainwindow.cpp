#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}
QString a,b,c;

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    a="";b="";c="";
    if (ui->checkBox_nhac->isChecked())
        a="nhac ";
    if (ui->checkBox_game->isChecked())
        b="game ";
    if (ui->checkBox_phim->isChecked())
        c="phim ";

    if (a+b+c=="")
        ui->label->setText("Ban khong thich gi het");
    else
        ui->label->setText("So thich cua ban la: "+a+b+c);
}
