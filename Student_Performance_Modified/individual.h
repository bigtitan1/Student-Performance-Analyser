#ifndef INDIVIDUAL_H
#define INDIVIDUAL_H

#include <QMainWindow>

namespace Ui {
class Individual;
}

class Individual : public QMainWindow
{
    Q_OBJECT

public:
    explicit Individual(QWidget *parent = nullptr);
    ~Individual();

private:
    Ui::Individual *ui;
};

#endif // INDIVIDUAL_H
