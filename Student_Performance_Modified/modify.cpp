
#include "login_main.h"
#include "mainwindow.h"
#include "modify.h"
#include "ui_modify.h"
#include <QFile>
#include <QTextStream>
#include <QDebug>
#include <QMessageBox>




void modify::on_idModifySearch_clicked()
{
    QString searchId = ui->studentidmodify->text().trimmed();

    if (searchId.isEmpty()) {
        QMessageBox::warning(this, "Input Error", "Please enter a Student ID.");
        return;
    }

    QFile file("students.csv");
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QMessageBox::critical(this, "Error", "Failed to open students.csv");
        return;
    }

    QTextStream in(&file);
    QString header = in.readLine();  // Skip header

    bool found = false;

    while (!in.atEnd()) {
        QString line = in.readLine();
        QStringList fields = line.split(",");

        if (fields.size() >= 5) {
            QString id = fields[0].trimmed();

            if (id == searchId) {
                ui->label_7->setText(fields[1].trimmed()+"\'s Marks");
                QString physics = fields[2].trimmed();
                QString chemistry = fields[3].trimmed();
                QString maths = fields[4].trimmed();

                ui->label_3->setText("Physics Marks: " + physics);
                ui->label_4->setText("Chemistry Marks: " + chemistry);
                ui->label_2->setText("Maths Marks: " + maths);

                found = true;
                break;
            }
        }
    }

    file.close();

    if (!found) {
        QMessageBox::information(this, "Not Found", "Student ID not found.");
        ui->label_3->setText("Physics Marks : -");
        ui->label_4->setText("Chemistry Marks : -");
        ui->label_2->setText("Maths Marks : -");
    }
}


modify::modify(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::modify)
{
    ui->setupUi(this);
}

modify::~modify()
{
    delete ui;
}

void modify::on_modifyHome_btn_clicked()
{
    Login_main *loginMainWindow = new Login_main();
    loginMainWindow->show();
    this->close();
}


void modify::on_modiftyLogout_btn_clicked()
{
    MainWindow *mainWindow = new MainWindow();
    mainWindow->show();
    this->close();

}





void modify::on_makeChanges_clicked()
{
    QString searchId = ui->studentidmodify->text().trimmed();
    QString newMaths = QString::number(ui->mathsNew->value(), 'f', 0);
    QString newPhysics = QString::number(ui->physicsNew->value(), 'f', 0);
    QString newChem = QString::number(ui->chemNew->value(), 'f', 0);

    if (searchId.isEmpty()) {
        QMessageBox::warning(this, "Input Error", "Please enter a Student ID.");
        return;
    }

    QFile file("students.csv");
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QMessageBox::critical(this, "Error", "Failed to open students.csv");
        return;
    }

    QTextStream in(&file);
    QStringList lines;
    bool updated = false;

    // Read all lines and modify the matching student
    while (!in.atEnd()) {
        QString line = in.readLine();
        QStringList fields = line.split(",");

        if (fields[0].trimmed() == searchId && fields.size() >= 5) {
            // Update marks if new values provided

            if (!newPhysics.isEmpty()) fields[2] = newPhysics;
            if (!newChem.isEmpty()) fields[3] = newChem;
            if (!newMaths.isEmpty()) fields[4] = newMaths;

            updated = true;
        }

        lines.append(fields.join(","));
    }
    file.close();

    if (!updated) {
        QMessageBox::information(this, "Not Found", "Student ID not found, no changes made.");
        return;
    }

    // Write back to the file
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text | QIODevice::Truncate)) {
        QMessageBox::critical(this, "Error", "Failed to open students.csv for writing.");
        return;
    }

    QTextStream out(&file);
    for (const QString &line : std::as_const(lines)) {
        out << line << "\n";
    }
    file.close();

    QMessageBox::information(this, "Success", "Student marks updated successfully!");

    // Optionally clear input fields after update
    ui->physicsNew->clear();
    ui->chemNew->clear();
    ui->mathsNew->clear();
    ui->label_7->setText("Student Marks");
    ui->studentidmodify->clear();
}

