#ifndef QUESTIONFORM_H
#define QUESTIONFORM_H

#include <QWidget>

namespace Ui {
class questionForm;
}

class questionForm : public QWidget
{
    Q_OBJECT

public:
    explicit questionForm(QWidget *parent = nullptr);
    ~questionForm();

private:
    Ui::questionForm *ui;
};

#endif // QUESTIONFORM_H
