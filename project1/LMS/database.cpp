#include <QSqlDatabase>
#include <QSqlQuery>
#include <QDebug>
#include "database.h"

DataBase::DataBase(QObject *parent) : QObject(parent)
{
    qDebug() << "调用构造函数\n";
    this->db = QSqlDatabase::addDatabase("QMYSQL");
           db.setHostName("127.0.0.1");//mysql的地址
           db.setPort(3306);
           db.setDatabaseName("lms");//连接的数据库名称
           db.setUserName("root");//mysql登录名
           db.setPassword("root");//mysql密码
           if(db.open())
           {
               qDebug()<<"数据库连接成功!";
                qDebug()<<db.driverName();
                QSqlQuery query("show tables from thinkcmf");//thinkcmf数据库里的所有表
                while (query.next()) {
                    QString country = query.value(0).toString();
                    qDebug()<<country;
                }

                QSqlQuery query1("select * from thinkcmf_menu");//查询表的内容
                while (query1.next()) {
                    QString country = query1.value(0).toString();//cmf_menu表第1个字段的内容
                    qDebug()<<country;
                }
           }else{
               qDebug()<<"failure";
           }
}

QSqlDatabase DataBase::DataBaseConnect()
{
    return db;
}

DataBase::~DataBase()
{
    this->db.close();
    QSqlDatabase::removeDatabase("lms");
}
