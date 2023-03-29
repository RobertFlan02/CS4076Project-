#ifndef PANCAKE_H
#define PANCAKE_H

#include <QDialog>

namespace Ui {
class pancake;
}

class pancake : public QDialog
{
    Q_OBJECT

public:
    explicit pancake(QWidget *parent = nullptr);
    ~pancake();

private:
    Ui::pancake *ui;
};

#endif // PANCAKE_H
