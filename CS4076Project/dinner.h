#ifndef DINNER_H
#define DINNER_H

#include <QDialog>

namespace Ui {
class Dinner;
}

class Dinner : public QDialog
{
    Q_OBJECT

public:
    explicit Dinner(QWidget *parent = nullptr);
    ~Dinner();

private slots:
    void on_checkBox_2_stateChanged(int arg1);

    void on_checkBox_stateChanged(int arg1);

    void on_porkchops_clicked();

    void on_pasta_clicked();

private:
    Ui::Dinner *ui;
};

#endif // DINNER_H
