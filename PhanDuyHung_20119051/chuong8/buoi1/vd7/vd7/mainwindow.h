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
    void on_spinBox_editingFinished();

    void on_spinBox_valueChanged(int arg1);

    void on_pushButton_chon_clicked();

    void on_pushButton_thuchien_clicked();

    void on_comboBox_activated(int index);

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
