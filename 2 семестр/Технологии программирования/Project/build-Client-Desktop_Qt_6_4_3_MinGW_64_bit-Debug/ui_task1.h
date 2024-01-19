/********************************************************************************
** Form generated from reading UI file 'task1.ui'
**
** Created by: Qt User Interface Compiler version 6.4.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TASK1_H
#define UI_TASK1_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_task1
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_task;
    QTextEdit *textEdit;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEdit_answer;
    QPushButton *send_answer_but;
    QLabel *label_2;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_task_2;
    QTextEdit *textEdit_2;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *lineEdit_answer_2;
    QPushButton *send_answer_but_2;
    QLabel *label_4;

    void setupUi(QWidget *task1)
    {
        if (task1->objectName().isEmpty())
            task1->setObjectName("task1");
        task1->resize(561, 312);
        verticalLayoutWidget = new QWidget(task1);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(0, 0, 561, 211));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_task = new QLabel(verticalLayoutWidget);
        label_task->setObjectName("label_task");

        verticalLayout->addWidget(label_task);

        textEdit = new QTextEdit(verticalLayoutWidget);
        textEdit->setObjectName("textEdit");

        verticalLayout->addWidget(textEdit);

        label = new QLabel(verticalLayoutWidget);
        label->setObjectName("label");

        verticalLayout->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        lineEdit_answer = new QLineEdit(verticalLayoutWidget);
        lineEdit_answer->setObjectName("lineEdit_answer");

        horizontalLayout->addWidget(lineEdit_answer);

        send_answer_but = new QPushButton(verticalLayoutWidget);
        send_answer_but->setObjectName("send_answer_but");

        horizontalLayout->addWidget(send_answer_but);


        verticalLayout->addLayout(horizontalLayout);

        label_2 = new QLabel(task1);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(100, 230, 351, 61));
        QFont font;
        font.setPointSize(24);
        font.setBold(true);
        label_2->setFont(font);
        verticalLayoutWidget_2 = new QWidget(task1);
        verticalLayoutWidget_2->setObjectName("verticalLayoutWidget_2");
        verticalLayoutWidget_2->setGeometry(QRect(230, 290, 561, 211));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_task_2 = new QLabel(verticalLayoutWidget_2);
        label_task_2->setObjectName("label_task_2");

        verticalLayout_2->addWidget(label_task_2);

        textEdit_2 = new QTextEdit(verticalLayoutWidget_2);
        textEdit_2->setObjectName("textEdit_2");

        verticalLayout_2->addWidget(textEdit_2);

        label_3 = new QLabel(verticalLayoutWidget_2);
        label_3->setObjectName("label_3");

        verticalLayout_2->addWidget(label_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        lineEdit_answer_2 = new QLineEdit(verticalLayoutWidget_2);
        lineEdit_answer_2->setObjectName("lineEdit_answer_2");

        horizontalLayout_2->addWidget(lineEdit_answer_2);

        send_answer_but_2 = new QPushButton(verticalLayoutWidget_2);
        send_answer_but_2->setObjectName("send_answer_but_2");

        horizontalLayout_2->addWidget(send_answer_but_2);


        verticalLayout_2->addLayout(horizontalLayout_2);

        label_4 = new QLabel(task1);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(330, 520, 351, 61));
        label_4->setFont(font);

        retranslateUi(task1);

        QMetaObject::connectSlotsByName(task1);
    } // setupUi

    void retranslateUi(QWidget *task1)
    {
        task1->setWindowTitle(QCoreApplication::translate("task1", "Form", nullptr));
        label_task->setText(QCoreApplication::translate("task1", "\320\227\320\260\320\264\320\260\321\207\320\260 1", nullptr));
        label->setText(QCoreApplication::translate("task1", "\320\237\321\200\320\265\320\264\321\201\321\202\320\260\320\262\320\270\321\202\321\214 \320\262 \320\262\320\270\320\264\320\265  |0 1 1 1|1 0 1 0|1 1 0 1|1 0 1 0|", nullptr));
        send_answer_but->setText(QCoreApplication::translate("task1", "\320\236\321\202\320\277\321\200\320\260\320\262\320\270\321\202\321\214", nullptr));
        label_2->setText(QString());
        label_task_2->setText(QCoreApplication::translate("task1", "\320\227\320\260\320\264\320\260\321\207\320\260 1", nullptr));
        label_3->setText(QCoreApplication::translate("task1", "\320\237\321\200\320\265\320\264\321\201\321\202\320\260\320\262\320\270\321\202\321\214 \320\262 \320\262\320\270\320\264\320\265  |0 1 1 1|1 0 1 0|1 1 0 1|1 0 1 0|", nullptr));
        send_answer_but_2->setText(QCoreApplication::translate("task1", "\320\236\321\202\320\277\321\200\320\260\320\262\320\270\321\202\321\214", nullptr));
        label_4->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class task1: public Ui_task1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TASK1_H
