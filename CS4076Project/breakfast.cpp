#include "breakfast.h"
#include "ui_wdg.h"

int i = 0;

wdg::wdg(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::wdg)
{
    ui->setupUi(this);
    resize(950,580);

}

wdg::~wdg()
{
    delete ui;
}

void wdg::on_checkBox_stateChanged(int arg1)
{
    i++;
   if (i % 2 == 1) {
    ui->Gone->hide();
   } else {
      ui->Gone->show();
   }


}






