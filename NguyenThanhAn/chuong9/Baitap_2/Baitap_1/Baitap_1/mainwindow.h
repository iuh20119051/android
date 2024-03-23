#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "screen_2.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = NULL);
    ~MainWindow();

private slots:
    void on_btn_login_clicked();
    void infomation();

private:
    Ui::MainWindow *ui;
    Screen_2 *screen2;
};

#endif // MAINWINDOW_H
