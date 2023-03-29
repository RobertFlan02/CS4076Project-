#ifndef BREAKFAST_H
#define BREAKFAST_H

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

private:
    Ui::wdg *ui;
};

#endif // BREAKFAST_H
