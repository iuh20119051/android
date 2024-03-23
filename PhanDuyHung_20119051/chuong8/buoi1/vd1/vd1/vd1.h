#ifndef VD1_H
#define VD1_H

#include <QMainWindow>

namespace Ui {
class vd1;
}

class vd1 : public QMainWindow
{
    Q_OBJECT

public:
    explicit vd1(QWidget *parent = 0);
    ~vd1();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::vd1 *ui;
};

#endif // VD1_H
