/********************************************************************************
** Form generated from reading UI file 'screen_2.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCREEN_2_H
#define UI_SCREEN_2_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Screen_2
{
public:
    QDialogButtonBox *buttonBox;
    QPushButton *btn_return;

    void setupUi(QDialog *Screen_2)
    {
        if (Screen_2->objectName().isEmpty())
            Screen_2->setObjectName(QStringLiteral("Screen_2"));
        Screen_2->resize(400, 300);
        buttonBox = new QDialogButtonBox(Screen_2);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        btn_return = new QPushButton(Screen_2);
        btn_return->setObjectName(QStringLiteral("btn_return"));
        btn_return->setGeometry(QRect(70, 100, 241, 41));
        QFont font;
        font.setPointSize(12);
        btn_return->setFont(font);

        retranslateUi(Screen_2);
        QObject::connect(buttonBox, SIGNAL(accepted()), Screen_2, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Screen_2, SLOT(reject()));

        QMetaObject::connectSlotsByName(Screen_2);
    } // setupUi

    void retranslateUi(QDialog *Screen_2)
    {
        Screen_2->setWindowTitle(QApplication::translate("Screen_2", "Dialog", 0));
        btn_return->setText(QApplication::translate("Screen_2", "Quay v\341\273\201 m\303\240n h\303\254nh Log in", 0));
    } // retranslateUi

};

namespace Ui {
    class Screen_2: public Ui_Screen_2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCREEN_2_H
