#include "lunch.h"
#include "ui_lunch.h"

Lunch::Lunch(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Lunch)
{
    ui->setupUi(this);
    resize(950,580);
}

Lunch::~Lunch()
{
    delete ui;
}
