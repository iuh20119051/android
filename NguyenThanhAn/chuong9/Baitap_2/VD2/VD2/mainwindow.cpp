#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QTimer"

QTimer *timer;
int count=10;


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    timer = new QTimer(this);
    timer->setInterval(1000);
    connect(timer,SIGNAL(timeout()),this,SLOT(timer_timeout()));
    timer->start();
    ui->label->setText(QString::number(count));
}

void MainWindow:: timer_timeout()
{
    count--;
    if (count<0)
        this->close();
    else
        ui->label->setText(QString::number(count));
}

MainWindow::~MainWindow()
{
    delete ui;
}
