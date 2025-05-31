#include "individualstudent.h"
#include "ui_individualstudent.h"
#include "login_main.h"
#include "mainwindow.h"
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include <QtCharts>





void individualStudent::on_individual_view_btn_clicked()
{
    int studentId = ui->individualStudentId->text().toInt();
    QString filePath = "students.csv";  // Adjust if needed

    QFile file(filePath);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QMessageBox::critical(this, "Error", "Failed to open students.csv file.");
        return;
    }

    QTextStream in(&file);
    QString headerLine = in.readLine();  // Skip header

    QString studentName;
    QVector<int> scores;
    QStringList subjects = {"Physics", "Chem", "Maths"};
    const int subjectCount = subjects.size();
    int totalMarks = 0;


    while (!in.atEnd()) {
        QString line = in.readLine();
        QStringList parts = line.split(",", Qt::SkipEmptyParts);
        if (parts.size() < 5)
            continue;

        int id = parts[0].toInt();
        if (id == studentId) {
            studentName = parts[1];
            for (int i = 2; i < 5; ++i) {
                int mark = parts[i].toInt();
                scores.append(mark);
                totalMarks += mark;
            }
            break;
        }
    }

    file.close();

    if (studentName.isEmpty()) {
        QMessageBox::warning(this, "Student Not Found", "No student with this ID in CSV.");
        return;
    }

    // Calculate percentage
    double percentage = (static_cast<double>(totalMarks) / (subjectCount * 100)) * 100;
    double average = (static_cast<double>(totalMarks)/(subjectCount));
    QString color;
    if(percentage>90){
        color = "Green";
    }
    else if(percentage>50&&percentage<90){
        color = "Blue";
    }
    else{
        color = "Red";
    }

    // ✅ Show percentage in QLabel
    ui->individual_percentage->setText("<span style='color:" + color + ";'>Percentage: " + QString::number(percentage, 'f', 2) + "%</span>");
    ui->label_3->setText("Average:  " + QString::number(average, 'f', 2));


    // Create bar set
    QBarSet *set = new QBarSet(studentName);
    for (int score : scores) {
        *set << score;
    }

    QBarSeries *series = new QBarSeries();
    series->append(set);
    series->setLabelsVisible(true);  // ✅ Show marks on top of each bar

    QChart *chart = new QChart();
    chart->addSeries(series);
    chart->setTitle(QString("Scores for %1").arg(studentName));  // no percentage here
    chart->setAnimationOptions(QChart::SeriesAnimations);

    QBarCategoryAxis *axisX = new QBarCategoryAxis();
    axisX->append(subjects);
    chart->addAxis(axisX, Qt::AlignBottom);
    series->attachAxis(axisX);

    QValueAxis *axisY = new QValueAxis();
    axisY->setRange(0, 100);
    chart->addAxis(axisY, Qt::AlignLeft);
    series->attachAxis(axisY);

    chart->legend()->setVisible(true);
    chart->legend()->setAlignment(Qt::AlignBottom);

    // Display chart in barchartStudent widget
    QChartView *chartView = new QChartView(chart);
    chartView->setRenderHint(QPainter::Antialiasing);

    QLayout *layout = ui->barchartStudent->layout();
    if (!layout) {
        layout = new QVBoxLayout(ui->barchartStudent);
    } else {
        QLayoutItem *child;
        while ((child = layout->takeAt(0)) != nullptr) {
            delete child->widget();
            delete child;
        }
    }

    layout->addWidget(chartView);
}



individualStudent::individualStudent(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::individualStudent)
{
    ui->setupUi(this);
}

individualStudent::~individualStudent()
{
    delete ui;
}

void individualStudent::on_individual_home_btn_clicked()
{
    Login_main *loginMainWindow = new Login_main();
    loginMainWindow->show();
    this->close();
}


void individualStudent::on_individual_logout_btn_clicked()
{
    MainWindow *mainWindow = new MainWindow();
    mainWindow->show();
    this->close();

}



