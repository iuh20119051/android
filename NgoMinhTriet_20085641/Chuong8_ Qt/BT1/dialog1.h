#ifndef DIALOG1_H
#define DIALOG1_H

#include <QMainWindow>

namespace Ui {
class Dialog1;
}

class Dialog1 : public QMainWindow
{
    Q_OBJECT

public:
    explicit Dialog1(QWidget *parent = 0);
    ~Dialog1();

private:
    Ui::Dialog1 *ui;
};

#endif // DIALOG1_H
