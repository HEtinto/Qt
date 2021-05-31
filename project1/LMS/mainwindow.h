#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTextEdit>
#include "dialogdelete.h"
#include "dialog.h"
#include "dialogaddreader.h"
#include "tipmessage.h"
#include "changeuser.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots:
    void bookSearch();
    void textClear(QTextEdit&t);
    void userLog();
    void loginSucessful(QString S1);
    void readerShow();
    void addReaderInfo(QString AC, QString PD);
    void deleteReaderInfo();
    void changeReaderInfo();
    void searchReaderInfo();
    void showDelete();
    //设置控制台输出
    void setControlOutput(QString outInControl);
/*
protected:
    void mousePressEvent(QMouseEvent *event);        //单击
    void mouseReleaseEvent(QMouseEvent *event);      //释放
    void mouseDoubleClickEvent(QMouseEvent *event);  //双击
    void mouseMoveEvent(QMouseEvent *event);         //移动
    void wheelEvent(QWheelEvent *event);
*/
private:
    void iniSignalSlots();

private:
    Ui::MainWindow *ui;
    Dialog user;
    DialogAddReader addReaderI;
    Dialogdelete Dd;
    tipMessage TM;
    changeUser CU;

};
#endif // MAINWINDOW_H
