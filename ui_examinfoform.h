/********************************************************************************
** Form generated from reading UI file 'examinfoform.ui'
**
** Created by: Qt User Interface Compiler version 6.5.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXAMINFOFORM_H
#define UI_EXAMINFOFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_examInfoForm
{
public:

    void setupUi(QWidget *examInfoForm)
    {
        if (examInfoForm->objectName().isEmpty())
            examInfoForm->setObjectName("examInfoForm");
        examInfoForm->resize(793, 547);

        retranslateUi(examInfoForm);

        QMetaObject::connectSlotsByName(examInfoForm);
    } // setupUi

    void retranslateUi(QWidget *examInfoForm)
    {
        examInfoForm->setWindowTitle(QCoreApplication::translate("examInfoForm", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class examInfoForm: public Ui_examInfoForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXAMINFOFORM_H
