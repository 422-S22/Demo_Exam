#ifndef TCHINFOFORM_H
#define TCHINFOFORM_H

#include <QWidget>
#include <QStatusBar>

namespace Ui {
class tchInfoForm;
}

class tchInfoForm : public QWidget
{
    Q_OBJECT

public:
    explicit tchInfoForm(QWidget *parent = nullptr);
    ~tchInfoForm();
    void fullTchInfo();


private:
    Ui::tchInfoForm *ui;
};

#endif // TCHINFOFORM_H
