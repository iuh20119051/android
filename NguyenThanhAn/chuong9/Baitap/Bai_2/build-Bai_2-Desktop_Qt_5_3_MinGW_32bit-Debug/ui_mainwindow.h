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
    QLineEdit *a_text;
    QLabel *label_2;
    QLineEdit *b_text;
    QLabel *label_3;
    QLineEdit *kq_text;
    QPushButton *cong_button;
    QPushButton *tru_button;
    QPushButton *nhan_button;
    QPushButton *chia_button;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(519, 396);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(70, 30, 61, 31));
        QFont font;
        font.setPointSize(14);
        label->setFont(font);
        a_text = new QLineEdit(centralWidget);
        a_text->setObjectName(QStringLiteral("a_text"));
        a_text->setGeometry(QRect(120, 30, 171, 41));
        a_text->setFont(font);
        a_text->setCursor(QCursor(Qt::ArrowCursor));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(70, 90, 61, 31));
        label_2->setFont(font);
        b_text = new QLineEdit(centralWidget);
        b_text->setObjectName(QStringLiteral("b_text"));
        b_text->setGeometry(QRect(120, 90, 171, 41));
        b_text->setFont(font);
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(50, 160, 61, 31));
        label_3->setFont(font);
        kq_text = new QLineEdit(centralWidget);
        kq_text->setObjectName(QStringLiteral("kq_text"));
        kq_text->setGeometry(QRect(120, 150, 171, 41));
        kq_text->setFont(font);
        cong_button = new QPushButton(centralWidget);
        cong_button->setObjectName(QStringLiteral("cong_button"));
        cong_button->setGeometry(QRect(60, 240, 91, 51));
        cong_button->setFont(font);
        tru_button = new QPushButton(centralWidget);
        tru_button->setObjectName(QStringLiteral("tru_button"));
        tru_button->setGeometry(QRect(170, 240, 91, 51));
        tru_button->setFont(font);
        nhan_button = new QPushButton(centralWidget);
        nhan_button->setObjectName(QStringLiteral("nhan_button"));
        nhan_button->setGeometry(QRect(280, 240, 91, 51));
        nhan_button->setFont(font);
        chia_button = new QPushButton(centralWidget);
        chia_button->setObjectName(QStringLiteral("chia_button"));
        chia_button->setGeometry(QRect(380, 240, 91, 51));
        chia_button->setFont(font);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 519, 26));
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
        label->setText(QApplication::translate("MainWindow", "a=", 0));
        label_2->setText(QApplication::translate("MainWindow", "b =", 0));
        label_3->setText(QApplication::translate("MainWindow", "kq =", 0));
        cong_button->setText(QApplication::translate("MainWindow", "Cong", 0));
        tru_button->setText(QApplication::translate("MainWindow", "Tru", 0));
        nhan_button->setText(QApplication::translate("MainWindow", "Nhan", 0));
        chia_button->setText(QApplication::translate("MainWindow", "Chia", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
