/********************************************************************************
** Form generated from reading UI file 'task3.ui'
**
** Created by: Qt User Interface Compiler version 6.4.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TASK3_H
#define UI_TASK3_H

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

class Ui_task3
{
public:
    QLabel *label_2;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_task_3;
    QTextEdit *textEdit_3;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *lineEdit_answer_3;
    QPushButton *send_answer_but_3;

    void setupUi(QWidget *task3)
    {
        if (task3->objectName().isEmpty())
            task3->setObjectName("task3");
        task3->resize(565, 300);
        label_2 = new QLabel(task3);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(100, 230, 351, 61));
        QFont font;
        font.setPointSize(24);
        font.setBold(true);
        label_2->setFont(font);
        verticalLayoutWidget = new QWidget(task3);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(0, 0, 561, 211));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_task_3 = new QLabel(verticalLayoutWidget);
        label_task_3->setObjectName("label_task_3");

        verticalLayout_3->addWidget(label_task_3);

        textEdit_3 = new QTextEdit(verticalLayoutWidget);
        textEdit_3->setObjectName("textEdit_3");

        verticalLayout_3->addWidget(textEdit_3);

        label_3 = new QLabel(verticalLayoutWidget);
        label_3->setObjectName("label_3");

        verticalLayout_3->addWidget(label_3);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        lineEdit_answer_3 = new QLineEdit(verticalLayoutWidget);
        lineEdit_answer_3->setObjectName("lineEdit_answer_3");

        horizontalLayout_3->addWidget(lineEdit_answer_3);

        send_answer_but_3 = new QPushButton(verticalLayoutWidget);
        send_answer_but_3->setObjectName("send_answer_but_3");

        horizontalLayout_3->addWidget(send_answer_but_3);


        verticalLayout_3->addLayout(horizontalLayout_3);


        retranslateUi(task3);

        QMetaObject::connectSlotsByName(task3);
    } // setupUi

    void retranslateUi(QWidget *task3)
    {
        task3->setWindowTitle(QCoreApplication::translate("task3", "Form", nullptr));
        label_2->setText(QString());
        label_task_3->setText(QCoreApplication::translate("task3", "\320\227\320\260\320\264\320\260\321\207\320\260 3", nullptr));
        label_3->setText(QString());
        send_answer_but_3->setText(QCoreApplication::translate("task3", "\320\236\321\202\320\277\321\200\320\260\320\262\320\270\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class task3: public Ui_task3 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TASK3_H
