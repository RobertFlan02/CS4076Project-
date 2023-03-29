#include "dinner.h"
#include "ui_dinner.h"

Dinner::Dinner(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dinner)
{
    ui->setupUi(this);
    resize(950,580);
}

Dinner::~Dinner()
{
    delete ui;
}
