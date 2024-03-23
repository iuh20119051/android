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
    void on_checkBox_led1_clicked();

    void on_checkBox_led2_clicked();

    void on_checkBox_led3_clicked();

    void on_checkBox_led4_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
