#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_led0_clicked();

    void on_led1_clicked();

    void on_led2_clicked();

    void on_led3_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
