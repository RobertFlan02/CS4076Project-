#include "dinner.h"
#include "ui_dinner.h"
#include "pasta.h"
#include "porkchop.h"

 int fu = 0;
 int fu2 = 0;

Dinner::Dinner(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dinner)

{
this->setFixedSize(QSize(950,580));
    ui->setupUi(this);
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


void Dinner::on_porkchops_clicked()
{
    porkchop pork;
    pork.setModal(true);
    pork.exec();

}


void Dinner::on_pasta_clicked()
{
    pasta pasta;
    pasta.setModal(true);
    pasta.exec();
}

