#include "performance_chart.h"
#include "ui_performance_chart.h"
#include "login_main.h"
#include "mainwindow.h"

#include <QString>
#include <QFile>
#include <QTextStream>
#include <QDebug>
#include <QtCharts/QChartView>
#include <QtCharts/QLineSeries>
#include <QtCharts/QChart>
#include <QtCharts/QValueAxis>
#include <QVBoxLayout>



void performance_chart::plotSubjectLineChart(const QString &subject_in)
{
    QMap<QString, int> subjectColumn = {
        {"Physics", 2},
        {"Chemistry", 3},
        {"Maths", 4}
    };

    if (!subjectColumn.contains(subject_in)) {
        qDebug() << "Unknown subject selected!";
        return;
    }

    int colIndex = subjectColumn[subject_in];

    QFile file("students.csv");
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        qDebug() << "Failed to open CSV file!";
        return;
    }

    QTextStream in(&file);
    QString header = in.readLine();  // Skip header

    QLineSeries *series = new QLineSeries();
    QStringList studentNames;
    int index = 0;

    while (!in.atEnd()) {
        QString line = in.readLine();
        QStringList fields = line.split(",");

        if (fields.size() > colIndex) {
            QString name = fields[1];
            bool ok;
            int mark = fields[colIndex].toInt(&ok);
            if (ok) {
                series->append(index, mark);
                studentNames.append(name);
                index++;
            }
        }
    }

    file.close();

    QChart *chart = new QChart();
    chart->addSeries(series);
    chart->setTitle(subject_in + " Marks Chart");
    chart->createDefaultAxes();

    QValueAxis *axisX = qobject_cast<QValueAxis *>(chart->axes(Qt::Horizontal).first());
    QValueAxis *axisY = qobject_cast<QValueAxis *>(chart->axes(Qt::Vertical).first());

    if (axisX) {
        axisX->setTitleText("Student Index");
        axisX->setLabelFormat("%d");
        axisX->setRange(0, index);
    }
    if (axisY) {
        axisY->setTitleText("Marks");
        axisY->setRange(0, 100);
    }

    QChartView *chartView = new QChartView(chart);
    chartView->setRenderHint(QPainter::Antialiasing);

    // Clear old layout if exists
    QLayout *oldLayout = ui->chartShow->layout();
    if (oldLayout) {
        QLayoutItem *item;
        while ((item = oldLayout->takeAt(0)) != nullptr) {
            delete item->widget();
            delete item;
        }
        delete oldLayout;
    }

    // Add new chart to the chartShow frame
    QVBoxLayout *layout = new QVBoxLayout(ui->chartShow);
    layout->addWidget(chartView);
}

performance_chart::performance_chart(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::performance_chart)
{
    ui->setupUi(this);
}

performance_chart::~performance_chart()
{
    delete ui;
}

void performance_chart::on_pc_home_btn_clicked()
{
    Login_main *loginMainWindow = new Login_main();
    loginMainWindow->show();
    this->close();
}

void performance_chart::on_pc_logout_btn_clicked()
{
    MainWindow *mainWindow = new MainWindow();
    mainWindow->show();
    this->close();
}

void performance_chart::on_subject_submit_btn_clicked()
{
    QString subject_in = ui->subjectDropMenu->currentText();
    plotSubjectLineChart(subject_in);
}
