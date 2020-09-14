#ifndef CAFECLASS_H
#define CAFECLASS_H
#include "tableclass.h"
#include "menuclass.h"
#include "orderclass.h"

class CafeClass: public TableClass, public MenuClass, public OrderClass
{
public:
    CafeClass();
};

#endif // CAFECLASS_H
