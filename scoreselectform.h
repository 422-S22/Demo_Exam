#ifndef SCORESELECTFORM_H
#define SCORESELECTFORM_H

#include <QWidget>
#include<QSqlTableModel>
#include<QSqlQueryModel>

namespace Ui {
class scoreSelectForm;
}

class scoreSelectForm : public QWidget
{
    Q_OBJECT

public:
    explicit scoreSelectForm(QWidget *parent = nullptr);
    ~scoreSelectForm();
    void fullScoreSelect();

private:
    int stuId;
    //创建表模型
    QSqlTableModel* tableModel;
    //创建查询模型
    QSqlQueryModel* queryModel;
    Ui::scoreSelectForm *ui;

};

#endif // SCORESELECTFORM_H
