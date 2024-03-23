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

void MainWindow::on_hello_button_clicked()
{
    QString str1;
        str1 = ui->name_text->text();
    ui->result_label->setText("Chào bạn "+str1+", chúc bạn học tốt");

}
