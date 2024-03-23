#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QTimer"

QTimer *timer;

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

QString on="Sang", off = "Tat";
int count_1 = 0, count_2 = 0;

void MainWindow::tatled()
{
    ui->text_led0->setText(off);
    ui->text_led1->setText(off);
    ui->text_led2->setText(off);
    ui->text_led3->setText(off);

}
void MainWindow::sangled()
{
    ui->text_led0->setText(on);
    ui->text_led1->setText(on);
    ui->text_led2->setText(on);
    ui->text_led3->setText(on);

}

void MainWindow::chayduoi()
{
    if (count_1==0)
    {
        ui->text_led0->setText(on);
        ui->text_led1->setText(off);
        ui->text_led2->setText(off);
        ui->text_led3->setText(off);
    }
    else if (count_1==1)
    {
        ui->text_led0->setText(off);
        ui->text_led1->setText(on);
        ui->text_led2->setText(off);
        ui->text_led3->setText(off);
    }
    else if (count_1==2)
    {
        ui->text_led0->setText(off);
        ui->text_led1->setText(off);
        ui->text_led2->setText(on);
        ui->text_led3->setText(off);
    }
    else if (count_1==3)
    {
        ui->text_led0->setText(off);
        ui->text_led1->setText(off);
        ui->text_led2->setText(off);
        ui->text_led3->setText(on);
    }
    count_1++;
    if (count_1 == 4)
        count_1 = 0;
}

void MainWindow::choptat()
{
    if (count_2 == 0)
    {
        sangled();
    }
    else if (count_2 == 1)
    {
        tatled();
    }
    count_2++;
    if (count_2 == 2)
        count_2 = 0;
}


void MainWindow::on_btn_start_clicked()
{
    if (timer)
        timer->stop();
    sangled();
    ui->label_result->setText("Start");
}

void MainWindow::on_btn_stop_clicked()
{
    if (timer)
        timer->stop();
    tatled();
    ui->label_result->setText("Stop");
}

void MainWindow::on_btn_chayduoi_clicked()
{
    if (timer)
        timer->stop();
    timer = new QTimer(this);
    timer->setInterval(2000);
    timer->start();
    connect(timer, SIGNAL(timeout()), this, SLOT(chayduoi()));
    ui->label_result->setText("CHAY DUOI");
}

void MainWindow::on_btn_choptat_clicked()
{
    if (timer)
        timer->stop();
    timer = new QTimer(this);
    timer->setInterval(2000);
    timer->start();
    connect(timer, SIGNAL(timeout()), this, SLOT(choptat()));
    ui->label_result->setText("CHOP TAT");
}
