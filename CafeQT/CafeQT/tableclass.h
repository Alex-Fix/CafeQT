#ifndef TABLECLASS_H
#define TABLECLASS_H
#include <QVector>

class TableClass
{
private:
    bool FreeTables[15];
public:
    TableClass();
    void ReservTable(int index);
    int FreeTable();
    void UnReservTable(int index);
    bool GetReservTable(int index);
};

#endif // TABLECLASS_H
