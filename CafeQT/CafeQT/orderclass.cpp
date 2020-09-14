#include "orderclass.h"

OrderClass::OrderClass()
{
    for(int i = 0; i<15;i++){
        Orders.push_back(QVector<PositionOrder>());
    }
}

QVector<PositionOrder> OrderClass::GetOrder(int index){
    return Orders.at(index);
}

void OrderClass::SetOrder(int index, QVector<PositionOrder> Order){
    IsOrders = true;
    Orders.remove(index);
    Orders.insert(index, Order);
}

void OrderClass::ClearOrder(int index){
    QVector<PositionOrder> vector;
    Orders.remove(index);
    Orders.insert(index,vector);
}

