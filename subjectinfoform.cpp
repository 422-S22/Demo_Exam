#include "subjectinfoform.h"
#include "ui_subjectinfoform.h"
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QSqlError>>

subjectInfoForm::subjectInfoForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::subjectInfoForm)
{
    ui->setupUi(this);
    fullSubjectInfo();
}

subjectInfoForm::~subjectInfoForm()
{
    delete ui;
}

void subjectInfoForm::fullSubjectInfo()
{
    QSqlQuery query;
    //创建QSqlQueryModel模块
    QSqlQueryModel *queryModel = new QSqlQueryModel(this);
    //执行SQL语句
    queryModel->setQuery("SELECT subject.subId,subject.subName,class.className,teacher.tchName FROM subject,class,teacher WHERE subject.classId=class.classId AND subject.tchId=teacher.tchId;");
    //检查SQL执行
    if(queryModel->lastError().isValid()){
        qDebug() << "queryModel执行有误：" << queryModel->lastError().text();
        return;
    }
    //检查是否有数据
    if(queryModel->rowCount()==0){
        qDebug() << "数据库中没有数据";
        return;
    }
    //关联tableView
    ui->tableView->setModel(queryModel);

}
