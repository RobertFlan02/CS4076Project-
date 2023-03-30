#ifndef PORKCHOP_H
#define PORKCHOP_H

#include <QDialog>

namespace Ui {
class porkchop;
}

class porkchop : public QDialog
{
    Q_OBJECT

public:
    explicit porkchop(QWidget *parent = nullptr);
    ~porkchop();

private:
    Ui::porkchop *ui;
};

#endif // PORKCHOP_H
