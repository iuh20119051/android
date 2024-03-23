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
    QLabel *label;
    QLineEdit *ten_text;
    QLabel *label_2;
    QLineEdit *mssv_text;
    QLabel *label_3;
    QLineEdit *namsinh_text;
    QPushButton *submit_button;
    QLabel *result_label;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(647, 513);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(90, 40, 71, 41));
        QFont font;
        font.setPointSize(14);
        label->setFont(font);
        ten_text = new QLineEdit(centralWidget);
        ten_text->setObjectName(QStringLiteral("ten_text"));
        ten_text->setGeometry(QRect(200, 40, 291, 41));
        ten_text->setFont(font);
        ten_text->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(80, 100, 71, 41));
        label_2->setFont(font);
        mssv_text = new QLineEdit(centralWidget);
        mssv_text->setObjectName(QStringLiteral("mssv_text"));
        mssv_text->setGeometry(QRect(200, 100, 291, 41));
        mssv_text->setFont(font);
        mssv_text->setAlignment(Qt::AlignCenter);
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(70, 160, 111, 41));
        label_3->setFont(font);
        namsinh_text = new QLineEdit(centralWidget);
        namsinh_text->setObjectName(QStringLiteral("namsinh_text"));
        namsinh_text->setGeometry(QRect(200, 160, 291, 41));
        namsinh_text->setFont(font);
        namsinh_text->setAlignment(Qt::AlignCenter);
        submit_button = new QPushButton(centralWidget);
        submit_button->setObjectName(QStringLiteral("submit_button"));
        submit_button->setGeometry(QRect(220, 230, 141, 51));
        submit_button->setFont(font);
        result_label = new QLabel(centralWidget);
        result_label->setObjectName(QStringLiteral("result_label"));
        result_label->setGeometry(QRect(20, 320, 601, 41));
        QFont font1;
        font1.setPointSize(12);
        result_label->setFont(font1);
        result_label->setAlignment(Qt::AlignCenter);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 647, 26));
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
        label->setText(QApplication::translate("MainWindow", "T\303\252n: ", 0));
        label_2->setText(QApplication::translate("MainWindow", "MSSV:", 0));
        label_3->setText(QApplication::translate("MainWindow", "N\304\203m sinh:", 0));
        submit_button->setText(QApplication::translate("MainWindow", "Submit", 0));
        result_label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
