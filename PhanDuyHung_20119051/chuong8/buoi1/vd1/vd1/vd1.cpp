#include "vd1.h"
#include "ui_vd1.h"

vd1::vd1(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::vd1)
{
    ui->setupUi(this);
}

vd1::~vd1()
{
    delete ui;
}

void vd1::on_pushButton_clicked()
{
    ui->textEdit->setText("chào các bạn");
}


void vd1::on_pushButton_2_clicked()
{
    ui->textEdit->setText( " ");
}


void vd1::on_pushButton_3_clicked()
{
    this->close();
}

void vd1::on_pushButton_4_clicked()
{
    ui->textEdit->setText("bạn muốn làm gì");
}
