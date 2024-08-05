/********************************************************************************
** Form generated from reading UI file 'teacherhome.ui'
**
** Created by: Qt User Interface Compiler version 6.5.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEACHERHOME_H
#define UI_TEACHERHOME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_teacherHome
{
public:
    QWidget *centralwidget;
    QFormLayout *formLayout;
    QToolBox *toolBox;
    QWidget *page_10;
    QWidget *page;
    QWidget *page_3;
    QWidget *page_4;
    QWidget *page_11;
    QWidget *page_5;
    QWidget *page_2;
    QWidget *page_6;
    QWidget *page_7;
    QWidget *page_8;
    QStackedWidget *stackedWidget;
    QWidget *page_9;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *teacherHome)
    {
        if (teacherHome->objectName().isEmpty())
            teacherHome->setObjectName("teacherHome");
        teacherHome->resize(694, 443);
        centralwidget = new QWidget(teacherHome);
        centralwidget->setObjectName("centralwidget");
        formLayout = new QFormLayout(centralwidget);
        formLayout->setObjectName("formLayout");
        toolBox = new QToolBox(centralwidget);
        toolBox->setObjectName("toolBox");
        page_10 = new QWidget();
        page_10->setObjectName("page_10");
        page_10->setGeometry(QRect(0, 0, 68, 82));
        toolBox->addItem(page_10, QString::fromUtf8("\351\246\226\351\241\265"));
        page = new QWidget();
        page->setObjectName("page");
        page->setGeometry(QRect(0, 0, 68, 82));
        toolBox->addItem(page, QString::fromUtf8("\345\255\246\347\224\237\344\277\241\346\201\257"));
        page_3 = new QWidget();
        page_3->setObjectName("page_3");
        page_3->setGeometry(QRect(0, 0, 68, 82));
        toolBox->addItem(page_3, QString::fromUtf8("\347\217\255\347\272\247\344\277\241\346\201\257"));
        page_4 = new QWidget();
        page_4->setObjectName("page_4");
        page_4->setGeometry(QRect(0, 0, 68, 82));
        toolBox->addItem(page_4, QString::fromUtf8("\346\225\231\345\270\210\344\277\241\346\201\257"));
        page_11 = new QWidget();
        page_11->setObjectName("page_11");
        page_11->setGeometry(QRect(0, 0, 68, 82));
        toolBox->addItem(page_11, QString::fromUtf8("\350\257\276\347\250\213\344\277\241\346\201\257"));
        page_5 = new QWidget();
        page_5->setObjectName("page_5");
        page_5->setGeometry(QRect(0, 0, 68, 82));
        toolBox->addItem(page_5, QString::fromUtf8("\346\210\220\347\273\251\346\237\245\350\257\242"));
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        page_2->setGeometry(QRect(0, 0, 68, 82));
        toolBox->addItem(page_2, QString::fromUtf8("\351\242\230\345\272\223\347\256\241\347\220\206"));
        page_6 = new QWidget();
        page_6->setObjectName("page_6");
        page_6->setGeometry(QRect(0, 0, 68, 82));
        toolBox->addItem(page_6, QString::fromUtf8("\347\273\204\345\215\267"));
        page_7 = new QWidget();
        page_7->setObjectName("page_7");
        page_7->setGeometry(QRect(0, 0, 68, 82));
        toolBox->addItem(page_7, QString::fromUtf8("\345\217\221\345\270\203\350\200\203\350\257\225"));
        page_8 = new QWidget();
        page_8->setObjectName("page_8");
        page_8->setGeometry(QRect(0, 0, 68, 82));
        toolBox->addItem(page_8, QString::fromUtf8("\350\200\203\350\257\225\347\256\241\347\220\206"));

        formLayout->setWidget(0, QFormLayout::LabelRole, toolBox);

        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        page_9 = new QWidget();
        page_9->setObjectName("page_9");
        stackedWidget->addWidget(page_9);

        formLayout->setWidget(0, QFormLayout::FieldRole, stackedWidget);

        teacherHome->setCentralWidget(centralwidget);
        menubar = new QMenuBar(teacherHome);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 694, 21));
        teacherHome->setMenuBar(menubar);
        statusbar = new QStatusBar(teacherHome);
        statusbar->setObjectName("statusbar");
        teacherHome->setStatusBar(statusbar);

        retranslateUi(teacherHome);

        toolBox->setCurrentIndex(1);
        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(teacherHome);
    } // setupUi

    void retranslateUi(QMainWindow *teacherHome)
    {
        teacherHome->setWindowTitle(QCoreApplication::translate("teacherHome", "MainWindow", nullptr));
        toolBox->setItemText(toolBox->indexOf(page_10), QCoreApplication::translate("teacherHome", "\351\246\226\351\241\265", nullptr));
        toolBox->setItemText(toolBox->indexOf(page), QCoreApplication::translate("teacherHome", "\345\255\246\347\224\237\344\277\241\346\201\257", nullptr));
        toolBox->setItemText(toolBox->indexOf(page_3), QCoreApplication::translate("teacherHome", "\347\217\255\347\272\247\344\277\241\346\201\257", nullptr));
        toolBox->setItemText(toolBox->indexOf(page_4), QCoreApplication::translate("teacherHome", "\346\225\231\345\270\210\344\277\241\346\201\257", nullptr));
        toolBox->setItemText(toolBox->indexOf(page_11), QCoreApplication::translate("teacherHome", "\350\257\276\347\250\213\344\277\241\346\201\257", nullptr));
        toolBox->setItemText(toolBox->indexOf(page_5), QCoreApplication::translate("teacherHome", "\346\210\220\347\273\251\346\237\245\350\257\242", nullptr));
        toolBox->setItemText(toolBox->indexOf(page_2), QCoreApplication::translate("teacherHome", "\351\242\230\345\272\223\347\256\241\347\220\206", nullptr));
        toolBox->setItemText(toolBox->indexOf(page_6), QCoreApplication::translate("teacherHome", "\347\273\204\345\215\267", nullptr));
        toolBox->setItemText(toolBox->indexOf(page_7), QCoreApplication::translate("teacherHome", "\345\217\221\345\270\203\350\200\203\350\257\225", nullptr));
        toolBox->setItemText(toolBox->indexOf(page_8), QCoreApplication::translate("teacherHome", "\350\200\203\350\257\225\347\256\241\347\220\206", nullptr));
    } // retranslateUi

};

namespace Ui {
    class teacherHome: public Ui_teacherHome {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEACHERHOME_H
