#include <QSqlQuery>
#include <QDebug>
#include "dialogdelete.h"
#include "ui_dialogdelete.h"
#include "tipmessage.h"

Dialogdelete::Dialogdelete(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialogdelete)
{
    ui->setupUi(this);
    this->setWindowTitle("删除用户");
    //连接信号和槽函数
    connect(ui->ok,SIGNAL(clicked()),this,SLOT(sureClicked()));
    connect(ui->cancel,SIGNAL(clicked()),this,SLOT(hide()));
}

Dialogdelete::~Dialogdelete()
{
    delete ui;
}

void Dialogdelete::sureClicked()
{
    qDebug() << "调用sureClicked()槽函数";
    //当input输入内容非空时执行下面的操作，删除指定账号的用户
    if(!ui->input->text().isEmpty())
    {
        qDebug() << "进入删除内部";
        QString aAccount = ui->input->text();
        QSqlQuery query;
        if(query.exec(QString("DELETE FROM account WHERE account='%1'").arg(aAccount)))
        {
            qDebug() << "删除成功";
            this->hide();
            emit this->setControl(QString("**%1**\n删除用户%2成功!!").arg(this->time.currentTime().toString("H:m:s a"),aAccount));
        }
        else {
            qDebug() << "删除失败，未找到目标用户";
            emit this->setControl(QString("删除用户%1失败，未找到目标用户!").arg(aAccount));
        }
    }
}

void Dialogdelete::cancelClicked()
{

}
