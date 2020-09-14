#ifndef NEWORDERFORM_H
#define NEWORDERFORM_H

#include <QMainWindow>
#include "mainform.h"
namespace Ui {
class NewOrderForm;
}

class NewOrderForm : public QMainWindow
{
    Q_OBJECT

public:
    enum {Dish = 1, Drink, AlcoDrink};
    int MenuValue;
    bool DoOrder = false;
    QVector<PositionOrder> vector;
    CafeClass *Cafe;
    explicit NewOrderForm( QWidget *parent = 0);
    void SetCafe(CafeClass *Cafe){
        this->Cafe = Cafe;
    }
    ~NewOrderForm();

private slots:
    void on_pushButton_clicked();

    void on_ReturnButton_clicked();

    void on_MenuDishButton_clicked();

    void on_MenuDrinkButton_clicked();

    void on_MenuAlcoDrinkButton_clicked();

    void on_AddButton_clicked();

    void on_AddOrderButton_clicked();

private:
    Ui::NewOrderForm *ui;
};

#endif // NEWORDERFORM_H
