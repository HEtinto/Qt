/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.0.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTextBrowser *textBrowser;
    QCalendarWidget *calendarWidget;
    QPushButton *bookSearch;
    QTextEdit *bookSearchInput;
    QTextEdit *bookBorrowInput;
    QPushButton *bookBorrow;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *logiButton;
    QPushButton *slogiButton;
    QPushButton *bookadd;
    QTextEdit *bookBorrowInput_2;
    QPushButton *aReaderInformation;
    QPushButton *adeleteReader;
    QPushButton *achangeReader;
    QPushButton *asearchReader;
    QLabel *labelwelcome;
    QTextEdit *bookSearchResult;
    QPushButton *auserReturn;
    QPushButton *auserBorrow;
    QMenuBar *menubar;
    QMenu *menu;
    QMenu *menuabout;
    QStatusBar *statusbar;
    QToolBar *toolBar;
    QToolBar *toolBar_2;
    QButtonGroup *buttonGroup;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        MainWindow->setMaximumSize(QSize(800, 600));
        MainWindow->setMouseTracking(false);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        textBrowser = new QTextBrowser(centralwidget);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(210, 10, 481, 51));
        textBrowser->setFocusPolicy(Qt::StrongFocus);
        textBrowser->setLayoutDirection(Qt::LeftToRight);
        textBrowser->setStyleSheet(QString::fromUtf8("QTextBrowser{border-width:0;border-style:outset}"));
        calendarWidget = new QCalendarWidget(centralwidget);
        calendarWidget->setObjectName(QString::fromUtf8("calendarWidget"));
        calendarWidget->setGeometry(QRect(530, 280, 251, 261));
        bookSearch = new QPushButton(centralwidget);
        bookSearch->setObjectName(QString::fromUtf8("bookSearch"));
        bookSearch->setGeometry(QRect(50, 110, 121, 31));
        bookSearchInput = new QTextEdit(centralwidget);
        bookSearchInput->setObjectName(QString::fromUtf8("bookSearchInput"));
        bookSearchInput->setGeometry(QRect(190, 110, 331, 31));
        bookBorrowInput = new QTextEdit(centralwidget);
        bookBorrowInput->setObjectName(QString::fromUtf8("bookBorrowInput"));
        bookBorrowInput->setGeometry(QRect(190, 160, 331, 31));
        bookBorrow = new QPushButton(centralwidget);
        bookBorrow->setObjectName(QString::fromUtf8("bookBorrow"));
        bookBorrow->setGeometry(QRect(50, 160, 121, 31));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(50, 10, 121, 54));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        logiButton = new QPushButton(layoutWidget);
        logiButton->setObjectName(QString::fromUtf8("logiButton"));

        verticalLayout->addWidget(logiButton);

        slogiButton = new QPushButton(layoutWidget);
        slogiButton->setObjectName(QString::fromUtf8("slogiButton"));

        verticalLayout->addWidget(slogiButton);

        bookadd = new QPushButton(centralwidget);
        bookadd->setObjectName(QString::fromUtf8("bookadd"));
        bookadd->setGeometry(QRect(50, 210, 121, 31));
        bookBorrowInput_2 = new QTextEdit(centralwidget);
        bookBorrowInput_2->setObjectName(QString::fromUtf8("bookBorrowInput_2"));
        bookBorrowInput_2->setGeometry(QRect(190, 210, 331, 31));
        aReaderInformation = new QPushButton(centralwidget);
        buttonGroup = new QButtonGroup(MainWindow);
        buttonGroup->setObjectName(QString::fromUtf8("buttonGroup"));
        buttonGroup->addButton(aReaderInformation);
        aReaderInformation->setObjectName(QString::fromUtf8("aReaderInformation"));
        aReaderInformation->setGeometry(QRect(550, 110, 101, 31));
        adeleteReader = new QPushButton(centralwidget);
        buttonGroup->addButton(adeleteReader);
        adeleteReader->setObjectName(QString::fromUtf8("adeleteReader"));
        adeleteReader->setGeometry(QRect(550, 160, 101, 31));
        achangeReader = new QPushButton(centralwidget);
        buttonGroup->addButton(achangeReader);
        achangeReader->setObjectName(QString::fromUtf8("achangeReader"));
        achangeReader->setGeometry(QRect(550, 210, 101, 31));
        asearchReader = new QPushButton(centralwidget);
        buttonGroup->addButton(asearchReader);
        asearchReader->setObjectName(QString::fromUtf8("asearchReader"));
        asearchReader->setGeometry(QRect(660, 110, 101, 31));
        labelwelcome = new QLabel(centralwidget);
        labelwelcome->setObjectName(QString::fromUtf8("labelwelcome"));
        labelwelcome->setGeometry(QRect(210, 80, 471, 16));
        bookSearchResult = new QTextEdit(centralwidget);
        bookSearchResult->setObjectName(QString::fromUtf8("bookSearchResult"));
        bookSearchResult->setGeometry(QRect(50, 280, 461, 261));
        auserReturn = new QPushButton(centralwidget);
        buttonGroup->addButton(auserReturn);
        auserReturn->setObjectName(QString::fromUtf8("auserReturn"));
        auserReturn->setGeometry(QRect(660, 160, 101, 31));
        auserBorrow = new QPushButton(centralwidget);
        buttonGroup->addButton(auserBorrow);
        auserBorrow->setObjectName(QString::fromUtf8("auserBorrow"));
        auserBorrow->setGeometry(QRect(660, 210, 101, 31));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 23));
        menu = new QMenu(menubar);
        menu->setObjectName(QString::fromUtf8("menu"));
        menuabout = new QMenu(menubar);
        menuabout->setObjectName(QString::fromUtf8("menuabout"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);
        toolBar_2 = new QToolBar(MainWindow);
        toolBar_2->setObjectName(QString::fromUtf8("toolBar_2"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar_2);

        menubar->addAction(menu->menuAction());
        menubar->addAction(menuabout->menuAction());

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:24pt; color:#0055ff;\">\346\241\202\346\236\227\347\224\265\345\255\220\347\247\221\346\212\200\345\244\247\345\255\246\345\233\276\344\271\246\347\256\241\347\220\206\347\263\273\347\273\237</span></p></body></html>", nullptr));
        bookSearch->setText(QCoreApplication::translate("MainWindow", "\345\233\276\344\271\246\346\237\245\350\257\242", nullptr));
        bookSearchInput->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; color:#00aaff;\">\350\257\267\350\276\223\345\205\245\344\271\246\345\220\215/\345\233\276\344\271\246\347\240\201</span></p></body></html>", nullptr));
        bookBorrowInput->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; color:#00aaff;\">\350\257\267\350\276\223\345\205\245\344\271\246\345\220\215/\345\233\276\344\271\246\347\240\201</span></p></body></html>", nullptr));
        bookBorrow->setText(QCoreApplication::translate("MainWindow", "\345\233\276\344\271\246\345\200\237\351\230\205", nullptr));
        logiButton->setText(QCoreApplication::translate("MainWindow", "\347\256\241\347\220\206\345\221\230\347\231\273\345\275\225", nullptr));
        slogiButton->setText(QCoreApplication::translate("MainWindow", "\345\255\246\347\224\237\347\231\273\345\275\225", nullptr));
        bookadd->setText(QCoreApplication::translate("MainWindow", "\346\226\260\344\271\246\345\205\245\345\272\223", nullptr));
        bookBorrowInput_2->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; color:#00aaff;\">\350\257\267\350\276\223\345\205\245\344\271\246\345\220\215/\345\233\276\344\271\246\347\240\201</span></p></body></html>", nullptr));
        aReaderInformation->setText(QCoreApplication::translate("MainWindow", "\346\267\273\345\212\240\350\257\273\350\200\205\344\277\241\346\201\257", nullptr));
        adeleteReader->setText(QCoreApplication::translate("MainWindow", "\345\210\240\351\231\244\350\257\273\350\200\205\344\277\241\346\201\257", nullptr));
        achangeReader->setText(QCoreApplication::translate("MainWindow", "\344\277\256\346\224\271\350\257\273\350\200\205\344\277\241\346\201\257", nullptr));
        asearchReader->setText(QCoreApplication::translate("MainWindow", "\346\237\245\350\257\242\350\257\273\350\200\205\344\277\241\346\201\257", nullptr));
        labelwelcome->setText(QCoreApplication::translate("MainWindow", "\346\241\202\346\236\227\347\224\265\345\255\220\347\247\221\346\212\200\345\244\247\345\255\246\346\254\242\350\277\216\344\275\240\357\274\201", nullptr));
        auserReturn->setText(QCoreApplication::translate("MainWindow", "\347\224\250\346\210\267\350\277\230\344\271\246\347\231\273\350\256\260", nullptr));
        auserBorrow->setText(QCoreApplication::translate("MainWindow", "\347\224\250\346\210\267\345\200\237\344\271\246\347\231\273\350\256\260", nullptr));
        menu->setTitle(QCoreApplication::translate("MainWindow", "\350\217\234\345\215\225", nullptr));
        menuabout->setTitle(QCoreApplication::translate("MainWindow", "\345\205\263\344\272\216", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
        toolBar_2->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar_2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
