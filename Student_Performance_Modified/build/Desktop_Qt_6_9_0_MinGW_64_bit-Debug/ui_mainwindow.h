/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_3;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit_user;
    QLabel *label;
    QLineEdit *lineEdit_pass;
    QPushButton *login_btn;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(539, 434);
        MainWindow->setStyleSheet(QString::fromUtf8("QMainWindow {\n"
"    background-color: #FFDAB9;  /* Peach Puff, soft warm background */\n"
"}\n"
""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        horizontalSpacer = new QSpacerItem(150, 20, QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 2, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(150, 20, QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 0, 1, 1);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setMaximumSize(QSize(16777215, 50));
        QFont font;
        font.setFamilies({QString::fromUtf8("System")});
        font.setPointSize(16);
        font.setBold(true);
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(label_3, 0, 1, 1, 1);

        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        groupBox->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"    background-color: #FFE5B4;    /* light teal-ish color, you can change */\n"
"    border: none;                 /* no border */\n"
"    border-radius: 15px;          /* rounded corners */\n"
"}\n"
""));
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName("gridLayout_2");
        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");

        gridLayout_2->addWidget(label_2, 5, 0, 1, 1);

        lineEdit_user = new QLineEdit(groupBox);
        lineEdit_user->setObjectName("lineEdit_user");
        lineEdit_user->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    border: 1px solid #aaa;\n"
"    border-radius: 8px;\n"
"    padding: 6px;\n"
"}\n"
"QLineEdit:focus {\n"
"    border: 1px solid #3498DB;\n"
"}\n"
""));

        gridLayout_2->addWidget(lineEdit_user, 3, 1, 1, 4);

        label = new QLabel(groupBox);
        label->setObjectName("label");
        label->setMaximumSize(QSize(16777215, 40));

        gridLayout_2->addWidget(label, 3, 0, 1, 1);

        lineEdit_pass = new QLineEdit(groupBox);
        lineEdit_pass->setObjectName("lineEdit_pass");
        lineEdit_pass->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    border: 1px solid #aaa;\n"
"    border-radius: 8px;\n"
"    padding: 6px;\n"
"}\n"
"QLineEdit:focus {\n"
"    border: 1px solid #3498DB;\n"
"}\n"
""));
        lineEdit_pass->setEchoMode(QLineEdit::EchoMode::Password);

        gridLayout_2->addWidget(lineEdit_pass, 5, 1, 1, 4);

        login_btn = new QPushButton(groupBox);
        login_btn->setObjectName("login_btn");
        login_btn->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #F1948A;\n"
"    color: white;\n"
"    border-radius: 8px;\n"
"    padding: 8px;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: #EC7063;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #CB4335;\n"
"}\n"
""));

        gridLayout_2->addWidget(login_btn, 6, 1, 1, 1);


        gridLayout->addWidget(groupBox, 1, 0, 1, 3);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 539, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        groupBox->setTitle(QString());
        label_2->setText(QCoreApplication::translate("MainWindow", "Password", nullptr));
        lineEdit_user->setPlaceholderText(QCoreApplication::translate("MainWindow", "Enter Your Username", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Username", nullptr));
        lineEdit_pass->setPlaceholderText(QCoreApplication::translate("MainWindow", "Enter Your Password", nullptr));
        login_btn->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
