#include "porkchop.h"
#include "ui_porkchop.h"

porkchop::porkchop(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::porkchop)
{
    this->setFixedSize(QSize(550,450));
    ui->setupUi(this);
}

porkchop::~porkchop()
{
    delete ui;
}
