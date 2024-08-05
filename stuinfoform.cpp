#include "stuinfoform.h"
#include "ui_stuinfoform.h"
#include <QItemSelectionModel>
#include <QAbstractItemModel>



stuInfoForm::stuInfoForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::stuInfoForm)
{
    this->tchId=1;
    ui->setupUi(this);
  //创建模块
    tableModel = new QSqlTableModel(this);
    queryModel = new QSqlQueryModel(this);
    //关联查询项目到映射
    this->stuInfoMap[ui->comboBox_ItemSelect->itemText(0)] = 1;
    this->stuInfoMap[ui->comboBox_ItemSelect->itemText(1)] = 2;
    this->stuInfoMap[ui->comboBox_ItemSelect->itemText(2)] = 3;
    this->stuInfoMap[ui->comboBox_ItemSelect->itemText(3)] = 5;
    this->stuInfoMap[ui->comboBox_ItemSelect->itemText(4)] = 6;
    qDebug() <<"map映射的值为：" << stuInfoMap.value(ui->comboBox_ItemStudent->itemText(0));

    //创建一个QSortFilterProxyModel 用来过滤和排序数据
    proxyModel = new QSortFilterProxyModel(this);

    //添加状态栏
    statusBar = new QStatusBar(this);
    fillStuInfo();
    updateStatusBar();
    //将选择变更信号连接到更新状态栏坐标的槽函数
    connect(ui->tableView->selectionModel(), &QItemSelectionModel::selectionChanged, this,
            &stuInfoForm::updateStatusBar);
}

stuInfoForm::~stuInfoForm()
{
    delete ui;
}

//填充tableview
void stuInfoForm::fillStuInfo()
{
    QString tch;
    QString strQuery;
    if(ui->comboBox_ItemStudent->currentIndex()==0)
    {
        qDebug() << "我的学生";
        tch=QString().number(this->tchId);  //我的学生
        strQuery = "SELECT * FROM student,class WHERE class.classId=student.classId AND class.tchId=" + tch;

    }
    else
    {
        qDebug() << "所有学生";
        strQuery = "SELECT * FROM student";
    }
    //执行SQL查询
    queryModel->setQuery(strQuery);
    if(queryModel->lastError().isValid()){
        qDebug() << "query执行失败:" << queryModel->lastError().text();
                                            return;
    }
    //检查是否有数据
    if(queryModel->rowCount()==0){
        qDebug() << "数据库中没有找到数据";
        return;
    }
    ui->tableView->setModel(queryModel);

    // Set column headers
    for(int i = 0; i < tableModel->columnCount(); i++) {
        ui->tableView->horizontalHeader()->setSectionResizeMode(i, QHeaderView::Stretch);
    }
    // Set row numbers
    ui->tableView->verticalHeader()->setVisible(true);
    updateStatusBar();
    qDebug() << "设置编辑状态：" << "获取当前索引值:" << ui->comboBox_ItemStudent->currentIndex() << "当前文本为:" << ui->comboBox_ItemStudent->currentText();
    //设置编辑状态
    if(ui->comboBox_ItemStudent->currentIndex()==0){
        ui->tableView->setEditTriggers(QAbstractItemView::DoubleClicked | QAbstractItemView::EditKeyPressed);   //可编辑
        ui->lineEdit_stuNum->setReadOnly(false);
        ui->lineEdit_stuName->setReadOnly(false);
        ui->lineEdit_stuSex->setReadOnly(false);
        ui->lineEdit_stuClass->setReadOnly(false);
        ui->lineEdit_stuQQ->setReadOnly(false);
        ui->lineEdit_stuUserName->setReadOnly(false);
        ui->lineEdit_stuPassWord->setReadOnly(false);
    } else{
        ui->tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);  //只读
        ui->lineEdit_stuNum->setReadOnly(true);
        ui->lineEdit_stuName->setReadOnly(true);
        ui->lineEdit_stuSex->setReadOnly(true);
        ui->lineEdit_stuClass->setReadOnly(true);
        ui->lineEdit_stuQQ->setReadOnly(true);
        ui->lineEdit_stuUserName->setReadOnly(true);
        ui->lineEdit_stuPassWord->setReadOnly(true);
    }
}

//更新状态栏
void stuInfoForm::updateStatusBar()
{
    //分开统计
    selectionModel = ui->tableView->selectionModel();
    ui->label_sumNum->setText(QString::number(ui->tableView->model()->rowCount()));

    if(selectionModel->hasSelection())
    {
        //获取选中的单元格
        QModelIndexList selectedIndexes = selectionModel->selectedIndexes();

        //统计选中的行数

        int selectedRowCount = selectionModel->selectedRows().count();
        qDebug() << "当前选中了：" << selectedRowCount << "行";
        //获取第一个选中单元格的行和列
        int row = selectedIndexes.first().row()+1;
        int col = selectedIndexes.first().column()+1;

        //更新状态栏信息
        ui->label_sumNum->setText(QString::number(ui->tableView->model()->rowCount()));
        ui->label_rowNum->setText(QString::number(row));
        ui->label_colNum->setText(QString::number(col));
        ui->label_countNum->setText(QString::number(selectedRowCount));
    }
    else{
        // 没有选中单元格时，重置状态栏信息
        ui->label_rowNum->setText("0");
        ui->label_colNum->setText("0");
        ui->label_countNum->setText("0");
    }

    /*
    //获取当前坐标
    QModelIndex currentIndex = ui->tableView->currentIndex();
    int row = currentIndex.row()+1;
    int col = currentIndex.column()+1;
    //获取总行数
    int sum = ui->tableView->model()->rowCount();
    //获取选中的行数
    QItemSelectionModel *selectionModel = ui->tableView->selectionModel();
    int selectedRowcount = selectionModel->selectedRows().count()+1;
    ui->label_sumNum->setText(QString::number(sum));
    ui->label_rowNum->setText(QString::number(row));
    ui->label_colNum->setText(QString::number(col));
    ui->label_countNum->setText(QString::number(selectedRowcount));
*/
}

//点击表格中的数据
void stuInfoForm::on_tableView_clicked(const QModelIndex &index)
{
    int row = index.row();
    QString state = ui->tableView->model()->index(row,1).data().toString();
    ui->lineEdit_stuNum->setText(state);
    ui->lineEdit_stuName->setText(ui->tableView->model()->index(row,2).data().toString());
    ui->lineEdit_stuClass->setText(ui->tableView->model()->index(row,3).data().toString());
    ui->lineEdit_stuSex->setText(ui->tableView->model()->index(row,4).data().toString());
    ui->lineEdit_stuQQ->setText(ui->tableView->model()->index(row,5).data().toString());
    ui->lineEdit_stuUserName->setText(ui->tableView->model()->index(row,6).data().toString());
    ui->lineEdit_stuPassWord->setText(ui->tableView->model()->index(row,7).data().toString());
    updateStatusBar();
}


void stuInfoForm::on_comboBox_ItemStudent_currentIndexChanged(int index)
{
    fillStuInfo();
}

//点击搜索
void stuInfoForm::on_pushButton_Select_clicked()
{
    QString strSelect = ui->lineEdit_Select->text();
    //判断搜索框是否有输入
    if(strSelect.isEmpty()){
        QMessageBox::information(nullptr,"提示","请输入数据");
        return;
    }
    //设置查询模型
    proxyModel->setSourceModel(queryModel);
    //获取查询列
    int columnIndex=this->stuInfoMap[ui->comboBox_ItemSelect->itemText(ui->comboBox_ItemSelect->currentIndex())];
    qDebug() << "此时检索的列为：" << columnIndex;
        qDebug() << "此时comBox的索引为：" << ui->comboBox_ItemSelect->currentIndex();
    //获取查找值
    QString strSelectValue = ui->lineEdit_Select->text();
    qDebug() << "此时搜索框的值为：" << strSelectValue;
    //设置设置过滤规则
    proxyModel->setFilterKeyColumn(columnIndex);
    proxyModel->setFilterFixedString(strSelectValue);
    //将QSortFilterProxyModel与QTableView关联
    ui->tableView->setModel(proxyModel);
    ui->tableView->show();
    //在proxyModel中查找匹配的行
    QModelIndexList matches = proxyModel->match(proxyModel->index(0,columnIndex),Qt::DisplayRole, "1", -1, Qt::MatchExactly);
    if (!matches.isEmpty()) {
        // 找到匹配的行
        QModelIndex firstMatch = matches.first();

        // 选中匹配的行
        ui->tableView->selectRow(proxyModel->mapToSource(firstMatch).row());
    }
    updateStatusBar();
}

//排序
void stuInfoForm::on_pushButton_sort_clicked()
{
    if(selectionModel->hasSelection()){
        QModelIndexList selectedColumns = selectionModel->selectedColumns();
        if(!selectedColumns.isEmpty()){
            //获取第一个选中的列
            int selectedColumn = selectedColumns.first().column();
            qDebug() << "当前选中的列" << selectedColumn;
            ui->tableView->sortByColumn(selectedColumn,Qt::AscendingOrder);

        } else {
            qDebug() << "没有选中的列";
            ui->tableView->sortByColumn(0,Qt::AscendingOrder);
        }
    }
}

//修改
void stuInfoForm::on_pushButton_modify_clicked()
{

}


