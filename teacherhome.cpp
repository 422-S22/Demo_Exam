#include "teacherhome.h"
#include "ui_teacherhome.h"

teacherHome::teacherHome(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::teacherHome)
{
    mysql = new MySql();
    mysql->openDatabase();
    ui->setupUi(this);
    ui->toolBox->setCurrentIndex(0);
}

teacherHome::~teacherHome()
{
    mysql->closeDatabase();
    delete ui;
}

void teacherHome::on_toolBox_currentChanged(int index)
{

    if(index == 1)
    {
        m_stuInfoForm = new stuInfoForm(this);
        ui->stackedWidget->insertWidget(eStuInfoForm,m_stuInfoForm);
    }
    if(index == 2)
    {
        m_classInfoForm = new classInfoForm(this);
        ui->stackedWidget->insertWidget(eClassInfo,m_classInfoForm);
    }
    if(index == 3)
    {
        m_tchInfoForm = new tchInfoForm(this);
        ui->stackedWidget->insertWidget(eTchInfo,m_tchInfoForm);
    }
    if(index == 4)
    {
        m_subjectInfoForm = new subjectInfoForm(this);
        ui->stackedWidget->insertWidget(eSubjectInfo,m_subjectInfoForm);
    }
    if(index == 5)
    {
        m_scoreSelectForm = new scoreSelectForm(this);
        ui->stackedWidget->insertWidget(eScoreSelect,m_scoreSelectForm);
    }
    if(index == 6)
    {
        m_questionForm = new questionForm(this);
        ui->stackedWidget->insertWidget(eQuestion,m_questionForm);
    }
    if(index == 7)
    {
        m_createPaperForm = new createPaperForm(this);
        ui->stackedWidget->insertWidget(eCreatePaper,m_createPaperForm);
    }
    if(index == 8)
    {
        m_setExamForm = new setExamForm(this);
        ui->stackedWidget->insertWidget(eSetExam,m_setExamForm);
    }
    if(index == 9)
    {
        m_examInfoForm = new examInfoForm(this);
        ui->stackedWidget->insertWidget(eExamInfo,m_examInfoForm);
    }
    //根据index的值来确定显示界面
    ui->stackedWidget->setCurrentIndex(index);
}

