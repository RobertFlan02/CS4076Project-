#include "waffles.h"
#include "ui_waffles.h"

waffles::waffles(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::waffles)
{
    this->setFixedSize(QSize(750,500));
    ui->setupUi(this);
}

waffles::~waffles()
{
    delete ui;
}
