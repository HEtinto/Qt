#include <QDebug>
#include "tipmessage.h"
#include "ui_tipmessage.h"

tipMessage::tipMessage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::tipMessage)
{
    this->Message = "null";
    ui->setupUi(this);
    this->setWindowTitle("提示!!");
}

tipMessage::~tipMessage()
{
    delete ui;
}

void tipMessage::setMessage(QString MS)
{
    this->Message = MS;
    this->ui->tipShow->setText(Message);
    qDebug() << "成功调用tipMessage的槽函数";
    this->show();
}
