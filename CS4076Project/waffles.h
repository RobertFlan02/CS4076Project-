#ifndef WAFFLES_H
#define WAFFLES_H

#include <QDialog>

namespace Ui {
class waffles;
}

class waffles : public QDialog
{
    Q_OBJECT

public:
    explicit waffles(QWidget *parent = nullptr);
    ~waffles();

private:
    Ui::waffles *ui;
};

#endif // WAFFLES_H
