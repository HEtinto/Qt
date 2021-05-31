#ifndef DIALOGADDREADER_H
#define DIALOGADDREADER_H

#include <QDialog>
#include <QTime>

namespace Ui {
class DialogAddReader;
}

class DialogAddReader : public QDialog
{
    Q_OBJECT

public:
    explicit DialogAddReader(QWidget *parent = nullptr);
    void initUi(QString S1, QString S2, QString S3);
    ~DialogAddReader();
signals:
    void sureButtonClicked();
    void setControl(QString outInControl);

public:
    QString loginName;
    QString loginPassword;
    QString level;
public slots:
    void initValue();
    void signalBack();
public:
    Ui::DialogAddReader *ui;
    QTime time;
};

#endif // DIALOGADDREADER_H
