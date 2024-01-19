#include "task3.h"
#include "ui_task3.h"
#include <functionsforclient.h>

task3::task3(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::task3)
{
    ui->setupUi(this);
}

task3::~task3()
{
    delete ui;
}

void task3::setTaskNumber(int n, QString _log, int vari)
{
    task_number = n;
    log = _log;
    var = vari;
    ui->label_3->clear();
    ui->lineEdit_answer_3->clear();
    show();
}

void task3::on_send_answer_but_clicked()
{
    QString result_from_user = ui->lineEdit_answer_3->text();
    QString a = check_ans(task_number, QString::number(var), result_from_user, log);
    qDebug()<< a;
    if (a == "true"){
        ui->label_2->setText("Гамильтон!");
    }
    else{
        ui->label_2->setText("Неправильно!");
    }
}

void task3::generateTask(int n)
{
    switch (n) {
    case 1:
        ui->textEdit_3->setText("(1,2), (1,3), (1,4), (1,6), (2,3), (3,4), (3,6), (4,5), (4,6), (5,6)");
        break;
    case 2:
        ui->textEdit_3->setText("(1,2), (1,3), (1,5), (1,6), (2,4), (3,4), (3,5), (3,6), (4,5), (4,6), (5,6)");
        break;
    case 3:
        ui->textEdit_3->setText("(1,2), (1,4), (1,5), (1,6), (2,3), (2,4), (2,8), (3,8), (5,6), (6,7), (6,8), (7,8)");
        break;
    }
}
