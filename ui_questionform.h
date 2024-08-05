/********************************************************************************
** Form generated from reading UI file 'questionform.ui'
**
** Created by: Qt User Interface Compiler version 6.5.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QUESTIONFORM_H
#define UI_QUESTIONFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_questionForm
{
public:

    void setupUi(QWidget *questionForm)
    {
        if (questionForm->objectName().isEmpty())
            questionForm->setObjectName("questionForm");
        questionForm->resize(745, 552);

        retranslateUi(questionForm);

        QMetaObject::connectSlotsByName(questionForm);
    } // setupUi

    void retranslateUi(QWidget *questionForm)
    {
        questionForm->setWindowTitle(QCoreApplication::translate("questionForm", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class questionForm: public Ui_questionForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QUESTIONFORM_H
