#include "tchinfoform.h"
#include "ui_tchinfoform.h"

#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QSqlError>

tchInfoForm::tchInfoForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::tchInfoForm)
{
    ui->setupUi(this);
    fullTchInfo();
}

tchInfoForm::~tchInfoForm()
{
    delete ui;
}

void tchInfoForm::fullTchInfo()
{
    QSqlQuery query;
    //创建QSqlQueryModel对象
    QSqlQueryModel *queryModel = new QSqlQueryModel(this);
    //执行sql语句
    queryModel->setQuery("SELECT tchNum,tchName,tchSex,tchQQ,tchUserName,tchPassWord FROM teacher;");
    //检查是否sql执行是否有误
    if(queryModel->lastError().isValid()){
        qDebug() << "sql语句执行有误：" << queryModel->lastError().text();
        return;
    }
    //检查是否有数据
    if(queryModel->rowCount()==0){
        qDebug() << "数据库中没有数据";
        return;
    }
    //关联QSqlQueryModel和tableView
    ui->tableView->setModel(queryModel);
}
