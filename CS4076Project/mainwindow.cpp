#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "breakfast.h"
#include "lunch.h"
#include "dinner.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)


{
    ui->setupUi(this);
    resize(1050,620);
}

MainWindow::~MainWindow()
{

    delete ui;
}





void MainWindow::on_Breakfast_clicked()
{
    wdg wedigo;
    wedigo.setModal(true);
    wedigo.exec();
}


void MainWindow::on_Lunch_clicked()
{
    Lunch lunch;
    lunch.setModal(true);
    lunch.exec();
}


void MainWindow::on_Dinner_clicked()
{
    Dinner dinner;
    dinner.setModal(true);
    dinner.exec();
}

