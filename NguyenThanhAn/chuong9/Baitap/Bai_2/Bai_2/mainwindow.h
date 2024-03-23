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
    void set_ab();

    void on_cong_button_clicked();

    void on_tru_button_clicked();

    void on_nhan_button_clicked();

    void on_chia_button_clicked();


private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
