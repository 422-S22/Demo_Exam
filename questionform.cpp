#include "questionform.h"
#include "ui_questionform.h"

questionForm::questionForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::questionForm)
{
    ui->setupUi(this);
}

questionForm::~questionForm()
{
    delete ui;
}
