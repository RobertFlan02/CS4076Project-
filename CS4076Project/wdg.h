#ifndef WDG_H
#define WDG_H

#include <QDialog>

namespace Ui {
class wdg;
}

class wdg : public QDialog
{
    Q_OBJECT

public:
    explicit wdg(QWidget *parent = nullptr);
    ~wdg();

private slots:
    void on_checkBox_stateChanged(int arg1);

    void on_pushButton_2_windowIconChanged(const QIcon &icon);

    void on_radioButton_clicked();

    void on_pancake_clicked();

    void on_Gone_clicked();

    void on_waffles_clicked();

private:
    Ui::wdg *ui;
};

#endif // WDG_H
