#ifndef TIMESTATUS_H
#define TIMESTATUS_H

#include <QObject>
#include <QThread>
#include <QTimerEvent>

class TimeStatus :  QThread
{
    Q_OBJECT
public:
    explicit TimeStatus();
    void timeS();
    void run();

private:
    void timerEvent(QTimerEvent *event);
private:
    int timeId;
};

#endif // TIMESTATUS_H
