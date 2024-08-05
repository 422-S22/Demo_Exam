#include "examinfoform.h"
#include "ui_examinfoform.h"

examInfoForm::examInfoForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::examInfoForm)
{
    ui->setupUi(this);
}

examInfoForm::~examInfoForm()
{
    delete ui;
}
