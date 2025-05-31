#ifndef INDIVIDUALSTUDENT_H
#define INDIVIDUALSTUDENT_H

#include <QMainWindow>
#include <QtCore>
#include <QtGui>
#include <QtCharts>

namespace Ui {
class individualStudent;
}

class individualStudent : public QMainWindow
{
    Q_OBJECT

public:
    explicit individualStudent(QWidget *parent = nullptr);
    ~individualStudent();

private slots:
    void on_individual_home_btn_clicked();

    void on_individual_logout_btn_clicked();

    void on_individual_view_btn_clicked();

private:
    Ui::individualStudent *ui;
};

#endif // INDIVIDUALSTUDENT_H
