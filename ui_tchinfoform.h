/********************************************************************************
** Form generated from reading UI file 'tchinfoform.ui'
**
** Created by: Qt User Interface Compiler version 6.5.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TCHINFOFORM_H
#define UI_TCHINFOFORM_H

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

class Ui_tchInfoForm
{
public:
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *lineEdit_Select;
    QComboBox *comboBox_ItemSelect;
    QPushButton *pushButton_Select;
    QSpacerItem *verticalSpacer;
    QFormLayout *formLayout;
    QLabel *label_tchNum;
    QLineEdit *lineEdit_tchNum;
    QLabel *label_tchName;
    QLineEdit *lineEdit_tchName;
    QLabel *label_tchSex;
    QLineEdit *lineEdit_tchSex;
    QLabel *label_tchQQ;
    QLineEdit *lineEdit_tchQQ;
    QLabel *label_tchUserName;
    QLineEdit *lineEdit_tchUserName;
    QLabel *label_tchPassWord;
    QLineEdit *lineEdit_tchPassWord;
    QSpacerItem *verticalSpacer_2;
    QTableView *tableView;

    void setupUi(QWidget *tchInfoForm)
    {
        if (tchInfoForm->objectName().isEmpty())
            tchInfoForm->setObjectName("tchInfoForm");
        tchInfoForm->resize(662, 511);
        groupBox = new QGroupBox(tchInfoForm);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(10, 10, 188, 453));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName("gridLayout");
        label = new QLabel(groupBox);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 0, 1, 2);

        lineEdit_Select = new QLineEdit(groupBox);
        lineEdit_Select->setObjectName("lineEdit_Select");

        gridLayout->addWidget(lineEdit_Select, 1, 0, 1, 2);

        comboBox_ItemSelect = new QComboBox(groupBox);
        comboBox_ItemSelect->addItem(QString());
        comboBox_ItemSelect->addItem(QString());
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
        label_tchNum = new QLabel(groupBox);
        label_tchNum->setObjectName("label_tchNum");

        formLayout->setWidget(0, QFormLayout::LabelRole, label_tchNum);

        lineEdit_tchNum = new QLineEdit(groupBox);
        lineEdit_tchNum->setObjectName("lineEdit_tchNum");

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEdit_tchNum);

        label_tchName = new QLabel(groupBox);
        label_tchName->setObjectName("label_tchName");

        formLayout->setWidget(1, QFormLayout::LabelRole, label_tchName);

        lineEdit_tchName = new QLineEdit(groupBox);
        lineEdit_tchName->setObjectName("lineEdit_tchName");

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEdit_tchName);

        label_tchSex = new QLabel(groupBox);
        label_tchSex->setObjectName("label_tchSex");

        formLayout->setWidget(2, QFormLayout::LabelRole, label_tchSex);

        lineEdit_tchSex = new QLineEdit(groupBox);
        lineEdit_tchSex->setObjectName("lineEdit_tchSex");

        formLayout->setWidget(2, QFormLayout::FieldRole, lineEdit_tchSex);

        label_tchQQ = new QLabel(groupBox);
        label_tchQQ->setObjectName("label_tchQQ");

        formLayout->setWidget(3, QFormLayout::LabelRole, label_tchQQ);

        lineEdit_tchQQ = new QLineEdit(groupBox);
        lineEdit_tchQQ->setObjectName("lineEdit_tchQQ");

        formLayout->setWidget(3, QFormLayout::FieldRole, lineEdit_tchQQ);

        label_tchUserName = new QLabel(groupBox);
        label_tchUserName->setObjectName("label_tchUserName");

        formLayout->setWidget(4, QFormLayout::LabelRole, label_tchUserName);

        lineEdit_tchUserName = new QLineEdit(groupBox);
        lineEdit_tchUserName->setObjectName("lineEdit_tchUserName");

        formLayout->setWidget(4, QFormLayout::FieldRole, lineEdit_tchUserName);

        label_tchPassWord = new QLabel(groupBox);
        label_tchPassWord->setObjectName("label_tchPassWord");

        formLayout->setWidget(5, QFormLayout::LabelRole, label_tchPassWord);

        lineEdit_tchPassWord = new QLineEdit(groupBox);
        lineEdit_tchPassWord->setObjectName("lineEdit_tchPassWord");

        formLayout->setWidget(5, QFormLayout::FieldRole, lineEdit_tchPassWord);


        gridLayout->addLayout(formLayout, 4, 0, 1, 2);

        verticalSpacer_2 = new QSpacerItem(20, 108, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 5, 0, 1, 1);

        tableView = new QTableView(tchInfoForm);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(204, 10, 451, 451));

        retranslateUi(tchInfoForm);

        QMetaObject::connectSlotsByName(tchInfoForm);
    } // setupUi

    void retranslateUi(QWidget *tchInfoForm)
    {
        tchInfoForm->setWindowTitle(QCoreApplication::translate("tchInfoForm", "Form", nullptr));
        groupBox->setTitle(QCoreApplication::translate("tchInfoForm", "\347\256\241\347\220\206", nullptr));
        label->setText(QCoreApplication::translate("tchInfoForm", "\350\201\214\345\267\245\344\277\241\346\201\257", nullptr));
        comboBox_ItemSelect->setItemText(0, QCoreApplication::translate("tchInfoForm", "\350\201\214\345\267\245\345\217\267", nullptr));
        comboBox_ItemSelect->setItemText(1, QCoreApplication::translate("tchInfoForm", "\345\247\223\345\220\215", nullptr));
        comboBox_ItemSelect->setItemText(2, QCoreApplication::translate("tchInfoForm", "\346\200\247\345\210\253", nullptr));
        comboBox_ItemSelect->setItemText(3, QCoreApplication::translate("tchInfoForm", "QQ\345\217\267", nullptr));
        comboBox_ItemSelect->setItemText(4, QCoreApplication::translate("tchInfoForm", "\347\224\250\346\210\267\345\220\215", nullptr));

        pushButton_Select->setText(QCoreApplication::translate("tchInfoForm", "\346\220\234\347\264\242", nullptr));
        label_tchNum->setText(QCoreApplication::translate("tchInfoForm", "\350\201\214\345\267\245\345\217\267:", nullptr));
        label_tchName->setText(QCoreApplication::translate("tchInfoForm", "\345\247\223\345\220\215\357\274\232", nullptr));
        label_tchSex->setText(QCoreApplication::translate("tchInfoForm", "\346\200\247\345\210\253\357\274\232", nullptr));
        label_tchQQ->setText(QCoreApplication::translate("tchInfoForm", "QQ\357\274\232", nullptr));
        label_tchUserName->setText(QCoreApplication::translate("tchInfoForm", "\347\224\250\346\210\267\345\220\215\357\274\232", nullptr));
        label_tchPassWord->setText(QCoreApplication::translate("tchInfoForm", "\345\257\206\347\240\201\357\274\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class tchInfoForm: public Ui_tchInfoForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TCHINFOFORM_H
