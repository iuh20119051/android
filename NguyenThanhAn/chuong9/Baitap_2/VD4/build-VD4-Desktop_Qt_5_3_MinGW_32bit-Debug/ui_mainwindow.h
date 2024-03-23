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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QCheckBox *checkBox_nhac;
    QCheckBox *checkBox_phim;
    QCheckBox *checkBox_game;
    QPushButton *pushButton;
    QLabel *label;
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
        checkBox_nhac = new QCheckBox(centralWidget);
        checkBox_nhac->setObjectName(QStringLiteral("checkBox_nhac"));
        checkBox_nhac->setGeometry(QRect(60, 20, 101, 31));
        QFont font;
        font.setPointSize(12);
        checkBox_nhac->setFont(font);
        checkBox_nhac->setMouseTracking(false);
        checkBox_nhac->setAutoFillBackground(false);
        checkBox_phim = new QCheckBox(centralWidget);
        checkBox_phim->setObjectName(QStringLiteral("checkBox_phim"));
        checkBox_phim->setGeometry(QRect(60, 60, 101, 31));
        checkBox_phim->setFont(font);
        checkBox_phim->setMouseTracking(false);
        checkBox_phim->setAutoFillBackground(false);
        checkBox_game = new QCheckBox(centralWidget);
        checkBox_game->setObjectName(QStringLiteral("checkBox_game"));
        checkBox_game->setGeometry(QRect(60, 100, 101, 31));
        checkBox_game->setFont(font);
        checkBox_game->setMouseTracking(false);
        checkBox_game->setAutoFillBackground(false);
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(230, 60, 121, 41));
        QFont font1;
        font1.setPointSize(14);
        pushButton->setFont(font1);
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(40, 160, 331, 41));
        QFont font2;
        font2.setPointSize(10);
        label->setFont(font2);
        label->setMouseTracking(true);
        label->setAlignment(Qt::AlignCenter);
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
        checkBox_nhac->setText(QApplication::translate("MainWindow", "Nghe nhac", 0));
        checkBox_phim->setText(QApplication::translate("MainWindow", "Xem phim", 0));
        checkBox_game->setText(QApplication::translate("MainWindow", "Choi game", 0));
        pushButton->setText(QApplication::translate("MainWindow", "Click vao day", 0));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
