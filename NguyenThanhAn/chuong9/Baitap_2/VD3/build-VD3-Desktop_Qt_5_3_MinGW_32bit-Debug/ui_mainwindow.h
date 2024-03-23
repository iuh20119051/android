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
    QRadioButton *radio_music;
    QRadioButton *radio_movie;
    QRadioButton *radio_game;
    QPushButton *pushButton;
    QLabel *label;
    QLabel *lable_result;
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
        radio_music = new QRadioButton(centralWidget);
        radio_music->setObjectName(QStringLiteral("radio_music"));
        radio_music->setGeometry(QRect(100, 90, 141, 31));
        QFont font;
        font.setPointSize(12);
        radio_music->setFont(font);
        radio_movie = new QRadioButton(centralWidget);
        radio_movie->setObjectName(QStringLiteral("radio_movie"));
        radio_movie->setGeometry(QRect(100, 130, 101, 21));
        radio_movie->setFont(font);
        radio_game = new QRadioButton(centralWidget);
        radio_game->setObjectName(QStringLiteral("radio_game"));
        radio_game->setGeometry(QRect(100, 160, 101, 31));
        radio_game->setFont(font);
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(260, 130, 101, 31));
        QFont font1;
        font1.setPointSize(14);
        pushButton->setFont(font1);
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(80, 60, 181, 31));
        label->setFont(font);
        lable_result = new QLabel(centralWidget);
        lable_result->setObjectName(QStringLiteral("lable_result"));
        lable_result->setGeometry(QRect(100, 200, 201, 61));
        QFont font2;
        font2.setPointSize(26);
        lable_result->setFont(font2);
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
        radio_music->setText(QApplication::translate("MainWindow", "Music", 0));
        radio_movie->setText(QApplication::translate("MainWindow", "Movie", 0));
        radio_game->setText(QApplication::translate("MainWindow", "Game", 0));
        pushButton->setText(QApplication::translate("MainWindow", "Click here", 0));
        label->setText(QApplication::translate("MainWindow", "What is your hobby?", 0));
        lable_result->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
