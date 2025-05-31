/********************************************************************************
** Form generated from reading UI file 'new_student.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEW_STUDENT_H
#define UI_NEW_STUDENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_new_student
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *newStudentHome_btn;
    QPushButton *newStudentLogout_btn;
    QLabel *label_6;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *newStudentId;
    QLabel *label_2;
    QLineEdit *newStudentName;
    QLabel *label_3;
    QDoubleSpinBox *newStudentPhysics;
    QLabel *label_4;
    QDoubleSpinBox *newStudentMaths;
    QLabel *label_5;
    QDoubleSpinBox *newStudentChemistry;
    QPushButton *newStudentSubmit_btn;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *new_student)
    {
        if (new_student->objectName().isEmpty())
            new_student->setObjectName("new_student");
        new_student->resize(800, 600);
        centralwidget = new QWidget(new_student);
        centralwidget->setObjectName("centralwidget");
        verticalLayout_2 = new QVBoxLayout(centralwidget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(71);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(20);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setSizeConstraint(QLayout::SizeConstraint::SetDefaultConstraint);
        horizontalLayout->setContentsMargins(25, 5, -1, 10);
        newStudentHome_btn = new QPushButton(centralwidget);
        newStudentHome_btn->setObjectName("newStudentHome_btn");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(newStudentHome_btn->sizePolicy().hasHeightForWidth());
        newStudentHome_btn->setSizePolicy(sizePolicy);
        newStudentHome_btn->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        horizontalLayout->addWidget(newStudentHome_btn);

        newStudentLogout_btn = new QPushButton(centralwidget);
        newStudentLogout_btn->setObjectName("newStudentLogout_btn");
        newStudentLogout_btn->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        horizontalLayout->addWidget(newStudentLogout_btn);


        verticalLayout->addLayout(horizontalLayout);

        label_6 = new QLabel(centralwidget);
        label_6->setObjectName("label_6");
        sizePolicy.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy);
        label_6->setMinimumSize(QSize(10, 20));
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe MDL2 Assets")});
        font.setPointSize(20);
        font.setUnderline(true);
        label_6->setFont(font);
        label_6->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        label_6->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_6->setMargin(-4);

        verticalLayout->addWidget(label_6);

        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        formLayout->setHorizontalSpacing(29);
        formLayout->setVerticalSpacing(8);
        formLayout->setContentsMargins(25, 20, 25, -1);
        label = new QLabel(centralwidget);
        label->setObjectName("label");

        formLayout->setWidget(0, QFormLayout::ItemRole::LabelRole, label);

        newStudentId = new QLineEdit(centralwidget);
        newStudentId->setObjectName("newStudentId");

        formLayout->setWidget(0, QFormLayout::ItemRole::FieldRole, newStudentId);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");

        formLayout->setWidget(1, QFormLayout::ItemRole::LabelRole, label_2);

        newStudentName = new QLineEdit(centralwidget);
        newStudentName->setObjectName("newStudentName");

        formLayout->setWidget(1, QFormLayout::ItemRole::FieldRole, newStudentName);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");

        formLayout->setWidget(2, QFormLayout::ItemRole::LabelRole, label_3);

        newStudentPhysics = new QDoubleSpinBox(centralwidget);
        newStudentPhysics->setObjectName("newStudentPhysics");
        newStudentPhysics->setMaximum(100.000000000000000);

        formLayout->setWidget(2, QFormLayout::ItemRole::FieldRole, newStudentPhysics);

        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");

        formLayout->setWidget(3, QFormLayout::ItemRole::LabelRole, label_4);

        newStudentMaths = new QDoubleSpinBox(centralwidget);
        newStudentMaths->setObjectName("newStudentMaths");
        newStudentMaths->setMaximum(100.000000000000000);

        formLayout->setWidget(3, QFormLayout::ItemRole::FieldRole, newStudentMaths);

        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");

        formLayout->setWidget(4, QFormLayout::ItemRole::LabelRole, label_5);

        newStudentChemistry = new QDoubleSpinBox(centralwidget);
        newStudentChemistry->setObjectName("newStudentChemistry");
        newStudentChemistry->setMaximum(100.000000000000000);

        formLayout->setWidget(4, QFormLayout::ItemRole::FieldRole, newStudentChemistry);


        verticalLayout->addLayout(formLayout);


        verticalLayout_2->addLayout(verticalLayout);

        newStudentSubmit_btn = new QPushButton(centralwidget);
        newStudentSubmit_btn->setObjectName("newStudentSubmit_btn");

        verticalLayout_2->addWidget(newStudentSubmit_btn);

        new_student->setCentralWidget(centralwidget);
        menubar = new QMenuBar(new_student);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 25));
        new_student->setMenuBar(menubar);
        statusbar = new QStatusBar(new_student);
        statusbar->setObjectName("statusbar");
        new_student->setStatusBar(statusbar);

        retranslateUi(new_student);

        QMetaObject::connectSlotsByName(new_student);
    } // setupUi

    void retranslateUi(QMainWindow *new_student)
    {
        new_student->setWindowTitle(QCoreApplication::translate("new_student", "MainWindow", nullptr));
        newStudentHome_btn->setText(QCoreApplication::translate("new_student", "Home", nullptr));
        newStudentLogout_btn->setText(QCoreApplication::translate("new_student", "Logout", nullptr));
        label_6->setText(QCoreApplication::translate("new_student", "New Student Details", nullptr));
        label->setText(QCoreApplication::translate("new_student", "ID", nullptr));
        label_2->setText(QCoreApplication::translate("new_student", "Name", nullptr));
        label_3->setText(QCoreApplication::translate("new_student", "Physics ", nullptr));
        label_4->setText(QCoreApplication::translate("new_student", "Maths", nullptr));
        label_5->setText(QCoreApplication::translate("new_student", "Chemistry", nullptr));
        newStudentSubmit_btn->setText(QCoreApplication::translate("new_student", "Submit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class new_student: public Ui_new_student {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEW_STUDENT_H
