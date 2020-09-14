#ifndef MENUCLASS_H
#define MENUCLASS_H
#include <QVector>
#include <QFile>
#include <QString>

class Position{
  public:
    QString id, cost, name;
};

class MenuClass
{
private:
    QVector<Position> MenuDish;
    QVector<Position> MenuDrink;
    QVector<Position> MenuAlcoDrink;
public:
    MenuClass();
    Position GetMenuDish(int index);
    int GetMenuDishSize(){
        return MenuDish.size();
    }
    Position GetMenuDrink(int index);
    int GetMenuDrinkSize(){
        return MenuDrink.size();
    }
    Position GetMenuAlcoDrink(int index);
    int GetMenuAlcoDrinkSize(){
        return MenuAlcoDrink.size();
    }
};

#endif // MENUCLASS_H
