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

void MainWindow::on_choose_released()
{
    QString a;
    if(ui->game->isChecked())
        a="Game";
    if(ui->nhac->isChecked())
        a="Nhạc";
    if(ui->phim->isChecked())
        a="Phim";
    ui->KQ->setText(a);
}
