#ifndef PERFORMANCE_CHART_H
#define PERFORMANCE_CHART_H

#include <QMainWindow>
#include <QtCore>
#include <QtGui>
#include <QtCharts>


namespace Ui {
class performance_chart;
}

class performance_chart : public QMainWindow
{
    Q_OBJECT

public:
    explicit performance_chart(QWidget *parent = nullptr);
    ~performance_chart();

private slots:
    void on_pc_home_btn_clicked();

    void on_pc_logout_btn_clicked();

    void on_subject_submit_btn_clicked();

private:
    Ui::performance_chart *ui;
    void plotSubjectLineChart(const QString &subject);
};

#endif // PERFORMANCE_CHART_H
