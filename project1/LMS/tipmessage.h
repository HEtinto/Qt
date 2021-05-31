#ifndef TIPMESSAGE_H
#define TIPMESSAGE_H

#include <QWidget>

namespace Ui {
class tipMessage;
}

class tipMessage : public QWidget
{
    Q_OBJECT

public:
    explicit tipMessage(QWidget *parent = nullptr);
    ~tipMessage();
public slots:
    void setMessage(QString MS);

private:
    Ui::tipMessage *ui;
    QString Message;
};

#endif // TIPMESSAGE_H
