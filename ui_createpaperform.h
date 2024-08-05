/********************************************************************************
** Form generated from reading UI file 'createpaperform.ui'
**
** Created by: Qt User Interface Compiler version 6.5.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATEPAPERFORM_H
#define UI_CREATEPAPERFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_createPaperForm
{
public:

    void setupUi(QWidget *createPaperForm)
    {
        if (createPaperForm->objectName().isEmpty())
            createPaperForm->setObjectName("createPaperForm");
        createPaperForm->resize(920, 594);

        retranslateUi(createPaperForm);

        QMetaObject::connectSlotsByName(createPaperForm);
    } // setupUi

    void retranslateUi(QWidget *createPaperForm)
    {
        createPaperForm->setWindowTitle(QCoreApplication::translate("createPaperForm", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class createPaperForm: public Ui_createPaperForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATEPAPERFORM_H
