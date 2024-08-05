#include "createpaperform.h"
#include "ui_createpaperform.h"

createPaperForm::createPaperForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::createPaperForm)
{
    ui->setupUi(this);
}

createPaperForm::~createPaperForm()
{
    delete ui;
}
