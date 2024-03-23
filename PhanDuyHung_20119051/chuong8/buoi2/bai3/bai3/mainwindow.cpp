#include "mainwindow.h"
#include "ui_mainwindow.h"
QString a;
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
    //QString a;
    a=" " ;// so sanh xem bạn co chon so thich nao ko
    if(ui->radioButton_phim->isChecked())
        a="xem phim";
    else if(ui->radioButton_nhac->isChecked())
        a= "nghe nhạc";
    else if(ui->radioButton_game->isChecked())
        a= "chơi game";
    ui->label_ht->setText("sơ thich cua ban la:"+ a );
    if(a==" ")
        ui->label_ht->setText("ban ko thich gi het");
}
