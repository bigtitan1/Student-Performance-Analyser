#ifndef LOGIN_MAIN_H
#define LOGIN_MAIN_H

#include <QMainWindow>
#include "new_student.h"
#include "performance_chart.h"
#include "rank.h"
#include "individualstudent.h"
#include "modify.h"



namespace Ui {
class Login_main;
}

class Login_main : public QMainWindow
{
    Q_OBJECT

public:
    explicit Login_main(QWidget *parent = nullptr);
    ~Login_main();

private slots:
    void on_Logout_btn_clicked();

    void on_newStudent_btn_clicked();



    void on_PC_btn_clicked();

    void on_pushButton_4_clicked();

    void on_individual_btn_clicked();

    void on_modify_btn_clicked();

private:
    Ui::Login_main *ui;
    new_student *newStudentWindow;
    performance_chart *performanceChartWindow;
    rank *rankWindow;
    individualStudent *individualStudentWindow;
    modify *modifyWindow;
    void loadCSVToTable();
};

#endif // LOGIN_MAIN_H
