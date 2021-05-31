#include <QMessageBox>
#include <QDebug>
#include <QSqlDatabase>
#include <QDebug>
#include <QSqlError>
#include <QTextBrowser>
#include <QObject>
#include <QMouseEvent>
#include <QLabel>
#include <QButtonGroup>
#include "dialogdelete.h"
#include "dialog.h"
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "tipmessage.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    /*
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    //连接数据库
    db.setHostName("127.0.0.1"); //数据库服务器IP
    db.setUserName("root"); //数据库用户名
    db.setPassword("root"); //数据库密码
    db.setDatabaseName("lms"); //使用哪个数据库
    if( !db.open() ){ //数据库打开失败
           QMessageBox::warning(this,"错误",db.lastError().text());
           qDebug() << "打开数据库失败\n";
       }
    else
    {
        qDebug() << "打开数据库成功!!\n";
    }
    */
    ui->setupUi(this);
    this->setWindowTitle("图书管理系统");
    this->iniSignalSlots();
    //this->addReaderI.show();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::iniSignalSlots()
{
    connect(ui->bookSearch,SIGNAL(clicked()),this,SLOT(bookSearch()));
    connect(ui->logiButton,SIGNAL(clicked()),this,SLOT(userLog()));
    connect(ui->aReaderInformation,SIGNAL(clicked()),this,SLOT(readerShow()));
    connect(ui->adeleteReader,SIGNAL(clicked()),this,SLOT(showDelete()));
    connect(ui->slogiButton,SIGNAL(clicked()),&this->CU,SLOT(show()));
    //connect(&this->Dd,SIGNAL(setControl(QString)),&this->TM,SLOT(setMessage(QString)));
    /*
     * 设置控制台输出内容
     */
    connect(&this->addReaderI,SIGNAL(setControl(QString)),this->ui->bookSearchResult,SLOT(append(QString)));
    connect(&this->Dd,SIGNAL(setControl(QString)),this->ui->bookSearchResult,SLOT(append(QString)));
    //connect(&user,SIGNAL(loginSucess(QString S1)),this,SLOT(loginSucessful(QString S1)));
    //connect(ui->bookSearchInput,SIGNAL(clicked(ui->bookSearchInput)),this,SLOT(textClear(QTextEdit&t)));
}

void MainWindow::bookSearch()
{
    this->ui->bookSearchResult->setText("查询结果：");
    this->ui->bookSearchResult->append("《诗经》，是中国古代诗歌开端，最早的一部诗歌总集，收集了西周初年至春秋中叶（前11世纪至前6世纪）的诗歌，共311篇，其中6篇为笙诗，即只有标题，没有内容，称为笙诗六篇（《南陔》《白华》《华黍》《由庚》《崇丘》《由仪》），反映了周初至周晚期约五百年间的社会面貌。");
}

void MainWindow::textClear(QTextEdit&t)
{
    t.setText(" ");
}

void MainWindow::userLog()
{
   qDebug() << "run sucessfully!!\n";
   user.show();
}

void MainWindow::loginSucessful(QString S1)
{
    this->ui->labelwelcome->setText(S1);
}

void MainWindow::addReaderInfo(QString AC, QString PD)
{
    QString str = "insert into lms.account(account,pd) values(" + AC + "," + PD +")";
    QSqlQuery query;
    query.exec(str);
}

void MainWindow::deleteReaderInfo()
{

}

void MainWindow::changeReaderInfo()
{

}

void MainWindow::searchReaderInfo()
{

}

void MainWindow::readerShow()
{
    this->addReaderI.show();
}

void MainWindow::showDelete()
{
    Dd.show();
}

void MainWindow::setControlOutput(QString outInControl)
{
    ui->bookSearchResult->append(outInControl);
}
/*
void MainWindow::mousePressEvent(QMouseEvent *event)
{
    // 如果是鼠标左键按下   改变指针形状，并且存储当前指针位置与窗口位置的差值。
    if(event->button() == Qt::LeftButton){
        this->textClear()
    }
    // 如果是鼠标右键按下
    else if(event->button() == Qt::RightButton){

    }
}
*/
