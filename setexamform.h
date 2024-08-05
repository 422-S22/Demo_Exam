#ifndef SETEXAMFORM_H
#define SETEXAMFORM_H

#include <QWidget>

namespace Ui {
class setExamForm;
}

class setExamForm : public QWidget
{
    Q_OBJECT

public:
    explicit setExamForm(QWidget *parent = nullptr);
    ~setExamForm();

private:
    Ui::setExamForm *ui;
};

#endif // SETEXAMFORM_H
