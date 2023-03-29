#include "wdg.h"
#include "ui_wdg.h"
#include "pancake.h"
#include "fry.h"
#include "waffles.h"

int i = 0;

wdg::wdg(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::wdg)
{
    this->setFixedSize(QSize(950,580));
    ui->setupUi(this);


}

wdg::~wdg()
{
    delete ui;
}




void wdg::on_radioButton_clicked()
{
    i++;
   if (i % 2 == 1) {
    ui->Gone->hide();

   } else {
      ui->Gone->show();

 }
}


void wdg::on_pancake_clicked()
{
    pancake pan;
    pan.setModal(true);
    pan.exec();

}


void wdg::on_Gone_clicked()
{
    fry fry;
    fry.setModal(true);
    fry.exec();
}


void wdg::on_waffles_clicked()
{
    waffles waffle;
    waffle.setModal(true);
    waffle.exec();
}

