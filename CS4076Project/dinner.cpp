#include "dinner.h"
#include "ui_dinner.h"

 int fu = 0;
 int fu2 = 0;

Dinner::Dinner(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dinner)

{

    ui->setupUi(this);
    resize(950,580);
    ui->label_2->hide();
    ui->label->hide();
}

Dinner::~Dinner()
{
    delete ui;
}

void Dinner::on_checkBox_2_stateChanged(int arg1)
{

    fu++;
   if (fu % 2 == 1) {
    ui->label_2->show();
   } else {
      ui->label_2->hide();

 }
}


void Dinner::on_checkBox_stateChanged(int arg1)
{
    fu2++;
   if (fu2 % 2 == 1) {
    ui->label->show();
   } else {
      ui->label->hide();

  }
}

