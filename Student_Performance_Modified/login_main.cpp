#include "login_main.h"
#include "ui_login_main.h"
#include "new_student.h"
#include "rank.h"
#include "individualstudent.h"
#include "modify.h"
#include <QFile>
#include <QTextStream>
#include <QStringList>
#include <QStandardItemModel>
#include <QStandardItem>
#include <QDebug>

void Login_main::loadCSVToTable() {
    QFile file("students.csv");  // Use full path if needed
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        qDebug() << "Failed to open file";
        return;
    }

    QTextStream in(&file);
    int row = 0;

    QStandardItemModel *model = new QStandardItemModel(this);  // Create model

    while (!in.atEnd()) {
        QString line = in.readLine();
        QStringList fields = line.split(",");

        if (row == 0) {
            // Set headers
            model->setColumnCount(fields.size());
            model->setHorizontalHeaderLabels(fields);
        } else {
            QList<QStandardItem *> items;
            for (const QString &field : std::as_const(fields)) {

                items.append(new QStandardItem(field));
            }
            model->appendRow(items);
        }

        row++;
    }

    file.close();

    ui->studentDetailsTable->setModel(model);
    ui->studentDetailsTable->setEditTriggers(QAbstractItemView::NoEditTriggers);

}


Login_main::Login_main(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Login_main)
{
    ui->setupUi(this);
    loadCSVToTable();

}

Login_main::~Login_main()
{
    delete ui;


}



void Login_main::on_Logout_btn_clicked()
{
    QWidget *parentWidget = qobject_cast<QWidget *>(this->parent());
    if (parentWidget) {
        parentWidget->show();
    }


    this->close();
}


void Login_main::on_newStudent_btn_clicked()
{
    newStudentWindow = new new_student();
    newStudentWindow->show();
    this->close();
}




void Login_main::on_PC_btn_clicked()
{
    performanceChartWindow = new performance_chart();
    performanceChartWindow->show();
    this->close();
}




void Login_main::on_pushButton_4_clicked()
{
    rankWindow = new rank();
    rankWindow->show();
    this->close();
}


void Login_main::on_individual_btn_clicked()
{
    individualStudentWindow = new individualStudent();
    individualStudentWindow->show();
    this->close();
}


void Login_main::on_modify_btn_clicked()
{
    modifyWindow = new modify();
    modifyWindow->show();
    this->close();
}

