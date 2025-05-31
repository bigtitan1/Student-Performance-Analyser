/********************************************************************************
** Form generated from reading UI file 'performance_chart.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PERFORMANCE_CHART_H
#define UI_PERFORMANCE_CHART_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_performance_chart
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QComboBox *subjectDropMenu;
    QLabel *label;
    QPushButton *pc_logout_btn;
    QPushButton *subject_submit_btn;
    QPushButton *pc_home_btn;
    QLabel *label_2;
    QWidget *chartShow;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *performance_chart)
    {
        if (performance_chart->objectName().isEmpty())
            performance_chart->setObjectName("performance_chart");
        performance_chart->resize(800, 600);
        centralwidget = new QWidget(performance_chart);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        subjectDropMenu = new QComboBox(centralwidget);
        subjectDropMenu->addItem(QString());
        subjectDropMenu->addItem(QString());
        subjectDropMenu->addItem(QString());
        subjectDropMenu->setObjectName("subjectDropMenu");

        gridLayout->addWidget(subjectDropMenu, 1, 1, 1, 1);

        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        gridLayout->addWidget(label, 1, 0, 1, 1);

        pc_logout_btn = new QPushButton(centralwidget);
        pc_logout_btn->setObjectName("pc_logout_btn");
        pc_logout_btn->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        gridLayout->addWidget(pc_logout_btn, 0, 2, 1, 1);

        subject_submit_btn = new QPushButton(centralwidget);
        subject_submit_btn->setObjectName("subject_submit_btn");
        subject_submit_btn->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        gridLayout->addWidget(subject_submit_btn, 1, 2, 1, 1);

        pc_home_btn = new QPushButton(centralwidget);
        pc_home_btn->setObjectName("pc_home_btn");
        pc_home_btn->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        gridLayout->addWidget(pc_home_btn, 0, 0, 1, 1);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setMaximumSize(QSize(16777215, 40));
        QFont font;
        font.setPointSize(16);
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignmentFlag::AlignHCenter|Qt::AlignmentFlag::AlignTop);

        gridLayout->addWidget(label_2, 2, 1, 1, 1);

        chartShow = new QWidget(centralwidget);
        chartShow->setObjectName("chartShow");

        gridLayout->addWidget(chartShow, 3, 0, 1, 3);

        performance_chart->setCentralWidget(centralwidget);
        menubar = new QMenuBar(performance_chart);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 25));
        performance_chart->setMenuBar(menubar);
        statusbar = new QStatusBar(performance_chart);
        statusbar->setObjectName("statusbar");
        performance_chart->setStatusBar(statusbar);

        retranslateUi(performance_chart);

        QMetaObject::connectSlotsByName(performance_chart);
    } // setupUi

    void retranslateUi(QMainWindow *performance_chart)
    {
        performance_chart->setWindowTitle(QCoreApplication::translate("performance_chart", "MainWindow", nullptr));
        subjectDropMenu->setItemText(0, QCoreApplication::translate("performance_chart", "Maths", nullptr));
        subjectDropMenu->setItemText(1, QCoreApplication::translate("performance_chart", "Physics", nullptr));
        subjectDropMenu->setItemText(2, QCoreApplication::translate("performance_chart", "Chemistry", nullptr));

        label->setText(QCoreApplication::translate("performance_chart", "Select Subject", nullptr));
        pc_logout_btn->setText(QCoreApplication::translate("performance_chart", "Logout", nullptr));
        subject_submit_btn->setText(QCoreApplication::translate("performance_chart", "Submit", nullptr));
        pc_home_btn->setText(QCoreApplication::translate("performance_chart", "Home", nullptr));
        label_2->setText(QCoreApplication::translate("performance_chart", "Graph", nullptr));
    } // retranslateUi

};

namespace Ui {
    class performance_chart: public Ui_performance_chart {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PERFORMANCE_CHART_H
