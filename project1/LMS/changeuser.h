#ifndef CHANGEUSER_H
#define CHANGEUSER_H

#include <QDialog>
#include <QObject>

namespace Ui {
    class changeUser;
}

class changeUser : public QDialog
{
    Q_OBJECT
public:
    explicit changeUser(QWidget *parent = nullptr);
    ~changeUser();
private:
    Ui::changeUser *ui;
};

#endif // CHANGEUSER_H
