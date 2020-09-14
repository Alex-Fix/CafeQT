#include "menuclass.h"

MenuClass::MenuClass()
{
    Position temp;
    QFile file(":/res/MenuDish.txt");
    if((file.exists())&&(file.open(QIODevice::ReadOnly))){
        while(!file.atEnd()){
            temp.id = file.readLine();
            temp.cost = file.readLine();
            temp.name = file.readLine();
            if(temp.id == ""){
                break;
            }
            MenuDish.push_back(temp);
        }
        file.close();
    }
    QFile file1(":/res/MenuDrink.txt");
    if((file1.exists())&&(file1.open(QIODevice::ReadOnly))){
        while(!file1.atEnd()){
            temp.id = file1.readLine();
            temp.cost = file1.readLine();
            temp.name = file1.readLine();
            if(temp.id == ""){
                break;
            }
            MenuDrink.push_back(temp);
        }
        file1.close();
    }
    QFile file2(":/res/MenuAlcoDrink.txt");
    if((file2.exists())&&(file2.open(QIODevice::ReadOnly))){
        while(!file2.atEnd()){
            temp.id = file2.readLine();
            temp.cost = file2.readLine();
            temp.name = file2.readLine();
            if(temp.id == ""){
                break;
            }
            MenuAlcoDrink.push_back(temp);
        }
        file2.close();
    }
}

Position MenuClass::GetMenuDish(int index){
    return MenuDish.at(index);
}

Position MenuClass::GetMenuDrink(int index){
    return MenuDrink.at(index);
}

Position MenuClass::GetMenuAlcoDrink(int index){
    return MenuAlcoDrink.at(index);
}
