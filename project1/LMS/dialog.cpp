#include <QSqlDatabase>
#include "dialog.h"
#include "ui_dialog.h"
#include "database.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    this->loginName = "NULL";
    ui->setupUi(this);
    // 设置密码模式
    this->setWindowTitle("用户登录");
    ui->editPassword->setEchoMode(QLineEdit::Password);
    this->iniSignalSlots();
}

Dialog::~Dialog()
{
    delete ui;

}

void Dialog::iniSignalSlots()
{
    connect(ui->enterButton,SIGNAL(clicked()),this,SLOT(userLog()));
    connect(ui->cancelButton,SIGNAL(clicked()),this,SLOT(close()));
}

void Dialog::userLog()
{
    //qDebug() << "用户登录测试\n";
    int t = 0;
    QSqlQuery myquery;
    myquery.exec("select * from account");
    while(myquery.next())
    {
        if(ui->editAccount->text().toInt() == myquery.value(0).toInt() &&\
                ui->editPassword->text().toInt() == myquery.value(1).toInt())
        {
            this->loginName = "欢迎" + ui->editAccount->text() + "登录！";
            qDebug() << "成功找到目标用户，密码正确，成功登录!";
            qDebug() << loginName;
            emit loginSucess(loginName);
            this->hide();
            this->loginName = ui->editAccount->text();
            this->loginPassword = ui->editPassword->text();
            this->level = myquery.value(2).toString();
        }
        else
        {
            qDebug() << "登录失败";
            //qDebug() << myquery.value(0).toInt();
            this->aER.show();
        }
    }
}

bool Dialog::loginJudge()
{
    if(this->loginName == "NULL")
    {
        return false;
    }
    else if(this->level == "学生" || this->level == "教师" || \
            this->level == "管理员" || this->level == "超级管理员")
    {
        return true;
    }
    else
    {
        return false;
    }
}
