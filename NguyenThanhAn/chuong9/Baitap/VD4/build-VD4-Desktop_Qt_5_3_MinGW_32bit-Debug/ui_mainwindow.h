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
    QPushButton *pushButton;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *b_text;
    QLineEdit *sum_ab_text;
    QLabel *label_3;
    QLineEdit *sqrt_a_text;
    QLabel *label_4;
    QLineEdit *a_text;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(644, 527);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(220, 350, 151, 51));
        QFont font;
        font.setPointSize(20);
        pushButton->setFont(font);
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(90, 80, 61, 41));
        QFont font1;
        font1.setPointSize(14);
        label->setFont(font1);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(90, 150, 61, 41));
        label_2->setFont(font1);
        b_text = new QLineEdit(centralWidget);
        b_text->setObjectName(QStringLiteral("b_text"));
        b_text->setGeometry(QRect(190, 150, 121, 41));
        b_text->setFont(font1);
        b_text->setAlignment(Qt::AlignCenter);
        sum_ab_text = new QLineEdit(centralWidget);
        sum_ab_text->setObjectName(QStringLiteral("sum_ab_text"));
        sum_ab_text->setGeometry(QRect(190, 210, 121, 41));
        sum_ab_text->setFont(font1);
        sum_ab_text->setAlignment(Qt::AlignCenter);
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(60, 210, 101, 41));
        label_3->setFont(font1);
        sqrt_a_text = new QLineEdit(centralWidget);
        sqrt_a_text->setObjectName(QStringLiteral("sqrt_a_text"));
        sqrt_a_text->setGeometry(QRect(190, 270, 121, 41));
        sqrt_a_text->setFont(font1);
        sqrt_a_text->setAlignment(Qt::AlignCenter);
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(60, 270, 101, 41));
        label_4->setFont(font1);
        a_text = new QLineEdit(centralWidget);
        a_text->setObjectName(QStringLiteral("a_text"));
        a_text->setGeometry(QRect(190, 80, 121, 41));
        a_text->setFont(font1);
        a_text->setAlignment(Qt::AlignCenter);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 644, 26));
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
        pushButton->setText(QApplication::translate("MainWindow", "RESULT", 0));
        label->setText(QApplication::translate("MainWindow", "a =", 0));
        label_2->setText(QApplication::translate("MainWindow", "b =", 0));
        label_3->setText(QApplication::translate("MainWindow", "a + b =", 0));
        sqrt_a_text->setText(QString());
        label_4->setText(QApplication::translate("MainWindow", "Sqrt(a) =", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
