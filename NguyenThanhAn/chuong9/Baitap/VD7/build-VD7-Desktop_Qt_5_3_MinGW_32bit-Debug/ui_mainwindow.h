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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
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
    QLCDNumber *a_lcdNumber;
    QLCDNumber *b_lcdNumber;
    QLabel *label_2;
    QLCDNumber *sum_ab_lcdNumber;
    QLabel *label_3;
    QSpinBox *spinBox;
    QComboBox *comboBox;
    QPushButton *result_button;
    QPushButton *chose_button;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(569, 392);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(110, 40, 61, 31));
        QFont font;
        font.setPointSize(14);
        label->setFont(font);
        a_lcdNumber = new QLCDNumber(centralWidget);
        a_lcdNumber->setObjectName(QStringLiteral("a_lcdNumber"));
        a_lcdNumber->setGeometry(QRect(150, 40, 111, 41));
        b_lcdNumber = new QLCDNumber(centralWidget);
        b_lcdNumber->setObjectName(QStringLiteral("b_lcdNumber"));
        b_lcdNumber->setGeometry(QRect(150, 110, 111, 41));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(110, 110, 61, 31));
        label_2->setFont(font);
        sum_ab_lcdNumber = new QLCDNumber(centralWidget);
        sum_ab_lcdNumber->setObjectName(QStringLiteral("sum_ab_lcdNumber"));
        sum_ab_lcdNumber->setGeometry(QRect(150, 190, 111, 41));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(60, 190, 81, 31));
        label_3->setFont(font);
        spinBox = new QSpinBox(centralWidget);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setGeometry(QRect(320, 40, 51, 41));
        spinBox->setFont(font);
        comboBox = new QComboBox(centralWidget);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(310, 120, 81, 31));
        comboBox->setFont(font);
        comboBox->setMaxVisibleItems(100);
        comboBox->setInsertPolicy(QComboBox::InsertAtBottom);
        result_button = new QPushButton(centralWidget);
        result_button->setObjectName(QStringLiteral("result_button"));
        result_button->setGeometry(QRect(260, 280, 101, 41));
        result_button->setFont(font);
        chose_button = new QPushButton(centralWidget);
        chose_button->setObjectName(QStringLiteral("chose_button"));
        chose_button->setGeometry(QRect(410, 110, 101, 41));
        chose_button->setFont(font);
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

        comboBox->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        label->setText(QApplication::translate("MainWindow", "a =", 0));
        label_2->setText(QApplication::translate("MainWindow", "b =", 0));
        label_3->setText(QApplication::translate("MainWindow", "a +b =", 0));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "1", 0)
         << QApplication::translate("MainWindow", "2", 0)
         << QApplication::translate("MainWindow", "3", 0)
         << QApplication::translate("MainWindow", "4", 0)
         << QApplication::translate("MainWindow", "5", 0)
         << QApplication::translate("MainWindow", "6", 0)
         << QApplication::translate("MainWindow", "7", 0)
         << QApplication::translate("MainWindow", "8", 0)
         << QApplication::translate("MainWindow", "9", 0)
         << QApplication::translate("MainWindow", "10", 0)
         << QApplication::translate("MainWindow", "11", 0)
         << QApplication::translate("MainWindow", "12", 0)
        );
        comboBox->setCurrentText(QApplication::translate("MainWindow", "1", 0));
        result_button->setText(QApplication::translate("MainWindow", "Result", 0));
        chose_button->setText(QApplication::translate("MainWindow", "Choose", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
