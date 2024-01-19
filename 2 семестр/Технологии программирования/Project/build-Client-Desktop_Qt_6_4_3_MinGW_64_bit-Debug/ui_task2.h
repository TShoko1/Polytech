/********************************************************************************
** Form generated from reading UI file 'task2.ui'
**
** Created by: Qt User Interface Compiler version 6.4.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TASK2_H
#define UI_TASK2_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_task2
{
public:
    QWidget *centralwidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_task;
    QTextEdit *textEdit;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEdit_answer;
    QPushButton *send_answer_but;
    QLabel *label_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *task2)
    {
        if (task2->objectName().isEmpty())
            task2->setObjectName("task2");
        task2->resize(567, 326);
        centralwidget = new QWidget(task2);
        centralwidget->setObjectName("centralwidget");
        verticalLayoutWidget = new QWidget(centralwidget);
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

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(100, 230, 351, 61));
        QFont font;
        font.setPointSize(24);
        font.setBold(true);
        label_2->setFont(font);
        task2->setCentralWidget(centralwidget);
        menubar = new QMenuBar(task2);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 567, 23));
        task2->setMenuBar(menubar);
        statusbar = new QStatusBar(task2);
        statusbar->setObjectName("statusbar");
        task2->setStatusBar(statusbar);

        retranslateUi(task2);

        QMetaObject::connectSlotsByName(task2);
    } // setupUi

    void retranslateUi(QMainWindow *task2)
    {
        task2->setWindowTitle(QCoreApplication::translate("task2", "MainWindow", nullptr));
        label_task->setText(QCoreApplication::translate("task2", "\320\227\320\260\320\264\320\260\321\207\320\260 2", nullptr));
        label->setText(QString());
        send_answer_but->setText(QCoreApplication::translate("task2", "\320\236\321\202\320\277\321\200\320\260\320\262\320\270\321\202\321\214", nullptr));
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class task2: public Ui_task2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TASK2_H
