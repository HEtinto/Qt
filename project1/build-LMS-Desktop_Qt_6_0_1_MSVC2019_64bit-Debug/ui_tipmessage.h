/********************************************************************************
** Form generated from reading UI file 'tipmessage.ui'
**
** Created by: Qt User Interface Compiler version 6.0.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TIPMESSAGE_H
#define UI_TIPMESSAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_tipMessage
{
public:
    QTextBrowser *tipShow;

    void setupUi(QWidget *tipMessage)
    {
        if (tipMessage->objectName().isEmpty())
            tipMessage->setObjectName(QString::fromUtf8("tipMessage"));
        tipMessage->resize(523, 112);
        tipShow = new QTextBrowser(tipMessage);
        tipShow->setObjectName(QString::fromUtf8("tipShow"));
        tipShow->setGeometry(QRect(0, 0, 531, 121));
        tipShow->setMinimumSize(QSize(531, 121));
        tipShow->setMaximumSize(QSize(531, 121));

        retranslateUi(tipMessage);

        QMetaObject::connectSlotsByName(tipMessage);
    } // setupUi

    void retranslateUi(QWidget *tipMessage)
    {
        tipMessage->setWindowTitle(QCoreApplication::translate("tipMessage", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class tipMessage: public Ui_tipMessage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TIPMESSAGE_H
