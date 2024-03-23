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
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QCheckBox *checkBox_led1;
    QCheckBox *checkBox_led2;
    QCheckBox *checkBox_led3;
    QCheckBox *checkBox_led4;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *Ten;
    QLabel *mssv;
    QLabel *kq;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(625, 443);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 10, 231, 41));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        checkBox_led1 = new QCheckBox(centralWidget);
        checkBox_led1->setObjectName(QStringLiteral("checkBox_led1"));
        checkBox_led1->setGeometry(QRect(50, 60, 81, 20));
        checkBox_led2 = new QCheckBox(centralWidget);
        checkBox_led2->setObjectName(QStringLiteral("checkBox_led2"));
        checkBox_led2->setGeometry(QRect(50, 100, 81, 20));
        checkBox_led3 = new QCheckBox(centralWidget);
        checkBox_led3->setObjectName(QStringLiteral("checkBox_led3"));
        checkBox_led3->setGeometry(QRect(50, 140, 81, 20));
        checkBox_led4 = new QCheckBox(centralWidget);
        checkBox_led4->setObjectName(QStringLiteral("checkBox_led4"));
        checkBox_led4->setGeometry(QRect(50, 180, 81, 20));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(50, 230, 53, 16));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(30, 310, 53, 16));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(350, 310, 53, 16));
        Ten = new QLabel(centralWidget);
        Ten->setObjectName(QStringLiteral("Ten"));
        Ten->setGeometry(QRect(90, 310, 131, 20));
        mssv = new QLabel(centralWidget);
        mssv->setObjectName(QStringLiteral("mssv"));
        mssv->setGeometry(QRect(420, 310, 131, 20));
        kq = new QLabel(centralWidget);
        kq->setObjectName(QStringLiteral("kq"));
        kq->setGeometry(QRect(120, 230, 471, 16));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 625, 26));
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
        label->setText(QApplication::translate("MainWindow", "B\341\272\242NG \304\220I\341\273\200U KHI\341\273\202N LED", 0));
        checkBox_led1->setText(QApplication::translate("MainWindow", "Led 1", 0));
        checkBox_led2->setText(QApplication::translate("MainWindow", "Led 2", 0));
        checkBox_led3->setText(QApplication::translate("MainWindow", "Led 3", 0));
        checkBox_led4->setText(QApplication::translate("MainWindow", "Led 4", 0));
        label_2->setText(QApplication::translate("MainWindow", "K\341\272\277t qu\341\272\243:", 0));
        label_3->setText(QApplication::translate("MainWindow", "T\303\252n:", 0));
        label_4->setText(QApplication::translate("MainWindow", "MSSV:", 0));
        Ten->setText(QString());
        mssv->setText(QString());
        kq->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
