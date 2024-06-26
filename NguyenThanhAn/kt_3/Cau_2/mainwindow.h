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
    void on_btn_start_clicked();

    void on_btn_stop_clicked();

    void on_btn_chayduoi_clicked();

    void on_btn_choptat_clicked();

    void sangled();

    void tatled();

    void chayduoi();

    void choptat();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
