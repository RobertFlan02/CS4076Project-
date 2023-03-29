#ifndef FRY_H
#define FRY_H

#include <QDialog>

namespace Ui {
class fry;
}

class fry : public QDialog
{
    Q_OBJECT

public:
    explicit fry(QWidget *parent = nullptr);
    ~fry();

private:
    Ui::fry *ui;
};

#endif // FRY_H
