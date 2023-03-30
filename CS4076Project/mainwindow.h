#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

    void on_Breakfast_clicked();

    void on_Lunch_clicked();

    void on_Dinner_clicked();

    void on_actionbreak_triggered();

    void on_actionOpen_triggered();

    void on_verticalSlider_rangeChanged(int min, int max);

    void on_Breakfast_pressed();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
