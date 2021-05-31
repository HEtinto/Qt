/********************************************************************************
** Form generated from reading UI file 'dialogaddreader.ui'
**
** Created by: Qt User Interface Compiler version 6.0.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGADDREADER_H
#define UI_DIALOGADDREADER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_DialogAddReader
{
public:
    QPushButton *buttonSure;
    QPushButton *pushCancel;
    QLineEdit *lineEdit_1;
    QLineEdit *lineEdit_2;
    QLabel *label;
    QLabel *label_2;
    QComboBox *comboBox;
    QLabel *label_3;

    void setupUi(QDialog *DialogAddReader)
    {
        if (DialogAddReader->objectName().isEmpty())
            DialogAddReader->setObjectName(QString::fromUtf8("DialogAddReader"));
        DialogAddReader->resize(329, 201);
        DialogAddReader->setMinimumSize(QSize(329, 201));
        DialogAddReader->setMaximumSize(QSize(329, 201));
        buttonSure = new QPushButton(DialogAddReader);
        buttonSure->setObjectName(QString::fromUtf8("buttonSure"));
        buttonSure->setGeometry(QRect(80, 150, 75, 23));
        pushCancel = new QPushButton(DialogAddReader);
        pushCancel->setObjectName(QString::fromUtf8("pushCancel"));
        pushCancel->setGeometry(QRect(220, 150, 75, 23));
        lineEdit_1 = new QLineEdit(DialogAddReader);
        lineEdit_1->setObjectName(QString::fromUtf8("lineEdit_1"));
        lineEdit_1->setGeometry(QRect(70, 70, 211, 20));
        lineEdit_2 = new QLineEdit(DialogAddReader);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(70, 110, 211, 20));
        label = new QLabel(DialogAddReader);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 70, 54, 12));
        label_2 = new QLabel(DialogAddReader);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 110, 54, 12));
        comboBox = new QComboBox(DialogAddReader);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(70, 30, 81, 22));
        label_3 = new QLabel(DialogAddReader);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 30, 54, 12));

        retranslateUi(DialogAddReader);

        QMetaObject::connectSlotsByName(DialogAddReader);
    } // setupUi

    void retranslateUi(QDialog *DialogAddReader)
    {
        DialogAddReader->setWindowTitle(QCoreApplication::translate("DialogAddReader", "Dialog", nullptr));
        buttonSure->setText(QCoreApplication::translate("DialogAddReader", "\347\241\256\350\256\244", nullptr));
        pushCancel->setText(QCoreApplication::translate("DialogAddReader", "\345\217\226\346\266\210", nullptr));
        label->setText(QCoreApplication::translate("DialogAddReader", "\350\256\276\347\275\256\350\264\246\345\217\267", nullptr));
        label_2->setText(QCoreApplication::translate("DialogAddReader", "\350\256\276\347\275\256\345\257\206\347\240\201", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("DialogAddReader", "\345\255\246\347\224\237\350\264\246\346\210\267", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("DialogAddReader", "\346\225\231\345\270\210\350\264\246\346\210\267", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("DialogAddReader", "\347\256\241\347\220\206\345\221\230", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("DialogAddReader", "\350\266\205\347\272\247\347\256\241\347\220\206\345\221\230", nullptr));
        comboBox->setItemText(4, QString());

#if QT_CONFIG(tooltip)
        comboBox->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        label_3->setText(QCoreApplication::translate("DialogAddReader", "\350\256\276\347\275\256\346\235\203\351\231\220", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogAddReader: public Ui_DialogAddReader {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGADDREADER_H
