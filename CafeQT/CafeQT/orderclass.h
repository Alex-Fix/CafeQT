#ifndef ORDERCLASS_H
#define ORDERCLASS_H
#include <QVector>
#include<QString>

class PositionOrder{
public:
    QString name, cost, nums;
    bool operator==(PositionOrder &obj){
        if(this->name == obj.name){
        return true;
        }
        else{
            return false;
        }
    }
    PositionOrder& operator=(const PositionOrder &obj){
        if(this == &obj){
        return *this;
        }
        else{
            this->cost = obj.cost;
            this->name = obj.name;
            this->nums = obj.nums;
           }
        return *this;
    }
    PositionOrder operator+(PositionOrder &X){
            PositionOrder result;
            result.cost = X.cost;
            result.name = X.name;
            result.nums = QString::number(this->nums.toInt()+X.nums.toInt());
            return result;
    }
};

class OrderClass
{
private:
 QVector<QVector<PositionOrder>> Orders;
public:
    OrderClass();
    QVector<PositionOrder> GetOrder(int index);
    void SetOrder(int index, QVector<PositionOrder> Order);
    void ClearOrder(int index);
    bool IsOrders = false;
};

#endif // ORDERCLASS_H
