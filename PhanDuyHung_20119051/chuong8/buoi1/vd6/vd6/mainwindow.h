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
    void on_pushButton_clicked();

    void on_MainWindow_iconSizeChanged(const QSize &iconSize);

    void on_dial_actionTriggered(int action);

    void on_horizontalScrollBar_actionTriggered(int action);

    void on_lineEdit_a_cursorPositionChanged(int arg1, int arg2);

    void on_horizontalScrollBar_valueChanged(int value);

    void on_dial_valueChanged(int value);

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
