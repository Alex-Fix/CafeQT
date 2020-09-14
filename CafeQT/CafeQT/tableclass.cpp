#include "tableclass.h"

TableClass::TableClass()
{
    for(int i = 0; i<15;i++){
        FreeTables[i] = true;
    }
}

void TableClass::ReservTable(int index){
    if(index>=0 && index<15){
        FreeTables[index] = false;
    }
    else{
        throw "IndexOutRangeException";
    }
}

int TableClass::FreeTable(){
    for(int i = 0; i<15;i++){
        if(FreeTables[i]){
            return i+1;
        }
    }
    return 0;
}

void TableClass::UnReservTable(int index){
    if(index >= 0 && index<15){
        FreeTables[index] = true;
    }
    else{
        throw "IndexOutRangeException";
    }
}


bool TableClass::GetReservTable(int index){
    if((FreeTables[index]) == true){
        return true;
    }
    else{
        return false;
    }
}
