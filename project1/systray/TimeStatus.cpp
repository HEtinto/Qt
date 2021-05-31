#include <QDebug>
#include "timestatus.h"

TimeStatus::TimeStatus()
{
    this->timeId = startTimer(2000);
}

void TimeStatus::timeS()
{

}

void TimeStatus::run()
{
    qDebug() << "hello\n";
}

void TimeStatus::timerEvent(QTimerEvent *event)//这里面可以分别调用针对每个定时器的事件处理函数
{

}
