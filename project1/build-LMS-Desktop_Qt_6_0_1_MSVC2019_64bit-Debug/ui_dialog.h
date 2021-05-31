/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.0.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QLabel *label;
    QLabel *label_2;
    QLineEdit *editAccount;
    QLineEdit *editPassword;
    QPushButton *enterButton;
    QPushButton *cancelButton;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(317, 157);
        Dialog->setMinimumSize(QSize(317, 157));
        Dialog->setMaximumSize(QSize(317, 157));
        Dialog->setSizeGripEnabled(false);
        Dialog->setModal(false);
        label = new QLabel(Dialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, 30, 41, 16));
        label_2 = new QLabel(Dialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(50, 60, 41, 16));
        editAccount = new QLineEdit(Dialog);
        editAccount->setObjectName(QString::fromUtf8("editAccount"));
        editAccount->setGeometry(QRect(90, 30, 171, 20));
        editPassword = new QLineEdit(Dialog);
        editPassword->setObjectName(QString::fromUtf8("editPassword"));
        editPassword->setGeometry(QRect(90, 60, 171, 20));
        enterButton = new QPushButton(Dialog);
        enterButton->setObjectName(QString::fromUtf8("enterButton"));
        enterButton->setGeometry(QRect(90, 110, 75, 23));
        cancelButton = new QPushButton(Dialog);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));
        cancelButton->setGeometry(QRect(180, 110, 75, 23));

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Dialog", "\350\264\246\345\217\267", nullptr));
        label_2->setText(QCoreApplication::translate("Dialog", "\345\257\206\347\240\201", nullptr));
        enterButton->setText(QCoreApplication::translate("Dialog", "\347\231\273\345\275\225", nullptr));
        cancelButton->setText(QCoreApplication::translate("Dialog", "\345\217\226\346\266\210\347\231\273\345\275\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
