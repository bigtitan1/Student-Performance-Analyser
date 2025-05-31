#include "rank.h"
#include "ui_rank.h"
#include "mainwindow.h"
#include "login_main.h"
#include <QFile>
#include <QTextStream>
#include <QTableWidgetItem>
#include <algorithm>

struct Student {
    QString name;
    double percentage;
};

bool compareStudents(const Student &a, const Student &b) {
    return a.percentage > b.percentage;
}

void rank::on_ViewRankTable_clicked()
{
    QFile file("students.csv");
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        // Show error message box or debug print
        qDebug() << "Cannot open students.csv";
        return;
    }

    QTextStream in(&file);
    QList<Student> students;
    int row = 0;
    while (!in.atEnd()) {
        QString line = in.readLine();
        if (row == 0) { // skip header
            row++;
            continue;
        }
        QStringList fields = line.split(",");
        if (fields.size() < 5)
            continue;

        QString name = fields[1];
        double phy = fields[2].toDouble();
        double chem = fields[3].toDouble();
        double maths = fields[4].toDouble();

        double percentage = (phy + chem + maths) / 3.0;
        students.append({name, percentage});
        row++;
    }
    file.close();

    // Sort students by descending percentage
    std::sort(students.begin(), students.end(), compareStudents);

    // Prepare table widget
    ui->rankTable->clear();
    ui->rankTable->setRowCount(students.size());
    ui->rankTable->setColumnCount(3);
    QStringList headers = {"Rank", "Name", "Percentage"};
    ui->rankTable->setHorizontalHeaderLabels(headers);

    for (int i = 0; i < students.size(); ++i) {
        // Rank
        QTableWidgetItem *rankItem = new QTableWidgetItem(QString::number(i + 1));
        rankItem->setTextAlignment(Qt::AlignCenter);
        ui->rankTable->setItem(i, 0, rankItem);

        // Name
        QTableWidgetItem *nameItem = new QTableWidgetItem(students[i].name);
        nameItem->setTextAlignment(Qt::AlignCenter);
        ui->rankTable->setItem(i, 1, nameItem);

        // Percentage (2 decimal places)
        QTableWidgetItem *percItem = new QTableWidgetItem(QString::number(students[i].percentage, 'f', 2));
        percItem->setTextAlignment(Qt::AlignCenter);
        ui->rankTable->setItem(i, 2, percItem);
    }

    // Optional: make table non-editable
    ui->rankTable->setEditTriggers(QAbstractItemView::NoEditTriggers);

    // Stretch columns nicely
    ui->rankTable->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
}


rank::rank(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::rank)
{
    ui->setupUi(this);
}

rank::~rank()
{
    delete ui;
}




void rank::on_rank_logout_btn_clicked()
{
    MainWindow *mainWindow = new MainWindow();
    mainWindow->show();
    this->close();
}


void rank::on_rank_home_btn_clicked()
{
    Login_main *loginMainWindow = new Login_main();
    loginMainWindow->show();
    this->close();

}

