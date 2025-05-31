/********************************************************************************
** Form generated from reading UI file 'login_main.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_MAIN_H
#define UI_LOGIN_MAIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Login_main
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *newStudent_btn;
    QPushButton *PC_btn;
    QPushButton *individual_btn;
    QPushButton *pushButton_4;
    QPushButton *Logout_btn;
    QLabel *label;
    QTableView *studentDetailsTable;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Login_main)
    {
        if (Login_main->objectName().isEmpty())
            Login_main->setObjectName("Login_main");
        Login_main->resize(800, 600);
        centralwidget = new QWidget(Login_main);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        newStudent_btn = new QPushButton(centralwidget);
        newStudent_btn->setObjectName("newStudent_btn");
        newStudent_btn->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #3498db;\n"
"    color: white;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: #2980b9;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #1c5980;\n"
"}\n"
""));

        horizontalLayout_2->addWidget(newStudent_btn);

        PC_btn = new QPushButton(centralwidget);
        PC_btn->setObjectName("PC_btn");
        PC_btn->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #82E0AA;\n"
"    color: black;\n"
"    border-radius: 6px;\n"
"    padding: 6px 12px;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: #58D68D;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #28B463;\n"
"}\n"
""));

        horizontalLayout_2->addWidget(PC_btn);

        individual_btn = new QPushButton(centralwidget);
        individual_btn->setObjectName("individual_btn");
        individual_btn->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #F9E79F;\n"
"    color: black;\n"
"    border-radius: 6px;\n"
"    padding: 6px 12px;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: #F7DC6F;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #F4D03F;\n"
"}\n"
""));

        horizontalLayout_2->addWidget(individual_btn);

        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #F5B7B1;\n"
"    color: black;\n"
"    border-radius: 6px;\n"
"    padding: 6px 12px;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: #EC7063;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #CB4335;\n"
"}\n"
""));

        horizontalLayout_2->addWidget(pushButton_4);

        Logout_btn = new QPushButton(centralwidget);
        Logout_btn->setObjectName("Logout_btn");
        Logout_btn->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #D7BDE2;\n"
"    color: black;\n"
"    border-radius: 6px;\n"
"    padding: 6px 12px;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: #AF7AC5;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #884EA0;\n"
"}\n"
""));

        horizontalLayout_2->addWidget(Logout_btn);


        gridLayout->addLayout(horizontalLayout_2, 0, 0, 1, 1);

        label = new QLabel(centralwidget);
        label->setObjectName("label");
        QFont font;
        font.setFamilies({QString::fromUtf8("Sylfaen")});
        font.setPointSize(20);
        label->setFont(font);
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(label, 3, 0, 1, 1);

        studentDetailsTable = new QTableView(centralwidget);
        studentDetailsTable->setObjectName("studentDetailsTable");

        gridLayout->addWidget(studentDetailsTable, 4, 0, 1, 1);

        Login_main->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Login_main);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 25));
        Login_main->setMenuBar(menubar);
        statusbar = new QStatusBar(Login_main);
        statusbar->setObjectName("statusbar");
        Login_main->setStatusBar(statusbar);

        retranslateUi(Login_main);

        QMetaObject::connectSlotsByName(Login_main);
    } // setupUi

    void retranslateUi(QMainWindow *Login_main)
    {
        Login_main->setWindowTitle(QCoreApplication::translate("Login_main", "MainWindow", nullptr));
        newStudent_btn->setText(QCoreApplication::translate("Login_main", "New Student", nullptr));
        PC_btn->setText(QCoreApplication::translate("Login_main", "Performance Chart", nullptr));
        individual_btn->setText(QCoreApplication::translate("Login_main", "Individual", nullptr));
        pushButton_4->setText(QCoreApplication::translate("Login_main", "Rank", nullptr));
        Logout_btn->setText(QCoreApplication::translate("Login_main", "LogOut", nullptr));
        label->setText(QCoreApplication::translate("Login_main", "Students Detail", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Login_main: public Ui_Login_main {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_MAIN_H
