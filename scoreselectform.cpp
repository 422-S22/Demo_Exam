#include "scoreselectform.h"
#include "ui_scoreselectform.h"
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QSqlError>

scoreSelectForm::scoreSelectForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::scoreSelectForm)
{
    this->stuId = 1;
    ui->setupUi(this);

    //初始化表模型
    this->tableModel = new QSqlTableModel(this);
    //初始化查询模型
    this->queryModel = new QSqlQueryModel(this);

    fullScoreSelect();
}

scoreSelectForm::~scoreSelectForm()
{
    delete ui;
}

void scoreSelectForm::fullScoreSelect()
{
    QSqlQuery query;
    //创建
}
