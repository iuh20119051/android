#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QTimer>

QTimer *timer;
int dem=1;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    timer = new QTimer(this);
    timer->setInterval(1000);
    connect(  timer,SIGNAL(timeout()), this, SLOT(timer_timeout()));
    timer->start();  // bo hen gio se phat  tin hieu  timeout sau khoang thoi gian chi dinh
     //ui->label->setText(QString::number(dem));  // ham nay dung de hien thi duoc gia tri khoi tao ban dau

}
void MainWindow::timer_timeout()
{
    dem--;
    //ui->label->setText(QString::number(dem)); // hien thi gia tri hien tai len tien ich label
    if (dem<0)
        this->close();
}
MainWindow::~MainWindow()
{
    delete ui;
}
