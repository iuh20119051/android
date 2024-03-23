/********************************************************************************
** Form generated from reading UI file 'dialog2.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG2_H
#define UI_DIALOG2_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Dialog2
{
public:
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QDialog *Dialog2)
    {
        if (Dialog2->objectName().isEmpty())
            Dialog2->setObjectName(QStringLiteral("Dialog2"));
        Dialog2->resize(400, 300);
        label = new QLabel(Dialog2);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(130, 80, 141, 51));
        QFont font;
        font.setPointSize(12);
        label->setFont(font);
        pushButton = new QPushButton(Dialog2);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(104, 202, 111, 31));

        retranslateUi(Dialog2);

        QMetaObject::connectSlotsByName(Dialog2);
    } // setupUi

    void retranslateUi(QDialog *Dialog2)
    {
        Dialog2->setWindowTitle(QApplication::translate("Dialog2", "Dialog", 0));
        label->setText(QApplication::translate("Dialog2", "Day la Dialog 2", 0));
        pushButton->setText(QApplication::translate("Dialog2", "Quay lai  dialog 1", 0));
    } // retranslateUi

};

namespace Ui {
    class Dialog2: public Ui_Dialog2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG2_H
