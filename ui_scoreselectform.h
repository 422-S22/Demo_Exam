/********************************************************************************
** Form generated from reading UI file 'scoreselectform.ui'
**
** Created by: Qt User Interface Compiler version 6.5.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCORESELECTFORM_H
#define UI_SCORESELECTFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
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
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_scoreSelectForm
{
public:
    QGridLayout *gridLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QComboBox *comboBox_ItemClass;
    QLineEdit *lineEdit_Select;
    QComboBox *comboBox_ItemSelect;
    QPushButton *pushButton_Select;
    QSpacerItem *verticalSpacer;
    QFormLayout *formLayout;
    QLabel *label_classNum;
    QLineEdit *lineEdit_classNum;
    QLabel *label_className;
    QLineEdit *lineEdit_className;
    QLabel *label_classStuAmount;
    QLineEdit *lineEdit_classStuAmount;
    QLabel *label_classTchAmount;
    QLineEdit *lineEdit_classTchAmount;
    QLabel *label_classSubAmount;
    QLineEdit *lineEdit_classSubAmount;
    QSpacerItem *verticalSpacer_2;
    QVBoxLayout *verticalLayout;
    QTableView *tableView;
    QHBoxLayout *horizontalLayout_2;
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

    void setupUi(QWidget *scoreSelectForm)
    {
        if (scoreSelectForm->objectName().isEmpty())
            scoreSelectForm->setObjectName("scoreSelectForm");
        scoreSelectForm->resize(914, 604);
        gridLayout = new QGridLayout(scoreSelectForm);
        gridLayout->setObjectName("gridLayout");
        groupBox = new QGroupBox(scoreSelectForm);
        groupBox->setObjectName("groupBox");
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        groupBox->setMinimumSize(QSize(200, 0));
        groupBox->setMaximumSize(QSize(200, 16777215));
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName("gridLayout_2");
        comboBox_ItemClass = new QComboBox(groupBox);
        comboBox_ItemClass->addItem(QString());
        comboBox_ItemClass->addItem(QString());
        comboBox_ItemClass->setObjectName("comboBox_ItemClass");
        comboBox_ItemClass->setEditable(false);

        gridLayout_2->addWidget(comboBox_ItemClass, 0, 0, 1, 2);

        lineEdit_Select = new QLineEdit(groupBox);
        lineEdit_Select->setObjectName("lineEdit_Select");

        gridLayout_2->addWidget(lineEdit_Select, 1, 0, 1, 2);

        comboBox_ItemSelect = new QComboBox(groupBox);
        comboBox_ItemSelect->addItem(QString());
        comboBox_ItemSelect->addItem(QString());
        comboBox_ItemSelect->addItem(QString());
        comboBox_ItemSelect->setObjectName("comboBox_ItemSelect");

        gridLayout_2->addWidget(comboBox_ItemSelect, 2, 0, 1, 1);

        pushButton_Select = new QPushButton(groupBox);
        pushButton_Select->setObjectName("pushButton_Select");

        gridLayout_2->addWidget(pushButton_Select, 2, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Minimum);

        gridLayout_2->addItem(verticalSpacer, 3, 0, 1, 1);

        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        label_classNum = new QLabel(groupBox);
        label_classNum->setObjectName("label_classNum");

        formLayout->setWidget(0, QFormLayout::LabelRole, label_classNum);

        lineEdit_classNum = new QLineEdit(groupBox);
        lineEdit_classNum->setObjectName("lineEdit_classNum");

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEdit_classNum);

        label_className = new QLabel(groupBox);
        label_className->setObjectName("label_className");

        formLayout->setWidget(1, QFormLayout::LabelRole, label_className);

        lineEdit_className = new QLineEdit(groupBox);
        lineEdit_className->setObjectName("lineEdit_className");

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEdit_className);

        label_classStuAmount = new QLabel(groupBox);
        label_classStuAmount->setObjectName("label_classStuAmount");

        formLayout->setWidget(2, QFormLayout::LabelRole, label_classStuAmount);

        lineEdit_classStuAmount = new QLineEdit(groupBox);
        lineEdit_classStuAmount->setObjectName("lineEdit_classStuAmount");

        formLayout->setWidget(2, QFormLayout::FieldRole, lineEdit_classStuAmount);

        label_classTchAmount = new QLabel(groupBox);
        label_classTchAmount->setObjectName("label_classTchAmount");

        formLayout->setWidget(3, QFormLayout::LabelRole, label_classTchAmount);

        lineEdit_classTchAmount = new QLineEdit(groupBox);
        lineEdit_classTchAmount->setObjectName("lineEdit_classTchAmount");

        formLayout->setWidget(3, QFormLayout::FieldRole, lineEdit_classTchAmount);

        label_classSubAmount = new QLabel(groupBox);
        label_classSubAmount->setObjectName("label_classSubAmount");

        formLayout->setWidget(4, QFormLayout::LabelRole, label_classSubAmount);

        lineEdit_classSubAmount = new QLineEdit(groupBox);
        lineEdit_classSubAmount->setObjectName("lineEdit_classSubAmount");

        formLayout->setWidget(4, QFormLayout::FieldRole, lineEdit_classSubAmount);


        gridLayout_2->addLayout(formLayout, 4, 0, 1, 2);

        verticalSpacer_2 = new QSpacerItem(20, 108, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_2, 5, 0, 1, 1);


        gridLayout->addWidget(groupBox, 0, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        tableView = new QTableView(scoreSelectForm);
        tableView->setObjectName("tableView");

        verticalLayout->addWidget(tableView);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_sum = new QLabel(scoreSelectForm);
        label_sum->setObjectName("label_sum");

        horizontalLayout->addWidget(label_sum);

        label_sumNum = new QLabel(scoreSelectForm);
        label_sumNum->setObjectName("label_sumNum");
        label_sumNum->setLayoutDirection(Qt::LeftToRight);

        horizontalLayout->addWidget(label_sumNum);

        label_count = new QLabel(scoreSelectForm);
        label_count->setObjectName("label_count");

        horizontalLayout->addWidget(label_count);

        label_countNum = new QLabel(scoreSelectForm);
        label_countNum->setObjectName("label_countNum");
        sizePolicy.setHeightForWidth(label_countNum->sizePolicy().hasHeightForWidth());
        label_countNum->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(label_countNum);

        label_row = new QLabel(scoreSelectForm);
        label_row->setObjectName("label_row");

        horizontalLayout->addWidget(label_row);

        label_rowNum = new QLabel(scoreSelectForm);
        label_rowNum->setObjectName("label_rowNum");

        horizontalLayout->addWidget(label_rowNum);

        label_col = new QLabel(scoreSelectForm);
        label_col->setObjectName("label_col");

        horizontalLayout->addWidget(label_col);

        label_colNum = new QLabel(scoreSelectForm);
        label_colNum->setObjectName("label_colNum");

        horizontalLayout->addWidget(label_colNum);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 2);
        horizontalLayout->setStretch(2, 1);
        horizontalLayout->setStretch(3, 2);
        horizontalLayout->setStretch(4, 1);
        horizontalLayout->setStretch(5, 2);
        horizontalLayout->setStretch(6, 1);
        horizontalLayout->setStretch(7, 2);

        horizontalLayout_2->addLayout(horizontalLayout);

        horizontalSpacer = new QSpacerItem(448, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout_2);


        gridLayout->addLayout(verticalLayout, 0, 1, 1, 1);


        retranslateUi(scoreSelectForm);

        comboBox_ItemClass->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(scoreSelectForm);
    } // setupUi

    void retranslateUi(QWidget *scoreSelectForm)
    {
        scoreSelectForm->setWindowTitle(QCoreApplication::translate("scoreSelectForm", "Form", nullptr));
        groupBox->setTitle(QCoreApplication::translate("scoreSelectForm", "\347\256\241\347\220\206", nullptr));
        comboBox_ItemClass->setItemText(0, QCoreApplication::translate("scoreSelectForm", "\346\210\221\347\232\204\345\255\246\347\224\237", nullptr));
        comboBox_ItemClass->setItemText(1, QCoreApplication::translate("scoreSelectForm", "\346\211\200\346\234\211\345\255\246\347\224\237", nullptr));

        comboBox_ItemClass->setPlaceholderText(QCoreApplication::translate("scoreSelectForm", "\351\200\211\346\213\251\345\255\246\347\224\237", nullptr));
        comboBox_ItemSelect->setItemText(0, QCoreApplication::translate("scoreSelectForm", "\347\217\255\347\272\247\345\217\267", nullptr));
        comboBox_ItemSelect->setItemText(1, QCoreApplication::translate("scoreSelectForm", "\347\217\255\347\272\247\345\220\215", nullptr));
        comboBox_ItemSelect->setItemText(2, QCoreApplication::translate("scoreSelectForm", "\350\201\214\345\267\245\345\217\267", nullptr));

        pushButton_Select->setText(QCoreApplication::translate("scoreSelectForm", "\346\220\234\347\264\242", nullptr));
        label_classNum->setText(QCoreApplication::translate("scoreSelectForm", "\347\217\255\347\272\247\345\217\267:", nullptr));
        label_className->setText(QCoreApplication::translate("scoreSelectForm", "\347\217\255\347\272\247\345\220\215:", nullptr));
        label_classStuAmount->setText(QCoreApplication::translate("scoreSelectForm", "\344\272\272\346\225\260\357\274\232", nullptr));
        label_classTchAmount->setText(QCoreApplication::translate("scoreSelectForm", "\346\225\231\345\270\210\357\274\232", nullptr));
        label_classSubAmount->setText(QCoreApplication::translate("scoreSelectForm", "\350\257\276\347\250\213\357\274\232", nullptr));
        label_sum->setText(QCoreApplication::translate("scoreSelectForm", "\346\200\273\346\225\260\357\274\232", nullptr));
        label_sumNum->setText(QString());
        label_count->setText(QCoreApplication::translate("scoreSelectForm", "\350\256\241\346\225\260\357\274\232", nullptr));
        label_countNum->setText(QString());
        label_row->setText(QCoreApplication::translate("scoreSelectForm", "\350\241\214\357\274\232", nullptr));
        label_rowNum->setText(QString());
        label_col->setText(QCoreApplication::translate("scoreSelectForm", "\345\210\227\357\274\232", nullptr));
        label_colNum->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class scoreSelectForm: public Ui_scoreSelectForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCORESELECTFORM_H
