#ifndef EXAMINFOFORM_H
#define EXAMINFOFORM_H

#include <QWidget>

namespace Ui {
class examInfoForm;
}

class examInfoForm : public QWidget
{
    Q_OBJECT

public:
    explicit examInfoForm(QWidget *parent = nullptr);
    ~examInfoForm();

private:
    Ui::examInfoForm *ui;
};

#endif // EXAMINFOFORM_H
