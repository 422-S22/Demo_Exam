#include "setexamform.h"
#include "ui_setexamform.h"

setExamForm::setExamForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::setExamForm)
{
    ui->setupUi(this);
}

setExamForm::~setExamForm()
{
    delete ui;
}
