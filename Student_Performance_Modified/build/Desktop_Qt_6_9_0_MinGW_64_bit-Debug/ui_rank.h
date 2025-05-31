/********************************************************************************
** Form generated from reading UI file 'rank.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RANK_H
#define UI_RANK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_rank
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QPushButton *rank_home_btn;
    QTableWidget *rankTable;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *rank_logout_btn;
    QLabel *label;
    QPushButton *ViewRankTable;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *rank)
    {
        if (rank->objectName().isEmpty())
            rank->setObjectName("rank");
        rank->resize(800, 600);
        centralwidget = new QWidget(rank);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        rank_home_btn = new QPushButton(centralwidget);
        rank_home_btn->setObjectName("rank_home_btn");
        rank_home_btn->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        gridLayout->addWidget(rank_home_btn, 0, 0, 1, 1);

        rankTable = new QTableWidget(centralwidget);
        rankTable->setObjectName("rankTable");

        gridLayout->addWidget(rankTable, 2, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(23, 20, QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(15, 20, QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 3, 1, 1);

        rank_logout_btn = new QPushButton(centralwidget);
        rank_logout_btn->setObjectName("rank_logout_btn");
        rank_logout_btn->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        gridLayout->addWidget(rank_logout_btn, 0, 3, 1, 1);

        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(label, 1, 0, 1, 1);

        ViewRankTable = new QPushButton(centralwidget);
        ViewRankTable->setObjectName("ViewRankTable");
        ViewRankTable->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        gridLayout->addWidget(ViewRankTable, 1, 1, 1, 1);

        rank->setCentralWidget(centralwidget);
        menubar = new QMenuBar(rank);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 25));
        rank->setMenuBar(menubar);
        statusbar = new QStatusBar(rank);
        statusbar->setObjectName("statusbar");
        rank->setStatusBar(statusbar);

        retranslateUi(rank);

        QMetaObject::connectSlotsByName(rank);
    } // setupUi

    void retranslateUi(QMainWindow *rank)
    {
        rank->setWindowTitle(QCoreApplication::translate("rank", "MainWindow", nullptr));
        rank_home_btn->setText(QCoreApplication::translate("rank", "Home", nullptr));
        rank_logout_btn->setText(QCoreApplication::translate("rank", "Logout", nullptr));
        label->setText(QCoreApplication::translate("rank", "Rank Table", nullptr));
        ViewRankTable->setText(QCoreApplication::translate("rank", "View", nullptr));
    } // retranslateUi

};

namespace Ui {
    class rank: public Ui_rank {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RANK_H
