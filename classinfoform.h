#ifndef CLASSINFOFORM_H
#define CLASSINFOFORM_H
#include <QWidget>

namespace Ui {
class classInfoForm;
}

class classInfoForm : public QWidget
{
    Q_OBJECT

public:
    explicit classInfoForm(QWidget *parent = nullptr);
    ~classInfoForm();
    //填充表
    void fillTableView();
    //更新状态栏
    void updateStatus();

private slots:
    void on_tableView_clicked(const QModelIndex &index);

private:
    Ui::classInfoForm *ui;
};

#endif // CLASSINFOFORM_H
