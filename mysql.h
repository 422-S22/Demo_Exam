#ifndef MYSQL_H
#define MYSQL_H

#include <QString>
#include <QSql>
#include <QSqlDatabase>
#include <QMessageBox>
#include <QSqlQuery>
#include <QSqlError>


class MySql
{
private:
    QSqlDatabase db;

public:
    MySql();
    void openDatabase();
    void closeDatabase();
    QSqlQuery executeQuery(const QString &query);

};

#endif // MYSQL_H
