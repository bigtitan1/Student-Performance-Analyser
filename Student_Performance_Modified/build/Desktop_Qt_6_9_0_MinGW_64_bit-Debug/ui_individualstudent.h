/********************************************************************************
** Form generated from reading UI file 'individualstudent.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INDIVIDUALSTUDENT_H
#define UI_INDIVIDUALSTUDENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_individualStudent
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QLineEdit *individualStudentId;
    QPushButton *individual_logout_btn;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *individual_home_btn;
    QPushButton *individual_view_btn;
    QWidget *barchartStudent;
    QLabel *individual_percentage;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *individualStudent)
    {
        if (individualStudent->objectName().isEmpty())
            individualStudent->setObjectName("individualStudent");
        individualStudent->resize(800, 600);
        centralwidget = new QWidget(individualStudent);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        individualStudentId = new QLineEdit(centralwidget);
        individualStudentId->setObjectName("individualStudentId");

        gridLayout->addWidget(individualStudentId, 1, 2, 1, 1);

        individual_logout_btn = new QPushButton(centralwidget);
        individual_logout_btn->setObjectName("individual_logout_btn");
        individual_logout_btn->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        gridLayout->addWidget(individual_logout_btn, 0, 5, 1, 1);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(label_2, 3, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 0, 1, 1);

        individual_home_btn = new QPushButton(centralwidget);
        individual_home_btn->setObjectName("individual_home_btn");
        individual_home_btn->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #85C1E9;\n"
"    color: black;\n"
"    border-radius: 6px;\n"
"    padding: 6px 12px;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: #5DADE2;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #3498DB;\n"
"}\n"
""));

        gridLayout->addWidget(individual_home_btn, 0, 0, 1, 1);

        individual_view_btn = new QPushButton(centralwidget);
        individual_view_btn->setObjectName("individual_view_btn");
        individual_view_btn->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #F1948A;\n"
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

        gridLayout->addWidget(individual_view_btn, 1, 3, 1, 1);

        barchartStudent = new QWidget(centralwidget);
        barchartStudent->setObjectName("barchartStudent");

        gridLayout->addWidget(barchartStudent, 5, 1, 2, 3);

        individual_percentage = new QLabel(centralwidget);
        individual_percentage->setObjectName("individual_percentage");
        individual_percentage->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(individual_percentage, 7, 2, 1, 1);

        label = new QLabel(centralwidget);
        label->setObjectName("label");

        gridLayout->addWidget(label, 1, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 5, 1, 1);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setMaximumSize(QSize(16777215, 40));
        label_3->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(label_3, 8, 2, 1, 1);

        individualStudent->setCentralWidget(centralwidget);
        menubar = new QMenuBar(individualStudent);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 25));
        individualStudent->setMenuBar(menubar);
        statusbar = new QStatusBar(individualStudent);
        statusbar->setObjectName("statusbar");
        individualStudent->setStatusBar(statusbar);

        retranslateUi(individualStudent);

        QMetaObject::connectSlotsByName(individualStudent);
    } // setupUi

    void retranslateUi(QMainWindow *individualStudent)
    {
        individualStudent->setWindowTitle(QCoreApplication::translate("individualStudent", "MainWindow", nullptr));
        individual_logout_btn->setText(QCoreApplication::translate("individualStudent", "Logout", nullptr));
        label_2->setText(QCoreApplication::translate("individualStudent", "Details", nullptr));
        individual_home_btn->setText(QCoreApplication::translate("individualStudent", "Home", nullptr));
        individual_view_btn->setText(QCoreApplication::translate("individualStudent", "View", nullptr));
        individual_percentage->setText(QCoreApplication::translate("individualStudent", "Percentage - ", nullptr));
        label->setText(QCoreApplication::translate("individualStudent", "Student Id", nullptr));
        label_3->setText(QCoreApplication::translate("individualStudent", "Average :- ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class individualStudent: public Ui_individualStudent {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INDIVIDUALSTUDENT_H
