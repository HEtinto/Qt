#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include "database.h"
#include "dialogloginerror.h"


namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = nullptr);
    ~Dialog();
    bool loginJudge();
signals:
    void loginSucess(QString S1);
public slots:
    void userLog();

private:
    Ui::Dialog *ui;
    DataBase db;
    DialogLoginError aER;
    QString loginName;
    QString loginPassword;
    QString level;

private:
    void iniSignalSlots();
};

#endif // DIALOG_H
