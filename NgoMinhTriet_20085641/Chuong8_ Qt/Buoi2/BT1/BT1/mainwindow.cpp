#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QTimer>

QTimer * timer;
int dem=10;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    timer = new QTimer(this);
    timer->setInterval(1000);
    connect(timer,SIGNAL(timeout()),this,SLOT(timer_timeout()));
    timer->start();
    //ui->countdown->setText(QString::number(dem));
    ui->lcdNumber->display(dem);
}
void MainWindow::timer_timeout()
{
    dem--;
    //ui->countdown->setText(QString::number(dem));
    ui->lcdNumber->display(dem);
    if (dem<0)
        this->close();
}

MainWindow::~MainWindow()
{
    delete ui;
}
