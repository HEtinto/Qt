#ifndef DIALOGLOGINERROR_H
#define DIALOGLOGINERROR_H

#include <QDialog>

namespace Ui {
class DialogLoginError;
}

class DialogLoginError : public QDialog
{
    Q_OBJECT

public:
    explicit DialogLoginError(QWidget *parent = nullptr);
    ~DialogLoginError();

private:
    Ui::DialogLoginError *ui;
};

#endif // DIALOGLOGINERROR_H
