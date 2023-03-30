#include "pasta.h"
#include "ui_pasta.h"

pasta::pasta(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::pasta)
{
    this->setFixedSize(QSize(661,508));
    ui->setupUi(this);
}

pasta::~pasta()
{
    delete ui;
}
