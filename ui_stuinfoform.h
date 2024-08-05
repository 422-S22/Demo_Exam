/********************************************************************************
** Form generated from reading UI file 'stuinfoform.ui'
**
** Created by: Qt User Interface Compiler version 6.5.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUINFOFORM_H
#define UI_STUINFOFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_stuInfoForm
{
public:
    QGridLayout *gridLayout_2;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_3;
    QComboBox *comboBox_ItemStudent;
    QLineEdit *lineEdit_Select;
    QComboBox *comboBox_ItemSelect;
    QPushButton *pushButton_Select;
    QSpacerItem *verticalSpacer;
    QFormLayout *formLayout;
    QLabel *label_stuNum;
    QLineEdit *lineEdit_stuNum;
    QLabel *label_stuName;
    QLineEdit *lineEdit_stuName;
    QLabel *label_stuSex;
    QLineEdit *lineEdit_stuSex;
    QLabel *label_stuClass;
    QLineEdit *lineEdit_stuClass;
    QLabel *label_stuQQ;
    QLineEdit *lineEdit_stuQQ;
    QLabel *label_stuUserName;
    QLineEdit *lineEdit_stuUserName;
    QLabel *label_stuPassWord;
    QLineEdit *lineEdit_stuPassWord;
    QSpacerItem *verticalSpacer_2;
    QPushButton *pushButton_modify;
    QPushButton *pushButton_sort;
    QCheckBox *checkBox_sortOder;
    QSpacerItem *verticalSpacer_3;
    QGridLayout *gridLayout;
    QTableView *tableView;
    QHBoxLayout *horizontalLayout;
    QLabel *label_sum;
    QLabel *label_sumNum;
    QLabel *label_count;
    QLabel *label_countNum;
    QLabel *label_row;
    QLabel *label_rowNum;
    QLabel *label_col;
    QLabel *label_colNum;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *stuInfoForm)
    {
        if (stuInfoForm->objectName().isEmpty())
            stuInfoForm->setObjectName("stuInfoForm");
        stuInfoForm->resize(859, 577);
        gridLayout_2 = new QGridLayout(stuInfoForm);
        gridLayout_2->setObjectName("gridLayout_2");
        groupBox = new QGroupBox(stuInfoForm);
        groupBox->setObjectName("groupBox");
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        groupBox->setMinimumSize(QSize(180, 0));
        groupBox->setMaximumSize(QSize(180, 16777215));
        groupBox->setSizeIncrement(QSize(280, 0));
        gridLayout_3 = new QGridLayout(groupBox);
        gridLayout_3->setObjectName("gridLayout_3");
        comboBox_ItemStudent = new QComboBox(groupBox);
        comboBox_ItemStudent->addItem(QString());
        comboBox_ItemStudent->addItem(QString());
        comboBox_ItemStudent->setObjectName("comboBox_ItemStudent");
        comboBox_ItemStudent->setEditable(false);

        gridLayout_3->addWidget(comboBox_ItemStudent, 0, 0, 1, 4);

        lineEdit_Select = new QLineEdit(groupBox);
        lineEdit_Select->setObjectName("lineEdit_Select");

        gridLayout_3->addWidget(lineEdit_Select, 1, 0, 1, 4);

        comboBox_ItemSelect = new QComboBox(groupBox);
        comboBox_ItemSelect->addItem(QString());
        comboBox_ItemSelect->addItem(QString());
        comboBox_ItemSelect->addItem(QString());
        comboBox_ItemSelect->addItem(QString());
        comboBox_ItemSelect->addItem(QString());
        comboBox_ItemSelect->setObjectName("comboBox_ItemSelect");

        gridLayout_3->addWidget(comboBox_ItemSelect, 2, 0, 1, 2);

        pushButton_Select = new QPushButton(groupBox);
        pushButton_Select->setObjectName("pushButton_Select");

        gridLayout_3->addWidget(pushButton_Select, 2, 3, 1, 1);

        verticalSpacer = new QSpacerItem(20, 26, QSizePolicy::Minimum, QSizePolicy::Minimum);

        gridLayout_3->addItem(verticalSpacer, 3, 2, 1, 2);

        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        label_stuNum = new QLabel(groupBox);
        label_stuNum->setObjectName("label_stuNum");

        formLayout->setWidget(0, QFormLayout::LabelRole, label_stuNum);

        lineEdit_stuNum = new QLineEdit(groupBox);
        lineEdit_stuNum->setObjectName("lineEdit_stuNum");

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEdit_stuNum);

        label_stuName = new QLabel(groupBox);
        label_stuName->setObjectName("label_stuName");

        formLayout->setWidget(1, QFormLayout::LabelRole, label_stuName);

        lineEdit_stuName = new QLineEdit(groupBox);
        lineEdit_stuName->setObjectName("lineEdit_stuName");

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEdit_stuName);

        label_stuSex = new QLabel(groupBox);
        label_stuSex->setObjectName("label_stuSex");

        formLayout->setWidget(2, QFormLayout::LabelRole, label_stuSex);

        lineEdit_stuSex = new QLineEdit(groupBox);
        lineEdit_stuSex->setObjectName("lineEdit_stuSex");

        formLayout->setWidget(2, QFormLayout::FieldRole, lineEdit_stuSex);

        label_stuClass = new QLabel(groupBox);
        label_stuClass->setObjectName("label_stuClass");

        formLayout->setWidget(3, QFormLayout::LabelRole, label_stuClass);

        lineEdit_stuClass = new QLineEdit(groupBox);
        lineEdit_stuClass->setObjectName("lineEdit_stuClass");

        formLayout->setWidget(3, QFormLayout::FieldRole, lineEdit_stuClass);

        label_stuQQ = new QLabel(groupBox);
        label_stuQQ->setObjectName("label_stuQQ");

        formLayout->setWidget(4, QFormLayout::LabelRole, label_stuQQ);

        lineEdit_stuQQ = new QLineEdit(groupBox);
        lineEdit_stuQQ->setObjectName("lineEdit_stuQQ");

        formLayout->setWidget(4, QFormLayout::FieldRole, lineEdit_stuQQ);

        label_stuUserName = new QLabel(groupBox);
        label_stuUserName->setObjectName("label_stuUserName");

        formLayout->setWidget(5, QFormLayout::LabelRole, label_stuUserName);

        lineEdit_stuUserName = new QLineEdit(groupBox);
        lineEdit_stuUserName->setObjectName("lineEdit_stuUserName");

        formLayout->setWidget(5, QFormLayout::FieldRole, lineEdit_stuUserName);

        label_stuPassWord = new QLabel(groupBox);
        label_stuPassWord->setObjectName("label_stuPassWord");

        formLayout->setWidget(6, QFormLayout::LabelRole, label_stuPassWord);

        lineEdit_stuPassWord = new QLineEdit(groupBox);
        lineEdit_stuPassWord->setObjectName("lineEdit_stuPassWord");

        formLayout->setWidget(6, QFormLayout::FieldRole, lineEdit_stuPassWord);


        gridLayout_3->addLayout(formLayout, 4, 0, 1, 4);

        verticalSpacer_2 = new QSpacerItem(20, 28, QSizePolicy::Minimum, QSizePolicy::Minimum);

        gridLayout_3->addItem(verticalSpacer_2, 5, 1, 1, 2);

        pushButton_modify = new QPushButton(groupBox);
        pushButton_modify->setObjectName("pushButton_modify");

        gridLayout_3->addWidget(pushButton_modify, 6, 0, 1, 4);

        pushButton_sort = new QPushButton(groupBox);
        pushButton_sort->setObjectName("pushButton_sort");

        gridLayout_3->addWidget(pushButton_sort, 7, 0, 1, 1);

        checkBox_sortOder = new QCheckBox(groupBox);
        checkBox_sortOder->setObjectName("checkBox_sortOder");
        checkBox_sortOder->setChecked(true);

        gridLayout_3->addWidget(checkBox_sortOder, 7, 2, 1, 2);

        verticalSpacer_3 = new QSpacerItem(20, 88, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer_3, 8, 1, 1, 2);


        gridLayout_2->addWidget(groupBox, 0, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        tableView = new QTableView(stuInfoForm);
        tableView->setObjectName("tableView");
        tableView->setMinimumSize(QSize(230, 0));

        gridLayout->addWidget(tableView, 0, 0, 1, 2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setSizeConstraint(QLayout::SetMinimumSize);
        label_sum = new QLabel(stuInfoForm);
        label_sum->setObjectName("label_sum");

        horizontalLayout->addWidget(label_sum);

        label_sumNum = new QLabel(stuInfoForm);
        label_sumNum->setObjectName("label_sumNum");
        label_sumNum->setLayoutDirection(Qt::LeftToRight);

        horizontalLayout->addWidget(label_sumNum);

        label_count = new QLabel(stuInfoForm);
        label_count->setObjectName("label_count");

        horizontalLayout->addWidget(label_count);

        label_countNum = new QLabel(stuInfoForm);
        label_countNum->setObjectName("label_countNum");
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_countNum->sizePolicy().hasHeightForWidth());
        label_countNum->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(label_countNum);

        label_row = new QLabel(stuInfoForm);
        label_row->setObjectName("label_row");

        horizontalLayout->addWidget(label_row);

        label_rowNum = new QLabel(stuInfoForm);
        label_rowNum->setObjectName("label_rowNum");

        horizontalLayout->addWidget(label_rowNum);

        label_col = new QLabel(stuInfoForm);
        label_col->setObjectName("label_col");

        horizontalLayout->addWidget(label_col);

        label_colNum = new QLabel(stuInfoForm);
        label_colNum->setObjectName("label_colNum");

        horizontalLayout->addWidget(label_colNum);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(428, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 1, 1, 1);


        retranslateUi(stuInfoForm);

        comboBox_ItemStudent->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(stuInfoForm);
    } // setupUi

    void retranslateUi(QWidget *stuInfoForm)
    {
        stuInfoForm->setWindowTitle(QCoreApplication::translate("stuInfoForm", "Form", nullptr));
        groupBox->setTitle(QCoreApplication::translate("stuInfoForm", "\347\256\241\347\220\206", nullptr));
        comboBox_ItemStudent->setItemText(0, QCoreApplication::translate("stuInfoForm", "\346\210\221\347\232\204\345\255\246\347\224\237", nullptr));
        comboBox_ItemStudent->setItemText(1, QCoreApplication::translate("stuInfoForm", "\346\211\200\346\234\211\345\255\246\347\224\237", nullptr));

        comboBox_ItemStudent->setPlaceholderText(QCoreApplication::translate("stuInfoForm", "\345\255\246\347\224\237", nullptr));
        comboBox_ItemSelect->setItemText(0, QCoreApplication::translate("stuInfoForm", "\345\255\246\345\217\267", nullptr));
        comboBox_ItemSelect->setItemText(1, QCoreApplication::translate("stuInfoForm", "\345\247\223\345\220\215", nullptr));
        comboBox_ItemSelect->setItemText(2, QCoreApplication::translate("stuInfoForm", "\347\217\255\347\272\247", nullptr));
        comboBox_ItemSelect->setItemText(3, QCoreApplication::translate("stuInfoForm", "QQ\345\217\267", nullptr));
        comboBox_ItemSelect->setItemText(4, QCoreApplication::translate("stuInfoForm", "\347\224\250\346\210\267\345\220\215", nullptr));

        pushButton_Select->setText(QCoreApplication::translate("stuInfoForm", "\346\220\234\347\264\242", nullptr));
        label_stuNum->setText(QCoreApplication::translate("stuInfoForm", "\345\255\246\345\217\267:", nullptr));
        label_stuName->setText(QCoreApplication::translate("stuInfoForm", "\345\247\223\345\220\215\357\274\232", nullptr));
        label_stuSex->setText(QCoreApplication::translate("stuInfoForm", "\346\200\247\345\210\253\357\274\232", nullptr));
        label_stuClass->setText(QCoreApplication::translate("stuInfoForm", "\347\217\255\347\272\247\357\274\232", nullptr));
        label_stuQQ->setText(QCoreApplication::translate("stuInfoForm", "QQ\357\274\232", nullptr));
        label_stuUserName->setText(QCoreApplication::translate("stuInfoForm", "\347\224\250\346\210\267\345\220\215\357\274\232", nullptr));
        label_stuPassWord->setText(QCoreApplication::translate("stuInfoForm", "\345\257\206\347\240\201\357\274\232", nullptr));
        pushButton_modify->setText(QCoreApplication::translate("stuInfoForm", "\344\277\256\346\224\271", nullptr));
        pushButton_sort->setText(QCoreApplication::translate("stuInfoForm", "\346\216\222\345\272\217", nullptr));
        checkBox_sortOder->setText(QCoreApplication::translate("stuInfoForm", "\345\215\207\345\272\217", nullptr));
        label_sum->setText(QCoreApplication::translate("stuInfoForm", "\346\200\273\346\225\260\357\274\232", nullptr));
        label_sumNum->setText(QString());
        label_count->setText(QCoreApplication::translate("stuInfoForm", "\350\256\241\346\225\260\357\274\232", nullptr));
        label_countNum->setText(QString());
        label_row->setText(QCoreApplication::translate("stuInfoForm", "\350\241\214\357\274\232", nullptr));
        label_rowNum->setText(QString());
        label_col->setText(QCoreApplication::translate("stuInfoForm", "\345\210\227\357\274\232", nullptr));
        label_colNum->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class stuInfoForm: public Ui_stuInfoForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUINFOFORM_H
