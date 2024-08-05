#ifndef TEACHERHOME_H
#define TEACHERHOME_H

#include "stuinfoform.h"
#include "tchinfoform.h"
#include "classinfoform.h"
#include "scoreselectform.h"
#include "questionform.h"
#include "createpaperform.h"
#include "setexamform.h"
#include "examinfoform.h"
#include "subjectinfoform.h"
#include "mysql.h"

#include <QMainWindow>


namespace Ui {
class teacherHome;

}

class teacherHome : public QMainWindow
{
    Q_OBJECT
private:
    enum enumTchItemList{eStuInfoForm =1,eClassInfo,eTchInfo,eSubjectInfo,eScoreSelect,eQuestion,eCreatePaper,eSetExam,eExamInfo};
    //学生信息界面
    stuInfoForm *m_stuInfoForm;
    //班级信息界面
    classInfoForm *m_classInfoForm;
    //教师信息界面
    tchInfoForm *m_tchInfoForm;
    //课程信息
    subjectInfoForm *m_subjectInfoForm;
    //分数界面
    scoreSelectForm *m_scoreSelectForm;
    //题库
    questionForm *m_questionForm;
    //组卷
    createPaperForm *m_createPaperForm;
    //发布考试
    setExamForm *m_setExamForm;
    //考试信息
    examInfoForm *m_examInfoForm;


public:
    explicit teacherHome(QWidget *parent = nullptr);
    ~teacherHome();

private slots:
    void on_toolBox_currentChanged(int index);

private:
    Ui::teacherHome *ui;
    MySql *mysql;
};

#endif // TEACHERHOME_H
