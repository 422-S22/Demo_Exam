#include "classinfoform.h"
#include "ui_classinfoform.h"
#include "mysql.h"
#include <QStandardItemModel>
#include <QSqlQueryModel>
#include <QModelIndex>
#include <QItemSelectionModel>

classInfoForm::classInfoForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::classInfoForm)
{
    ui->setupUi(this);
    fillTableView();
    updateStatus();

}

classInfoForm::~classInfoForm()
{
    delete ui;
}

void classInfoForm::fillTableView()
{
    QSqlQuery query;
    //query.prepare("SELECT class.classId, class.classNum, class.className, teacher.tchName, subject.subName FROM class, teacher, subject WHERE class.subId = subject.subId AND class.tchId = teacher.tchId;");
    //创建QSqlQueryModel对象
    QSqlQueryModel *queryModel = new QSqlQueryModel(this);
    //执行SQL查询
    queryModel->setQuery("SELECT class.classId, class.classNum, class.className, teacher.tchName, subject.subName FROM class, teacher, subject WHERE class.subId = subject.subId AND class.tchId = teacher.tchId;");
    if(queryModel->lastError().isValid()){
        qDebug() << "query执行错误：" << queryModel->lastError().text();
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

void classInfoForm::updateStatus()
{
    //获取当前坐标的索引
    QModelIndex currentIndex = ui->tableView->currentIndex();
    int row = currentIndex.row()+1;
    int col = currentIndex.column()+1;
    //获取总行数
    int sum = ui->tableView->model()->rowCount();
    //获取选中行的数量
    QItemSelectionModel *selectionModel = ui->tableView->selectionModel();
    int selectedRowcount = selectionModel->selectedRows().count()+1;
    //总行数
    ui->label_sumNum->setText(QString::number(sum));
    //选中行数
    ui->label_countNum->setText(QString::number(selectedRowcount));
    //行坐标
    ui->label_rowNum->setText(QString::number(row));
    //列坐标
    ui->label_colNum->setText(QString::number(col));

}

void classInfoForm::on_tableView_clicked(const QModelIndex &index)
{
    //点击时更新状态栏
    updateStatus();
    //获取选中的行
    int row = index.row();
    ui->lineEdit_className->setText(ui->tableView->model()->index(row,2).data().toString());
    //获取班级号
    ui->lineEdit_classNum->setText(ui->tableView->model()->index(row,1).data().toString());

    /**
    *优化：如果将人数、教师、课程这三个值放到构造函数中去程序只需要执行一次，不需要多次设置这几个固定值
    *坏处：一般为固定值，不需要多次设置
    *其他考虑：如果要在class中添加或者删除数据，完成操作后需要刷新表格，这样可以同时对这几个可能的变值进行同步刷新
    */
    //获取所选行的班级号
    QString clId = ui->tableView->model()->index(row,0).data().toString();
    QString sqlQuery = "SELECT COUNT(stuId) FROM student WHERE student.classId =" + clId +";";
    QSqlQuery query;
    if(query.exec(sqlQuery))
    {
        //有数据
        if(query.next())
        {
            QString count = query.value(0).toString();
            ui->lineEdit_classStuAmount->setText(count);
        } else
            ui->lineEdit_classStuAmount->setText("未添加学生");
    } else
        qDebug() << "数据库查询学生人数失败：" << query.lastError().text();

    //获取选中行的班级的授课教师人数
    QString clName = ui->tableView->model()->index(row,2).data().toString();
    //准备sql语句
    sqlQuery = "SELECT COUNT(DISTINCT tchName) AS teacherNum FROM class,teacher WHERE className= \"" + clName + "\" AND class.tchId=teacher.tchId;";
    //执行sql语句
    if(query.exec(sqlQuery))
    {
        //有数据
        if(query.next())
        {
            QString count = query.value(0).toString();
            ui->lineEdit_classTchAmount->setText(count);
        } else
            ui->lineEdit_classTchAmount->setText("未安排教师");
    } else
        qDebug() << "数据库查询教师人数失败：" << query.lastError().text();


    ui->lineEdit_className->setText(ui->tableView->model()->index(row,2).data().toString());
    ui->lineEdit_className->setText(ui->tableView->model()->index(row,2).data().toString());

}

