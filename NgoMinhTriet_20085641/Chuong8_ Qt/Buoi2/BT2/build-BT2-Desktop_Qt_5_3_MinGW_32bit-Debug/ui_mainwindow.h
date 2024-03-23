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
    QRadioButton *nhac;
    QPushButton *choose;
    QLabel *label;
    QRadioButton *phim;
    QRadioButton *game;
    QLabel *KQ;
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
        nhac = new QRadioButton(centralWidget);
        nhac->setObjectName(QStringLiteral("nhac"));
        nhac->setGeometry(QRect(70, 60, 82, 17));
        choose = new QPushButton(centralWidget);
        choose->setObjectName(QStringLiteral("choose"));
        choose->setGeometry(QRect(250, 70, 75, 23));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(70, 30, 141, 16));
        phim = new QRadioButton(centralWidget);
        phim->setObjectName(QStringLiteral("phim"));
        phim->setGeometry(QRect(70, 90, 82, 17));
        game = new QRadioButton(centralWidget);
        game->setObjectName(QStringLiteral("game"));
        game->setGeometry(QRect(70, 120, 82, 17));
        KQ = new QLabel(centralWidget);
        KQ->setObjectName(QStringLiteral("KQ"));
        KQ->setGeometry(QRect(140, 170, 46, 13));
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
        nhac->setText(QApplication::translate("MainWindow", "Nghe nh\341\272\241c", 0));
        choose->setText(QApplication::translate("MainWindow", "Click here", 0));
        label->setText(QApplication::translate("MainWindow", "Cho bi\341\272\277t s\341\273\237 th\303\255ch c\341\273\247a b\341\272\241n: ", 0));
        phim->setText(QApplication::translate("MainWindow", "Xem phim", 0));
        game->setText(QApplication::translate("MainWindow", "Ch\306\241i Game", 0));
        KQ->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
