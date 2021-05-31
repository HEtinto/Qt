#include <QSqlQuery>
#include "dialogaddreader.h"
#include "changereader.h"

changeReader::changeReader() : DialogAddReader(nullptr)
{
    this->setWindowTitle("修改用户");
}

void changeReader::initValue()
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
            emit setControl("用户数据添加成功……");
        }
        else{
            qDebug() << "添加失败";
            emit setControl("用户数据添加失败……");
            qDebug() << s1;
        }
    }
    else {
        qDebug() << "输入内容为空，无法插入数据库中";
        emit setControl("用户数据添加失败：输入内容为空，无法插入数据库中！");
    }
}
