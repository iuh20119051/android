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
    void on_welcome_button_clicked();

    void on_clear_button_clicked();

    void on_exit_button_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
