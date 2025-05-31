#ifndef MODIFY_H
#define MODIFY_H

#include <QMainWindow>

namespace Ui {
class modify;
}

class modify : public QMainWindow
{
    Q_OBJECT

public:
    explicit modify(QWidget *parent = nullptr);
    ~modify();

private slots:
    void on_modifyHome_btn_clicked();

    void on_modiftyLogout_btn_clicked();

    void on_idModifySearch_clicked();

    void on_makeChanges_clicked();

private:
    Ui::modify *ui;
};

#endif // MODIFY_H
