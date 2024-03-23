#ifndef SCREEN_2_H
#define SCREEN_2_H

#include <QDialog>

namespace Ui {
class Screen_2;
}

class Screen_2 : public QDialog
{
    Q_OBJECT

public:
    explicit Screen_2(QWidget *parent = NULL);
    ~Screen_2();
private slots:
    void on_btn_return_clicked();
private:
    Ui::Screen_2 *ui;
};

#endif // SCREEN_2_H
