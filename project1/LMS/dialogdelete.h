#ifndef DIALOGDELETE_H
#define DIALOGDELETE_H

#include <QDialog>
#include <QTime>

namespace Ui {
class Dialogdelete;
}

class Dialogdelete : public QDialog
{
    Q_OBJECT

public:
    explicit Dialogdelete(QWidget *parent = nullptr);
    ~Dialogdelete();

signals:
    void setControl(QString outInControl);

public slots:
    void sureClicked();
    void cancelClicked();

private:
    Ui::Dialogdelete *ui;
    QTime time;
};

#endif // DIALOGDELETE_H
