#include "pancake.h"
#include "ui_pancake.h"

pancake::pancake(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::pancake)
{
    this->setFixedSize(QSize(850,500));
    ui->setupUi(this);
}

pancake::~pancake()
{
    delete ui;
}
