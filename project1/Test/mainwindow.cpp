#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QTime>
#include <QTextBrowser>
#include <QString>
#include <QPushButton>
#include <QObject>
#include <QDebug>
#include <QTime>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{

    //myButton = new QPushButton(this);
    ui->setupUi(this);
    connect(ui->pushButton,SIGNAL(click()),this,SLOT(this->timeSet()));
    //ui->textBrowser->setText("hello");
    qDebug()<< ("run");
    QString strBuffer;
    int time = QTime::currentTime().hour();

    qDebug() << (time);


}


MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::timeSet()
{
    QString strBuffer;
    QDateTime time;

    time = QDateTime::currentDateTime();
    strBuffer = time.toString("yyyy-MM-dd hh:mm:ss");

    QTime n(17,0,0);
    QTime t;
    qDebug()<< ("run");
    this->ui->textBrowser->setText("strBuffer");
}
