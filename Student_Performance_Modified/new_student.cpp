#include "new_student.h"
#include "ui_new_student.h"
#include <QString>
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include "login_main.h"
#include "mainwindow.h"

new_student::new_student(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::new_student)
{
    ui->setupUi(this);
}

new_student::~new_student()
{
    delete ui;
}




void new_student::on_newStudentSubmit_btn_clicked()
{
    QString newStudentId_in = ui->newStudentId->text();
    QString newStudentName_in = ui->newStudentName->text();
    QString newStudentPhysics_in = QString::number(ui->newStudentPhysics->value(), 'f', 0);
    QString newStudentMaths_in = QString::number(ui->newStudentMaths->value(), 'f', 0);
    QString newStudentChem_in = QString::number(ui->newStudentChemistry->value(), 'f', 0);

    if (newStudentId_in.isEmpty() || newStudentName_in.isEmpty()) {
        QMessageBox::warning(this, "Input Error", "Student ID and Name cannot be empty.");
        return;
    }

    QFile file("students.csv");
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QMessageBox::critical(this, "Error", "Could not open File Students.csv");
        return;
    }

    QTextStream in(&file);
    bool idExists = false;

    while (!in.atEnd()) {
        QString line = in.readLine();
        QStringList fields = line.split(",");

        if (fields.size() > 0 && fields[0] == newStudentId_in) {
            idExists = true;
            break;
        }
    }
    file.close();

    if (idExists) {
        QMessageBox::warning(this, "Duplicate ID", "A student with this ID already exists.");
        return;
    }

    // Now open for appending
    if (!file.open(QIODevice::Append | QIODevice::Text)) {
        QMessageBox::critical(this, "Error", "Could not open File Students.csv");
        return;
    }

    QTextStream out(&file);
    out << newStudentId_in << ","
        << newStudentName_in << ","
        << newStudentPhysics_in << ","
        << newStudentMaths_in << ","
        << newStudentChem_in << "\n";

    file.close();

    QMessageBox::information(this, "Success", "Student has been Added");

    ui->newStudentId->clear();
    ui->newStudentName->clear();
    ui->newStudentPhysics->setValue(0);
    ui->newStudentMaths->setValue(0);
    ui->newStudentChemistry->setValue(0);
}



void new_student::on_newStudentHome_btn_clicked()
{
    Login_main *loginMainWindow = new Login_main();
    loginMainWindow->show();
    this->close();

}


void new_student::on_newStudentLogout_btn_clicked()
{
    MainWindow *mainWindow = new MainWindow();
    mainWindow->show();
    this->close();

}

