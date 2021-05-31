#include <QSqlQuery>
#include "dialogaddreader.h"
#include "ui_dialogaddreader.h"

DialogAddReader::DialogAddReader(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogAddReader)
{
    ui->setupUi(this);
    this->setWindowTitle("添加读者信息");
    connect(ui->buttonSure,SIGNAL(clicked()),this,SLOT(initValue()));
    connect(ui->pushCancel,SIGNAL(clicked()),this,SLOT(hide()));
}

DialogAddReader::~DialogAddReader()
{
    delete ui;
}

void DialogAddReader::initValue()
{
    this->loginName = ui->lineEdit_1->text();
    this->loginPassword = ui->lineEdit_2->text();
    this->level = ui->comboBox->currentText();
    /*
     * 当未输入内容时，将无法执行数据库数据插入操作
     */
    if(!this->loginName.isEmpty() && !this->loginPassword.isEmpty())
    {
        this->hide();
        QString s1 = QString("VALUES ('%1', '%2', '%3')").arg(this->loginName,this->loginPassword,\
                                                     this->level);
        QSqlQuery query;
        if(query.exec("INSERT INTO account (account, pd, level) " + s1))
        {
            qDebug() << "添加成功";
            emit setControl(QString("**%1**\n用户数据添加成功……").arg(this->time.currentTime().toString("H:m:s a")));
        }
        else{
            qDebug() << "添加失败";
            emit setControl(QString("**%1**\n用户数据添加失败……").arg(this->time.currentTime().toString("H:m:s a")));
            qDebug() << s1;
        }
    }
    else {
        qDebug() << "输入内容为空，无法插入数据库中";
        emit setControl(QString("**%1**").arg(this->time.currentTime().toString("H:m:s a")));
        emit setControl("用户数据添加失败：输入内容为空，无法插入数据库中！");
    }
}

void DialogAddReader::signalBack()
{
    emit sureButtonClicked();
}
