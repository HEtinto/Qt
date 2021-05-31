/********************************************************************************
** Form generated from reading UI file 'dialogdelete.ui'
**
** Created by: Qt User Interface Compiler version 6.0.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGDELETE_H
#define UI_DIALOGDELETE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Dialogdelete
{
public:
    QPushButton *ok;
    QPushButton *cancel;
    QLineEdit *input;
    QLabel *label;

    void setupUi(QDialog *Dialogdelete)
    {
        if (Dialogdelete->objectName().isEmpty())
            Dialogdelete->setObjectName(QString::fromUtf8("Dialogdelete"));
        Dialogdelete->resize(294, 151);
        Dialogdelete->setMinimumSize(QSize(294, 151));
        Dialogdelete->setMaximumSize(QSize(294, 151));
        ok = new QPushButton(Dialogdelete);
        ok->setObjectName(QString::fromUtf8("ok"));
        ok->setGeometry(QRect(50, 100, 75, 23));
        cancel = new QPushButton(Dialogdelete);
        cancel->setObjectName(QString::fromUtf8("cancel"));
        cancel->setGeometry(QRect(150, 100, 75, 23));
        input = new QLineEdit(Dialogdelete);
        input->setObjectName(QString::fromUtf8("input"));
        input->setGeometry(QRect(40, 60, 231, 20));
        label = new QLabel(Dialogdelete);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 30, 201, 16));

        retranslateUi(Dialogdelete);

        QMetaObject::connectSlotsByName(Dialogdelete);
    } // setupUi

    void retranslateUi(QDialog *Dialogdelete)
    {
        Dialogdelete->setWindowTitle(QCoreApplication::translate("Dialogdelete", "Dialog", nullptr));
        ok->setText(QCoreApplication::translate("Dialogdelete", "\347\241\256\350\256\244", nullptr));
        cancel->setText(QCoreApplication::translate("Dialogdelete", "\345\217\226\346\266\210", nullptr));
        label->setText(QCoreApplication::translate("Dialogdelete", "\350\257\267\350\276\223\345\205\245\351\234\200\350\246\201\345\210\240\351\231\244\347\232\204\347\224\250\346\210\267\347\232\204\350\264\246\345\217\267", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialogdelete: public Ui_Dialogdelete {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGDELETE_H
