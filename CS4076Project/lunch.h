#ifndef LUNCH_H
#define LUNCH_H

#include <QDialog>

namespace Ui {
class Lunch;
}

class Lunch : public QDialog
{
    Q_OBJECT

public:
    explicit Lunch(QWidget *parent = nullptr);
    ~Lunch();

private:
    Ui::Lunch *ui;
};

#endif // LUNCH_H
