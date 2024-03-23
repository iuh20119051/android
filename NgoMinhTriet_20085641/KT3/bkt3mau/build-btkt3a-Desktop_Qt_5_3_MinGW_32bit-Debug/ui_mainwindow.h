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
#include <QtWidgets/QDial>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
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
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineEditBD;
    QLineEdit *lineEditTD;
    QPushButton *pushButtonC;
    QPushButton *pushButtonT;
    QLabel *label_4;
    QLCDNumber *kq;
    QDial *dial;
    QSpinBox *spinBox;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(730, 513);
        MainWindow->setMinimumSize(QSize(1, 0));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(70, 10, 471, 41));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(32, 70, 101, 20));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(32, 110, 101, 20));
        lineEditBD = new QLineEdit(centralWidget);
        lineEditBD->setObjectName(QStringLiteral("lineEditBD"));
        lineEditBD->setGeometry(QRect(170, 70, 113, 22));
        lineEditTD = new QLineEdit(centralWidget);
        lineEditTD->setObjectName(QStringLiteral("lineEditTD"));
        lineEditTD->setGeometry(QRect(170, 110, 113, 22));
        pushButtonC = new QPushButton(centralWidget);
        pushButtonC->setObjectName(QStringLiteral("pushButtonC"));
        pushButtonC->setGeometry(QRect(120, 200, 93, 28));
        pushButtonT = new QPushButton(centralWidget);
        pushButtonT->setObjectName(QStringLiteral("pushButtonT"));
        pushButtonT->setGeometry(QRect(260, 200, 93, 28));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(40, 300, 53, 16));
        kq = new QLCDNumber(centralWidget);
        kq->setObjectName(QStringLiteral("kq"));
        kq->setGeometry(QRect(110, 290, 91, 31));
        dial = new QDial(centralWidget);
        dial->setObjectName(QStringLiteral("dial"));
        dial->setGeometry(QRect(370, 40, 50, 64));
        dial->setMinimum(0);
        dial->setMaximum(2000);
        spinBox = new QSpinBox(centralWidget);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setGeometry(QRect(370, 110, 42, 22));
        spinBox->setMaximum(2000);
        spinBox->setSingleStep(100);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 730, 26));
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
        label->setText(QApplication::translate("MainWindow", "\304\220I\341\273\200U CH\341\272\276 \304\220\341\273\230 R\341\273\230NG XUNG PWM", 0));
        label_2->setText(QApplication::translate("MainWindow", "T\341\272\247n s\341\273\221 ban \304\221\341\272\247u", 0));
        label_3->setText(QApplication::translate("MainWindow", "Kho\341\272\243ng thay \304\221\341\273\225i", 0));
        pushButtonC->setText(QApplication::translate("MainWindow", "+", 0));
        pushButtonT->setText(QApplication::translate("MainWindow", "-", 0));
        label_4->setText(QApplication::translate("MainWindow", "K\341\272\277t qu\341\272\243", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
