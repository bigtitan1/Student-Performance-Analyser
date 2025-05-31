#ifndef NEW_STUDENT_H
#define NEW_STUDENT_H

#include <QMainWindow>

namespace Ui {
class new_student;
}

class new_student : public QMainWindow
{
    Q_OBJECT

public:
    explicit new_student(QWidget *parent = nullptr);
    ~new_student();

private slots:


    void on_newStudentSubmit_btn_clicked();



    void on_newStudentHome_btn_clicked();

    void on_newStudentLogout_btn_clicked();

private:
    Ui::new_student *ui;
};

#endif // NEW_STUDENT_H
