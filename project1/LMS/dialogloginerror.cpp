#include "dialogloginerror.h"
#include "ui_dialogloginerror.h"

DialogLoginError::DialogLoginError(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogLoginError)
{
    ui->setupUi(this);
}

DialogLoginError::~DialogLoginError()
{
    delete ui;
}
