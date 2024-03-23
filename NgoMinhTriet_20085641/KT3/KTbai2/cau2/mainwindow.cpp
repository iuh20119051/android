#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QTimer"
QTimer * timer;
int dem,value;
QString a,b;
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->led1->setText("LED 1 tắt");
    ui->led2->setText("LED 2 tắt");
    connect(ui->checkBox,SIGNAL(clicked()),this,SLOT(led()));
    connect(ui->checkBox_2,SIGNAL(clicked()),this,SLOT(led()));
}
void MainWindow::led()
{
    if(ui->checkBox->isChecked())
        ui->led1->setText("LED 1 sáng");
    else
        ui->led1->setText("LED 1 tắt");
    if(ui->checkBox_2->isChecked())
        ui->led2->setText("LED 2 sáng");
    else
        ui->led2->setText("LED 2 tắt");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_start_clicked()
{
    //if (dem!=ui->time->text().toInt())
    //    dem=ui->time->text().toInt();

    timer = new QTimer(this);
    timer->setInterval(1000);
    connect(timer,SIGNAL(timeout()),this,SLOT(timmer_timeout()));
    timer->start();
    ui->lcdNumber->display(dem);
}

void MainWindow::on_horizontalSlider_valueChanged(int value)
{
    ui->time->setText(QString("%1").arg(value));
    dem=value;
}
void MainWindow::timmer_timeout()
{
    dem--;
    ui->lcdNumber->display(dem);
    if(dem==0)
    {
        if(ui->led1->text()=="LED 1 sáng")
            ui->led1->setText("LED 1 tắt");
        else
            ui->led1->setText("LED 1 sáng");
        if(ui->led2->text()=="LED 2 sáng")
            ui->led2->setText("LED 2 tắt");
        else
            ui->led2->setText("LED 2 sáng");
        dem=value;
        timer->stop();
    }
    if(dem<0)
        dem=0;
}
