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
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QRadioButton *led0;
    QRadioButton *led1;
    QRadioButton *led2;
    QRadioButton *led3;
    QLabel *label_2;
    QLabel *label_result;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
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
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(70, 30, 181, 31));
        QFont font;
        font.setPointSize(12);
        label->setFont(font);
        led0 = new QRadioButton(centralWidget);
        led0->setObjectName(QStringLiteral("led0"));
        led0->setGeometry(QRect(60, 80, 82, 17));
        QFont font1;
        font1.setPointSize(10);
        led0->setFont(font1);
        led1 = new QRadioButton(centralWidget);
        led1->setObjectName(QStringLiteral("led1"));
        led1->setGeometry(QRect(60, 110, 82, 17));
        led1->setFont(font1);
        led2 = new QRadioButton(centralWidget);
        led2->setObjectName(QStringLiteral("led2"));
        led2->setGeometry(QRect(60, 140, 82, 17));
        led2->setFont(font1);
        led3 = new QRadioButton(centralWidget);
        led3->setObjectName(QStringLiteral("led3"));
        led3->setGeometry(QRect(60, 170, 81, 16));
        led3->setFont(font1);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(40, 200, 51, 21));
        label_2->setFont(font1);
        label_result = new QLabel(centralWidget);
        label_result->setObjectName(QStringLiteral("label_result"));
        label_result->setGeometry(QRect(120, 200, 71, 21));
        label_result->setFont(font1);
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(20, 230, 46, 13));
        label_4->setFont(font1);
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(60, 220, 111, 31));
        label_5->setFont(font1);
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(210, 230, 46, 13));
        label_6->setFont(font1);
        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(240, 230, 81, 16));
        label_7->setFont(font1);
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
        label->setText(QApplication::translate("MainWindow", "BANG DIEU KHIEN LED", 0));
        led0->setText(QApplication::translate("MainWindow", "led0", 0));
        led1->setText(QApplication::translate("MainWindow", "led1", 0));
        led2->setText(QApplication::translate("MainWindow", "led2", 0));
        led3->setText(QApplication::translate("MainWindow", "led3", 0));
        label_2->setText(QApplication::translate("MainWindow", "Ket qua:", 0));
        label_result->setText(QApplication::translate("MainWindow", "text", 0));
        label_4->setText(QApplication::translate("MainWindow", "Ten:", 0));
        label_5->setText(QApplication::translate("MainWindow", "Nguyen Thanh An", 0));
        label_6->setText(QApplication::translate("MainWindow", "Lop:", 0));
        label_7->setText(QApplication::translate("MainWindow", "DHDTMT16B", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
