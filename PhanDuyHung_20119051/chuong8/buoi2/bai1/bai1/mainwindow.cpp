#include "mainwindow.h"
#include "ui_mainwindow.h"
QTimer *timer;
int dem=1;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //timer = new QTimer(this);
    //timer->setInterval(1000);
    connect(ui->pushButton,SIGNAL(clicked()),this, SLOT(data()));

    connect(ui->pushButton_2,SIGNAL(clicked()),this, SLOT(displayText()));
}
    void MainWindow :: displayText()
    {
        ui->lineEdit->setText("sang");
        ui->lineEdit_2->setText("sang");
        ui->lineEdit_3->setText("sang");
        ui->lineEdit_4->setText("sang");
    }
   void MainWindow :: data()
    {
       ui->lineEdit->setText("TAT");
       ui->lineEdit_2->setText("TAT");
       ui->lineEdit_3->setText("TAT");
       ui->lineEdit_4->setText("TAT");
    }
MainWindow::~MainWindow()
{
    delete ui;
}
