#ifndef ADDTOORDERFORM_H
#define ADDTOORDERFORM_H

#include <QMainWindow>
#include "mainform.h"
namespace Ui {
class AddToOrderForm;
}

class AddToOrderForm : public QMainWindow
{
    Q_OBJECT

public:
    explicit AddToOrderForm(QWidget *parent = 0);
    ~AddToOrderForm();
    enum {Dish = 1, Drink, AlcoDrink};
    int MenuValue;
    QVector<PositionOrder> vector;
    CafeClass *Cafe;
    void SetCafe(CafeClass *Cafe){
        this->Cafe = Cafe;
    }
    QVector<int> ReserTables;
    void FillResTable();
    void FillResTableList();
     bool DoOrder = false;

private slots:
    void on_MenuDishButton_clicked();

    void on_MenuDrinkButton_clicked();

    void on_MenuAlcoDrinkButton_clicked();

    void on_ReturnButton_clicked();

    void on_AddButton_clicked();

    void on_AddOrderButton_clicked();

private:
    Ui::AddToOrderForm *ui;
};

#endif // ADDTOORDERFORM_H
