/********************************************************************************
** Form generated from reading UI file 'subjectinfoform.ui'
**
** Created by: Qt User Interface Compiler version 6.5.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SUBJECTINFOFORM_H
#define UI_SUBJECTINFOFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_subjectInfoForm
{
public:
    QGridLayout *gridLayout_2;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLineEdit *lineEdit_Select;
    QComboBox *comboBox_ItemSelect;
    QPushButton *pushButton_Select;
    QSpacerItem *verticalSpacer;
    QFormLayout *formLayout;
    QLabel *label_subjectNum;
    QLineEdit *lineEdit_subjectNum;
    QLabel *label_subjectName;
    QLineEdit *lineEdit_subjectName;
    QLabel *label_subjectTchAmount;
    QLineEdit *lineEdit_subjectTchAmount;
    QLabel *label_classAmount;
    QLineEdit *lineEdit_classAmount;
    QSpacerItem *verticalSpacer_2;
    QComboBox *comboBox_ItemSubject;
    QSpacerItem *horizontalSpacer;
    QTableView *tableView;

    void setupUi(QWidget *subjectInfoForm)
    {
        if (subjectInfoForm->objectName().isEmpty())
            subjectInfoForm->setObjectName("subjectInfoForm");
        subjectInfoForm->resize(748, 560);
        gridLayout_2 = new QGridLayout(subjectInfoForm);
        gridLayout_2->setObjectName("gridLayout_2");
        groupBox = new QGroupBox(subjectInfoForm);
        groupBox->setObjectName("groupBox");
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName("gridLayout");
        lineEdit_Select = new QLineEdit(groupBox);
        lineEdit_Select->setObjectName("lineEdit_Select");

        gridLayout->addWidget(lineEdit_Select, 1, 0, 1, 2);

        comboBox_ItemSelect = new QComboBox(groupBox);
        comboBox_ItemSelect->addItem(QString());
        comboBox_ItemSelect->addItem(QString());
        comboBox_ItemSelect->addItem(QString());
        comboBox_ItemSelect->setObjectName("comboBox_ItemSelect");

        gridLayout->addWidget(comboBox_ItemSelect, 2, 0, 1, 1);

        pushButton_Select = new QPushButton(groupBox);
        pushButton_Select->setObjectName("pushButton_Select");

        gridLayout->addWidget(pushButton_Select, 2, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Minimum);

        gridLayout->addItem(verticalSpacer, 3, 0, 1, 1);

        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        label_subjectNum = new QLabel(groupBox);
        label_subjectNum->setObjectName("label_subjectNum");

        formLayout->setWidget(0, QFormLayout::LabelRole, label_subjectNum);

        lineEdit_subjectNum = new QLineEdit(groupBox);
        lineEdit_subjectNum->setObjectName("lineEdit_subjectNum");

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEdit_subjectNum);

        label_subjectName = new QLabel(groupBox);
        label_subjectName->setObjectName("label_subjectName");

        formLayout->setWidget(1, QFormLayout::LabelRole, label_subjectName);

        lineEdit_subjectName = new QLineEdit(groupBox);
        lineEdit_subjectName->setObjectName("lineEdit_subjectName");

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEdit_subjectName);

        label_subjectTchAmount = new QLabel(groupBox);
        label_subjectTchAmount->setObjectName("label_subjectTchAmount");

        formLayout->setWidget(2, QFormLayout::LabelRole, label_subjectTchAmount);

        lineEdit_subjectTchAmount = new QLineEdit(groupBox);
        lineEdit_subjectTchAmount->setObjectName("lineEdit_subjectTchAmount");

        formLayout->setWidget(2, QFormLayout::FieldRole, lineEdit_subjectTchAmount);

        label_classAmount = new QLabel(groupBox);
        label_classAmount->setObjectName("label_classAmount");

        formLayout->setWidget(3, QFormLayout::LabelRole, label_classAmount);

        lineEdit_classAmount = new QLineEdit(groupBox);
        lineEdit_classAmount->setObjectName("lineEdit_classAmount");

        formLayout->setWidget(3, QFormLayout::FieldRole, lineEdit_classAmount);


        gridLayout->addLayout(formLayout, 4, 0, 1, 2);

        verticalSpacer_2 = new QSpacerItem(20, 108, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 5, 0, 1, 1);

        comboBox_ItemSubject = new QComboBox(groupBox);
        comboBox_ItemSubject->addItem(QString());
        comboBox_ItemSubject->addItem(QString());
        comboBox_ItemSubject->setObjectName("comboBox_ItemSubject");
        comboBox_ItemSubject->setEditable(false);

        gridLayout->addWidget(comboBox_ItemSubject, 0, 0, 1, 2);


        gridLayout_2->addWidget(groupBox, 0, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(13, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 0, 1, 1, 1);

        tableView = new QTableView(subjectInfoForm);
        tableView->setObjectName("tableView");

        gridLayout_2->addWidget(tableView, 0, 2, 1, 1);


        retranslateUi(subjectInfoForm);

        comboBox_ItemSubject->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(subjectInfoForm);
    } // setupUi

    void retranslateUi(QWidget *subjectInfoForm)
    {
        subjectInfoForm->setWindowTitle(QCoreApplication::translate("subjectInfoForm", "Form", nullptr));
        groupBox->setTitle(QCoreApplication::translate("subjectInfoForm", "\347\256\241\347\220\206", nullptr));
        comboBox_ItemSelect->setItemText(0, QCoreApplication::translate("subjectInfoForm", "\347\217\255\347\272\247\345\217\267", nullptr));
        comboBox_ItemSelect->setItemText(1, QCoreApplication::translate("subjectInfoForm", "\347\217\255\347\272\247\345\220\215", nullptr));
        comboBox_ItemSelect->setItemText(2, QCoreApplication::translate("subjectInfoForm", "\350\201\214\345\267\245\345\217\267", nullptr));

        pushButton_Select->setText(QCoreApplication::translate("subjectInfoForm", "\346\220\234\347\264\242", nullptr));
        label_subjectNum->setText(QCoreApplication::translate("subjectInfoForm", "\347\247\221\347\233\256\347\274\226\345\217\267:", nullptr));
        label_subjectName->setText(QCoreApplication::translate("subjectInfoForm", "\347\247\221\347\233\256\345\220\215:", nullptr));
        label_subjectTchAmount->setText(QCoreApplication::translate("subjectInfoForm", "\346\216\210\350\257\276\346\225\231\345\270\210\357\274\232", nullptr));
        label_classAmount->setText(QCoreApplication::translate("subjectInfoForm", "\344\270\212\350\257\276\347\217\255\347\272\247\357\274\232", nullptr));
        comboBox_ItemSubject->setItemText(0, QCoreApplication::translate("subjectInfoForm", "\346\210\221\347\232\204\350\257\276\347\250\213", nullptr));
        comboBox_ItemSubject->setItemText(1, QCoreApplication::translate("subjectInfoForm", "\346\211\200\346\234\211\350\257\276\347\250\213", nullptr));

        comboBox_ItemSubject->setPlaceholderText(QCoreApplication::translate("subjectInfoForm", "\351\200\211\346\213\251\350\257\276\347\250\213", nullptr));
    } // retranslateUi

};

namespace Ui {
    class subjectInfoForm: public Ui_subjectInfoForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUBJECTINFOFORM_H
