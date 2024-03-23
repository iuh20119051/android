#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QTimer"
QTimer * timer;
int dem = 4;
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
    ui->lineEdit->setText("Bật");
    ui->lineEdit_2->setText("Bật");
    ui->lineEdit_3->setText("Bật");
    ui->lineEdit_4->setText("Bật");
    ui->label_5->setText("Trạng thái: Bật");
}

void MainWindow::on_pushButton_2_clicked()
{
    ui->lineEdit->setText("Tắt");
    ui->lineEdit_2->setText("Tắt");
    ui->lineEdit_3->setText("Tắt");
    ui->lineEdit_4->setText("Tắt");
    ui->label_5->setText("Trạng thái: Tắt");
}

void MainWindow::on_pushButton_3_clicked()
{
    timer = new QTimer(this);
    timer->setInterval(1000);
    connect(timer,SIGNAL(timeout()),this,SLOT(timmer_timeout()));
    timer->start();
}

void MainWindow::timmer_timeout()
{
    ui->label_5->setText("Trạng thái: sáng/tắt dần từ dưới lên");
    dem--;
    QString a,b,c,d;
    a=ui->lineEdit->text();
    b=ui->lineEdit_2->text();
    c=ui->lineEdit_3->text();
    d=ui->lineEdit_4->text();
    if(dem == 3)
    {
        if(d=="Tắt")
            ui->lineEdit_4->setText("Bật");
        else {
            ui->lineEdit_4->setText("Tắt");
        }
    }
    if(dem == 2)
    {
        if(c=="Tắt")
            ui->lineEdit_3->setText("Bật");
        else {
            ui->lineEdit_3->setText("Tắt");
        }
    }
    if(dem == 1)
    {
        if(b=="Tắt")
            ui->lineEdit_2->setText("Bật");
        else {
            ui->lineEdit_2->setText("Tắt");
        }
    }
    if(dem == 0)
    {
        if(a=="Tắt")
            ui->lineEdit->setText("Bật");
        else {
            ui->lineEdit->setText("Tắt");
        }
    }
    if(dem<0)
    {
        timer->stop();
        dem=4;
    }
}
