#ifndef STUINFOFORM_H
#define STUINFOFORM_H
#include "mysql.h"
#include <QWidget>
#include <QSqlQueryModel>
#include <QSqlRecord>
#include <QItemSelectionModel>
#include <QDataWidgetMapper>
#include <QSqlTableModel>
#include <QStatusBar>
#include <QAbstractItemModel>
#include <QStandardItemModel>
#include <QSqlError>
#include <QSqlTableModel>
#include <QSqlQueryModel>
#include <QMap>
#include <QPair>
#include <QSortFilterProxyModel>
#include <QAbstractItemModel>

namespace Ui {
class stuInfoForm;
}

class stuInfoForm : public QWidget
{
    Q_OBJECT

public:
    explicit stuInfoForm(QWidget *parent = nullptr);
    ~stuInfoForm();
    //用数据库中的信息填充到tableView中
    void fillStuInfo();
    void updateStatusBar();

private slots:
    void on_tableView_clicked(const QModelIndex &index);

    void on_comboBox_ItemStudent_currentIndexChanged(int index);

    void on_pushButton_Select_clicked();

    void on_pushButton_sort_clicked();

    void on_pushButton_modify_clicked();

private:
    Ui::stuInfoForm *ui;
    int tchId;
    //定义查询模型
    QSqlQueryModel *queryModel;
    //定义状态栏
    QStatusBar *statusBar;
    MySql *mysql;
    QStandardItemModel *standarItemModel;
    QSqlTableModel *tableModel;
    //创建map映射
    QMap<QString,int>stuInfoMap;
    //创建QSortFilterProxyModel
    QSortFilterProxyModel *proxyModel;
    //
    QItemSelectionModel *selectionModel;
    //创建QTableView数据模型
    QAbstractItemModel *absItemModel;
};

#endif // STUINFOFORM_H
