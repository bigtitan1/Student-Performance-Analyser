#ifndef RANK_H
#define RANK_H

#include <QMainWindow>

namespace Ui {
class rank;
}

class rank : public QMainWindow
{
    Q_OBJECT

public:
    explicit rank(QWidget *parent = nullptr);
    ~rank();

private slots:
    void on_ViewRankTable_clicked();

    void on_rank_logout_btn_clicked();

    void on_rank_home_btn_clicked();

private:
    Ui::rank *ui;
};

#endif // RANK_H
