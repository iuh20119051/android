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
    QLabel *name_label;
    QPushButton *hello_button;
    QLabel *result_label;
    QLineEdit *name_text;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(604, 477);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        name_label = new QLabel(centralWidget);
        name_label->setObjectName(QStringLiteral("name_label"));
        name_label->setGeometry(QRect(90, 60, 71, 31));
        QFont font;
        font.setPointSize(14);
        name_label->setFont(font);
        hello_button = new QPushButton(centralWidget);
        hello_button->setObjectName(QStringLiteral("hello_button"));
        hello_button->setGeometry(QRect(210, 140, 131, 51));
        hello_button->setFont(font);
        result_label = new QLabel(centralWidget);
        result_label->setObjectName(QStringLiteral("result_label"));
        result_label->setGeometry(QRect(100, 230, 391, 71));
        result_label->setFont(font);
        result_label->setAlignment(Qt::AlignCenter);
        name_text = new QLineEdit(centralWidget);
        name_text->setObjectName(QStringLiteral("name_text"));
        name_text->setGeometry(QRect(160, 60, 221, 41));
        name_text->setFont(font);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 604, 26));
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
        name_label->setText(QApplication::translate("MainWindow", "Name:", 0));
        hello_button->setText(QApplication::translate("MainWindow", "Hello", 0));
        result_label->setText(QApplication::translate("MainWindow", "Result", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
