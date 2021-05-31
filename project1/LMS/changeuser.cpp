#include <QWidget>
#include "changeuser.h"
#include "ui_changeuser.h"

changeUser::changeUser(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::changeUser)
{
        ui->setupUi(this);
        this->setWindowTitle("修改用户信息");
}

changeUser::~changeUser()
{
    delete ui;
}
