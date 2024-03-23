/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *btn_start;
    QPushButton *btn_stop;
    QPushButton *btn_chayduoi;
    QPushButton *btn_choptat;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_result;
    QLineEdit *text_led0;
    QLineEdit *text_led1;
    QLineEdit *text_led2;
    QLineEdit *text_led3;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(400, 300);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        btn_start = new QPushButton(centralWidget);
        btn_start->setObjectName(QStringLiteral("btn_start"));
        btn_start->setGeometry(QRect(30, 60, 75, 23));
        QFont font;
        font.setPointSize(10);
        btn_start->setFont(font);
        btn_stop = new QPushButton(centralWidget);
        btn_stop->setObjectName(QStringLiteral("btn_stop"));
        btn_stop->setGeometry(QRect(30, 100, 75, 23));
        btn_stop->setFont(font);
        btn_chayduoi = new QPushButton(centralWidget);
        btn_chayduoi->setObjectName(QStringLiteral("btn_chayduoi"));
        btn_chayduoi->setGeometry(QRect(30, 140, 75, 23));
        btn_chayduoi->setFont(font);
        btn_choptat = new QPushButton(centralWidget);
        btn_choptat->setObjectName(QStringLiteral("btn_choptat"));
        btn_choptat->setGeometry(QRect(30, 180, 75, 23));
        btn_choptat->setFont(font);
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(170, 60, 46, 13));
        label->setFont(font);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(170, 100, 46, 13));
        label_2->setFont(font);
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(170, 140, 46, 13));
        label_3->setFont(font);
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(170, 180, 46, 13));
        label_4->setFont(font);
        label_result = new QLabel(centralWidget);
        label_result->setObjectName(QStringLiteral("label_result"));
        label_result->setGeometry(QRect(110, 210, 141, 31));
        label_result->setFont(font);
        text_led0 = new QLineEdit(centralWidget);
        text_led0->setObjectName(QStringLiteral("text_led0"));
        text_led0->setGeometry(QRect(230, 60, 113, 20));
        text_led0->setFont(font);
        text_led1 = new QLineEdit(centralWidget);
        text_led1->setObjectName(QStringLiteral("text_led1"));
        text_led1->setGeometry(QRect(230, 100, 113, 20));
        text_led1->setFont(font);
        text_led2 = new QLineEdit(centralWidget);
        text_led2->setObjectName(QStringLiteral("text_led2"));
        text_led2->setGeometry(QRect(230, 140, 113, 20));
        text_led2->setFont(font);
        text_led3 = new QLineEdit(centralWidget);
        text_led3->setObjectName(QStringLiteral("text_led3"));
        text_led3->setGeometry(QRect(230, 180, 113, 20));
        text_led3->setFont(font);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        btn_start->setText(QApplication::translate("MainWindow", "Start", 0));
        btn_stop->setText(QApplication::translate("MainWindow", "Stop", 0));
        btn_chayduoi->setText(QApplication::translate("MainWindow", "Chay duoi", 0));
        btn_choptat->setText(QApplication::translate("MainWindow", "Chop tat", 0));
        label->setText(QApplication::translate("MainWindow", "LED 0", 0));
        label_2->setText(QApplication::translate("MainWindow", "LED 1", 0));
        label_3->setText(QApplication::translate("MainWindow", "LED 2", 0));
        label_4->setText(QApplication::translate("MainWindow", "LED 3", 0));
        label_result->setText(QApplication::translate("MainWindow", "TextLabel", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
