/********************************************************************************
** Form generated from reading UI file 'dialogloginerror.ui'
**
** Created by: Qt User Interface Compiler version 6.0.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGLOGINERROR_H
#define UI_DIALOGLOGINERROR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_DialogLoginError
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;

    void setupUi(QDialog *DialogLoginError)
    {
        if (DialogLoginError->objectName().isEmpty())
            DialogLoginError->setObjectName(QString::fromUtf8("DialogLoginError"));
        DialogLoginError->resize(224, 123);
        DialogLoginError->setMinimumSize(QSize(224, 123));
        DialogLoginError->setMaximumSize(QSize(224, 123));
        buttonBox = new QDialogButtonBox(DialogLoginError);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(-150, 60, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label = new QLabel(DialogLoginError);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, 10, 161, 41));
        label->setTextFormat(Qt::AutoText);
        label->setScaledContents(false);

        retranslateUi(DialogLoginError);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, DialogLoginError, &QDialog::accept);
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, DialogLoginError, &QDialog::reject);

        QMetaObject::connectSlotsByName(DialogLoginError);
    } // setupUi

    void retranslateUi(QDialog *DialogLoginError)
    {
        DialogLoginError->setWindowTitle(QCoreApplication::translate("DialogLoginError", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("DialogLoginError", "\345\257\206\347\240\201\351\224\231\350\257\257\357\274\214\347\231\273\345\275\225\345\244\261\350\264\245\357\274\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogLoginError: public Ui_DialogLoginError {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGLOGINERROR_H
