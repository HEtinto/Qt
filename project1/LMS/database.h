#ifndef DATABASE_H
#define DATABASE_H

#include <QObject>
#include <QSqlDatabase>
#include <QSqlQuery>

class DataBase : public QObject
{
    Q_OBJECT
public:
    explicit DataBase(QObject *parent = nullptr);
    ~DataBase();
    QSqlDatabase DataBaseConnect();

public:
    QSqlDatabase db;

signals:

};

#endif // DATABASE_H
