#ifndef SUBJECTINFOFORM_H
#define SUBJECTINFOFORM_H

#include <QWidget>

namespace Ui {
class subjectInfoForm;
}

class subjectInfoForm : public QWidget
{
    Q_OBJECT

public:
    explicit subjectInfoForm(QWidget *parent = nullptr);
    ~subjectInfoForm();

private:
    Ui::subjectInfoForm *ui;
    void fullSubjectInfo();
};

#endif // SUBJECTINFOFORM_H
