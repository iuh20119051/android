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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *label_a;
    QLabel *label_b;
    QLabel *label_AB;
    QLCDNumber *lcdNumber_a;
    QLCDNumber *lcdNumber_b;
    QLCDNumber *lcdNumber_c;
    QSpinBox *spinBox;
    QComboBox *comboBox;
    QPushButton *pushButton_chon;
    QPushButton *pushButton_thuchien;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1000, 700);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label_a = new QLabel(centralWidget);
        label_a->setObjectName(QStringLiteral("label_a"));
        label_a->setGeometry(QRect(50, 50, 81, 31));
        QFont font;
        font.setPointSize(18);
        label_a->setFont(font);
        label_a->setTextFormat(Qt::PlainText);
        label_b = new QLabel(centralWidget);
        label_b->setObjectName(QStringLiteral("label_b"));
        label_b->setGeometry(QRect(60, 140, 41, 31));
        label_b->setFont(font);
        label_AB = new QLabel(centralWidget);
        label_AB->setObjectName(QStringLiteral("label_AB"));
        label_AB->setGeometry(QRect(60, 230, 61, 41));
        label_AB->setFont(font);
        lcdNumber_a = new QLCDNumber(centralWidget);
        lcdNumber_a->setObjectName(QStringLiteral("lcdNumber_a"));
        lcdNumber_a->setGeometry(QRect(160, 20, 171, 81));
        lcdNumber_b = new QLCDNumber(centralWidget);
        lcdNumber_b->setObjectName(QStringLiteral("lcdNumber_b"));
        lcdNumber_b->setGeometry(QRect(160, 110, 171, 81));
        lcdNumber_c = new QLCDNumber(centralWidget);
        lcdNumber_c->setObjectName(QStringLiteral("lcdNumber_c"));
        lcdNumber_c->setGeometry(QRect(160, 200, 171, 81));
        spinBox = new QSpinBox(centralWidget);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setGeometry(QRect(440, 40, 81, 51));
        QFont font1;
        font1.setPointSize(16);
        spinBox->setFont(font1);
        comboBox = new QComboBox(centralWidget);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(440, 171, 73, 51));
        comboBox->setFont(font1);
        pushButton_chon = new QPushButton(centralWidget);
        pushButton_chon->setObjectName(QStringLiteral("pushButton_chon"));
        pushButton_chon->setGeometry(QRect(430, 260, 101, 51));
        pushButton_thuchien = new QPushButton(centralWidget);
        pushButton_thuchien->setObjectName(QStringLiteral("pushButton_thuchien"));
        pushButton_thuchien->setGeometry(QRect(430, 340, 101, 51));
        MainWindow->setCentralWidget(centralWidget);
        pushButton_chon->raise();
        label_a->raise();
        label_b->raise();
        label_AB->raise();
        lcdNumber_a->raise();
        lcdNumber_b->raise();
        lcdNumber_c->raise();
        spinBox->raise();
        comboBox->raise();
        pushButton_thuchien->raise();
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1000, 26));
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
        label_a->setText(QApplication::translate("MainWindow", "A=", 0));
        label_b->setText(QApplication::translate("MainWindow", "B=", 0));
        label_AB->setText(QApplication::translate("MainWindow", "A+B=", 0));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "1", 0)
         << QApplication::translate("MainWindow", "2", 0)
         << QApplication::translate("MainWindow", "3", 0)
         << QApplication::translate("MainWindow", "4", 0)
         << QApplication::translate("MainWindow", "5", 0)
         << QApplication::translate("MainWindow", "6", 0)
         << QApplication::translate("MainWindow", "7", 0)
         << QApplication::translate("MainWindow", "8", 0)
         << QApplication::translate("MainWindow", "9", 0)
         << QApplication::translate("MainWindow", "11", 0)
         << QApplication::translate("MainWindow", "12", 0)
         << QApplication::translate("MainWindow", "13", 0)
         << QApplication::translate("MainWindow", "14", 0)
        );
        pushButton_chon->setText(QApplication::translate("MainWindow", "CH\341\273\214N", 0));
        pushButton_thuchien->setText(QApplication::translate("MainWindow", "TH\341\273\260C HI\341\273\206N", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
