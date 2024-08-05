/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 6.5.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_login
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QFormLayout *formLayout;
    QLabel *labelUserName;
    QLineEdit *lineEditUserName;
    QLabel *labelPassWord;
    QLineEdit *lineEditPassWord;
    QLabel *labelStatus;
    QComboBox *comboBoxStatus;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButtonLogin;
    QPushButton *pushButtonQuit;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *login)
    {
        if (login->objectName().isEmpty())
            login->setObjectName("login");
        login->resize(460, 225);
        verticalLayout = new QVBoxLayout(login);
        verticalLayout->setObjectName("verticalLayout");
        groupBox = new QGroupBox(login);
        groupBox->setObjectName("groupBox");
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName("gridLayout");
        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        labelUserName = new QLabel(groupBox);
        labelUserName->setObjectName("labelUserName");
        QFont font;
        font.setPointSize(11);
        labelUserName->setFont(font);
        labelUserName->setTextFormat(Qt::AutoText);

        formLayout->setWidget(0, QFormLayout::LabelRole, labelUserName);

        lineEditUserName = new QLineEdit(groupBox);
        lineEditUserName->setObjectName("lineEditUserName");

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEditUserName);

        labelPassWord = new QLabel(groupBox);
        labelPassWord->setObjectName("labelPassWord");
        labelPassWord->setFont(font);
        labelPassWord->setTextFormat(Qt::AutoText);

        formLayout->setWidget(1, QFormLayout::LabelRole, labelPassWord);

        lineEditPassWord = new QLineEdit(groupBox);
        lineEditPassWord->setObjectName("lineEditPassWord");
        lineEditPassWord->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEditPassWord);

        labelStatus = new QLabel(groupBox);
        labelStatus->setObjectName("labelStatus");
        labelStatus->setFont(font);
        labelStatus->setTextFormat(Qt::AutoText);

        formLayout->setWidget(2, QFormLayout::LabelRole, labelStatus);

        comboBoxStatus = new QComboBox(groupBox);
        comboBoxStatus->addItem(QString());
        comboBoxStatus->addItem(QString());
        comboBoxStatus->setObjectName("comboBoxStatus");
        comboBoxStatus->setEditable(false);
        comboBoxStatus->setMaxVisibleItems(10);
        comboBoxStatus->setMaxCount(2147483647);

        formLayout->setWidget(2, QFormLayout::FieldRole, comboBoxStatus);


        gridLayout->addLayout(formLayout, 0, 0, 1, 3);

        horizontalSpacer = new QSpacerItem(243, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 0, 1, 1);

        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName("pushButton");
        QFont font1;
        font1.setPointSize(8);
        pushButton->setFont(font1);
        pushButton->setFlat(true);

        gridLayout->addWidget(pushButton, 1, 1, 1, 1);

        pushButton_2 = new QPushButton(groupBox);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setFont(font1);
        pushButton_2->setFlat(true);

        gridLayout->addWidget(pushButton_2, 1, 2, 1, 1);


        verticalLayout->addWidget(groupBox);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        pushButtonLogin = new QPushButton(login);
        pushButtonLogin->setObjectName("pushButtonLogin");

        horizontalLayout_2->addWidget(pushButtonLogin);

        pushButtonQuit = new QPushButton(login);
        pushButtonQuit->setObjectName("pushButtonQuit");

        horizontalLayout_2->addWidget(pushButtonQuit);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalSpacer = new QSpacerItem(20, 26, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(login);

        comboBoxStatus->setCurrentIndex(-1);
        pushButton->setDefault(false);


        QMetaObject::connectSlotsByName(login);
    } // setupUi

    void retranslateUi(QWidget *login)
    {
        login->setWindowTitle(QCoreApplication::translate("login", "Form", nullptr));
        groupBox->setTitle(QString());
        labelUserName->setText(QCoreApplication::translate("login", "\350\264\246\345\217\267\357\274\232", nullptr));
        labelPassWord->setText(QCoreApplication::translate("login", "\345\257\206\347\240\201\357\274\232", nullptr));
        labelStatus->setText(QCoreApplication::translate("login", "\350\272\253\344\273\275\357\274\232", nullptr));
        comboBoxStatus->setItemText(0, QCoreApplication::translate("login", "\345\255\246\347\224\237", nullptr));
        comboBoxStatus->setItemText(1, QCoreApplication::translate("login", "\346\225\231\345\270\210", nullptr));

        comboBoxStatus->setCurrentText(QString());
        comboBoxStatus->setPlaceholderText(QCoreApplication::translate("login", "\350\257\267\351\200\211\346\213\251\350\272\253\344\273\275", nullptr));
        pushButton->setText(QCoreApplication::translate("login", "\346\263\250\345\206\214", nullptr));
        pushButton_2->setText(QCoreApplication::translate("login", "\345\277\230\350\256\260\345\257\206\347\240\201", nullptr));
        pushButtonLogin->setText(QCoreApplication::translate("login", "\347\231\273\345\275\225", nullptr));
        pushButtonQuit->setText(QCoreApplication::translate("login", "\351\200\200\345\207\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class login: public Ui_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
