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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *hello_button;
    QPushButton *chao_button;
    QPushButton *exit_button;
    QLabel *hello_label;
    QLabel *chao_label;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(569, 458);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        hello_button = new QPushButton(centralWidget);
        hello_button->setObjectName(QStringLiteral("hello_button"));
        hello_button->setGeometry(QRect(40, 130, 111, 71));
        QFont font;
        font.setPointSize(14);
        hello_button->setFont(font);
        chao_button = new QPushButton(centralWidget);
        chao_button->setObjectName(QStringLiteral("chao_button"));
        chao_button->setGeometry(QRect(50, 240, 111, 71));
        chao_button->setFont(font);
        exit_button = new QPushButton(centralWidget);
        exit_button->setObjectName(QStringLiteral("exit_button"));
        exit_button->setGeometry(QRect(380, 140, 111, 71));
        exit_button->setFont(font);
        hello_label = new QLabel(centralWidget);
        hello_label->setObjectName(QStringLiteral("hello_label"));
        hello_label->setGeometry(QRect(180, 150, 161, 16));
        QFont font1;
        font1.setPointSize(12);
        hello_label->setFont(font1);
        chao_label = new QLabel(centralWidget);
        chao_label->setObjectName(QStringLiteral("chao_label"));
        chao_label->setGeometry(QRect(180, 270, 161, 16));
        chao_label->setFont(font1);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 569, 26));
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
        hello_button->setText(QApplication::translate("MainWindow", "Hello", 0));
        chao_button->setText(QApplication::translate("MainWindow", "Ch\303\240o", 0));
        exit_button->setText(QApplication::translate("MainWindow", "Tho\303\241t", 0));
        hello_label->setText(QString());
        chao_label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
