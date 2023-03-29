#include "fry.h"
#include "ui_fry.h"

fry::fry(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::fry)
{
    this->setFixedSize(QSize(700,500));
    ui->setupUi(this);
}

fry::~fry()
{
    delete ui;
}
