#ifndef PASTA_H
#define PASTA_H

#include <QDialog>

namespace Ui {
class pasta;
}

class pasta : public QDialog
{
    Q_OBJECT

public:
    explicit pasta(QWidget *parent = nullptr);
    ~pasta();

private:
    Ui::pasta *ui;
};

#endif // PASTA_H
