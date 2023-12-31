#ifndef FORMUNITSELECT_H
#define FORMUNITSELECT_H

#include <QWidget>
#include <QDebug>

namespace Ui {
class FormUnitSelect;
}

class FormUnitSelect : public QWidget
{
    Q_OBJECT

public:
    explicit FormUnitSelect(QWidget *parent = 0);
    ~FormUnitSelect();

private slots:
    void on_btn_unit1_viktor_clicked();

    void on_btn_unit2_dorian_clicked();

    void on_btn_unit3_muhad_clicked();

    void on_pushButton_clicked();

private:
    Ui::FormUnitSelect *ui;
};

#endif // FORMUNITSELECT_H
