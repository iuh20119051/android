/********************************************************************************
** Form generated from reading UI file 'vd1.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VD1_H
#define UI_VD1_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_vd1
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QTextEdit *textEdit;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *vd1)
    {
        if (vd1->objectName().isEmpty())
            vd1->setObjectName(QStringLiteral("vd1"));
        vd1->resize(1311, 631);
        centralWidget = new QWidget(vd1);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(140, 300, 141, 61));
        QFont font;
        font.setPointSize(14);
        pushButton->setFont(font);
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(380, 300, 121, 61));
        pushButton_2->setFont(font);
        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(570, 300, 121, 61));
        pushButton_3->setFont(font);
        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(280, 150, 301, 87));
        vd1->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(vd1);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1311, 26));
        vd1->setMenuBar(menuBar);
        mainToolBar = new QToolBar(vd1);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        vd1->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(vd1);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        vd1->setStatusBar(statusBar);

        retranslateUi(vd1);

        QMetaObject::connectSlotsByName(vd1);
    } // setupUi

    void retranslateUi(QMainWindow *vd1)
    {
        vd1->setWindowTitle(QApplication::translate("vd1", "vd1", 0));
        pushButton->setText(QApplication::translate("vd1", "Ch\303\240o", 0));
        pushButton_2->setText(QApplication::translate("vd1", "Xo\303\241 ", 0));
        pushButton_3->setText(QApplication::translate("vd1", "Tho\303\241t", 0));
    } // retranslateUi

};

namespace Ui {
    class vd1: public Ui_vd1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VD1_H
