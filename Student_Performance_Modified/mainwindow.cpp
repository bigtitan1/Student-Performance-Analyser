#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include <QStringList>
#include <QDebug>
#include <QMessageBox>



bool verifyCredentials(const QString& inputUser, const QString& inputPass)
{
    QFile file("users.csv");
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        qDebug() << "Failed to open users.csv";
        return false;
    }

    QTextStream in(&file);
    while (!in.atEnd()) {
        QString line = in.readLine();
        QStringList parts = line.split(',');

        if (parts.size() >= 2) {
            QString savedUser = parts[0].trimmed();
            QString savedPass = parts[1].trimmed();

            if (savedUser == inputUser && savedPass == inputPass) {
                return true;
            }
        }
    }
    return false;
}

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_login_btn_clicked()
{
    QString username_in = ui->lineEdit_user->text();
    QString password_in = ui->lineEdit_pass->text();

    if(verifyCredentials(username_in,password_in))
    {
        login_success = new Login_main(this);
        this->hide();
        ui->lineEdit_user->clear();
        ui->lineEdit_pass->clear();

        login_success->show();
    }
    else{
        QMessageBox::warning(this, "Login Failed", "Incorrect username or password.");
        ui->lineEdit_user->clear();
        ui->lineEdit_pass->clear();


    }

}

