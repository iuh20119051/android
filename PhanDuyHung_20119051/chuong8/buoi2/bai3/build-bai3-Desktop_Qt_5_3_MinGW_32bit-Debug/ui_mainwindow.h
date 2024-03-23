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
    QRadioButton *radioButton_phim;
    QRadioButton *radioButton_nhac;
    QRadioButton *radioButton_game;
    QLabel *label_ht;
    QPushButton *pushButton;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(803, 468);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(150, 80, 261, 31));
        QFont font;
        font.setPointSize(14);
        label->setFont(font);
        radioButton_phim = new QRadioButton(centralWidget);
        radioButton_phim->setObjectName(QStringLiteral("radioButton_phim"));
        radioButton_phim->setGeometry(QRect(260, 140, 95, 20));
        radioButton_nhac = new QRadioButton(centralWidget);
        radioButton_nhac->setObjectName(QStringLiteral("radioButton_nhac"));
        radioButton_nhac->setGeometry(QRect(260, 180, 95, 20));
        radioButton_game = new QRadioButton(centralWidget);
        radioButton_game->setObjectName(QStringLiteral("radioButton_game"));
        radioButton_game->setGeometry(QRect(260, 220, 95, 20));
        label_ht = new QLabel(centralWidget);
        label_ht->setObjectName(QStringLiteral("label_ht"));
        label_ht->setGeometry(QRect(190, 270, 411, 41));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(510, 180, 93, 28));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 803, 26));
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
        label->setText(QApplication::translate("MainWindow", "cho bi\341\272\277t s\341\273\237 th\303\255c c\341\273\247a b\341\272\241n", 0));
        radioButton_phim->setText(QApplication::translate("MainWindow", "XEM PHIM", 0));
        radioButton_nhac->setText(QApplication::translate("MainWindow", "NGHE NH\341\272\240C", 0));
        radioButton_game->setText(QApplication::translate("MainWindow", "CH\306\240I GAME", 0));
        label_ht->setText(QApplication::translate("MainWindow", "T", 0));
        pushButton->setText(QApplication::translate("MainWindow", "CLICK", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
