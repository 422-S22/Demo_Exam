#include "mysql.h"
#include <QMessageBox>

MySql::MySql()
{  
    db = QSqlDatabase::addDatabase("QODBC");
    db.setDatabaseName("mySql");
    db.setHostName("localhost");
    db.setPort(3306);
    db.setUserName("root");
    db.setPassword("root");
}

//打开数据库
void MySql::openDatabase()
{
    db.open();
//    if(db.isOpen())
//    {
//        QMessageBox::information(nullptr,"信息","数据库成功打开");
//    }
//    else
//    {
//        QMessageBox::warning(nullptr,"错误","数据库打开失败");
//    }
}

//关闭数据库
void MySql::closeDatabase()
{
    db.close();
}

//执行sql语句
QSqlQuery MySql::executeQuery(const QString &queryStr)
{
    QSqlQuery query(db);
    if(!query.exec(queryStr))
        qDebug() << "执行查询失败" << query.lastError().text();
    return query;
}

