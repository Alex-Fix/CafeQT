#include "neworderform.h"
#include "ui_neworderform.h"

NewOrderForm::NewOrderForm(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::NewOrderForm)
{
    vector.clear();
    MenuValue = 0;
    ui->setupUi(this);
}

NewOrderForm::~NewOrderForm()
{

    delete ui;
}


void NewOrderForm::on_ReturnButton_clicked()
{
     this->close();
}

void NewOrderForm::on_pushButton_clicked()
{

}

void NewOrderForm::on_MenuDishButton_clicked()
{
    ui->listWidget->clear();
    QString str;
    Position pos;
    for(int i = 0; i<Cafe->GetMenuDishSize();i++){
      pos = Cafe->GetMenuDish(i);
      str = pos.id + "\t|\t" + pos.cost + "\t|\t" + pos.name;
      str.replace("\n", "");
      ui->listWidget->addItem(str);
    }
    MenuValue = Dish;
    ui->listWidget->setCurrentRow(0);
}

void NewOrderForm::on_MenuDrinkButton_clicked()
{
    ui->listWidget->clear();
    QString str;
    Position pos;
    for(int i = 0; i<Cafe->GetMenuDrinkSize();i++){
      pos = Cafe->GetMenuDrink(i);
      str = pos.id + "\t|\t" + pos.cost + "\t|\t" + pos.name;
      str.replace("\n", "");
      ui->listWidget->addItem(str);
    }
     MenuValue = Drink;
      ui->listWidget->setCurrentRow(0);
}

void NewOrderForm::on_MenuAlcoDrinkButton_clicked()
{
    ui->listWidget->clear();
    QString str;
    Position pos;
    for(int i = 0; i<Cafe->GetMenuAlcoDrinkSize();i++){
      pos = Cafe->GetMenuAlcoDrink(i);
      str = pos.id + "\t|\t" + pos.cost + "\t|\t" + pos.name;
      str.replace("\n", "");
      ui->listWidget->addItem(str);
    }
     MenuValue = AlcoDrink;
      ui->listWidget->setCurrentRow(0);
}

void NewOrderForm::on_AddButton_clicked()
{
    bool is_true = true;
    int num= -1;
    num = (ui->lineEdit->text()).toInt();
    if(num<=0 || ui->listWidget->count() == 0){
         ui->TableLabel->setText("Невірний формат!");
        is_true = false;
    }
    if(is_true){
         ui->TableLabel->setText("Ваш столик: ");
        int item = ui->listWidget->currentRow();
        Position pos;
        PositionOrder ord;
        switch(MenuValue){
        case Dish:
            pos = Cafe->GetMenuDish(item);
            break;
        case Drink:
            pos = Cafe->GetMenuDrink(item);
            break;
        case AlcoDrink:
            pos = Cafe->GetMenuAlcoDrink(item);
            break;
        }
        ord.cost = pos.cost.replace("\n", "");
        ord.name = pos.name.replace("\n", "");
        ord.nums = QString::number(num);
        vector.push_back(ord);
        DoOrder = true;
    }
}

void NewOrderForm::on_AddOrderButton_clicked()
{
    if(DoOrder){
        if(Cafe->FreeTable() != 0){
            int table = Cafe->FreeTable();
            Cafe->ReservTable(table-1);
            for(int i = 0; i<vector.size();i++){
                PositionOrder pos = vector[i];
                for(int j = 0;j<vector.size();j++){
                    if(i == j){
                        continue;
                    }
                    else if(pos == vector[j]){
                        pos = pos + vector[j];
                        vector.remove(i);
                        vector.insert(i,pos);
                        vector.remove(j);
                        j--;
                    }
                }
            }
            Cafe->SetOrder(table-1, vector);
            QString tablestr = "Ваш столик: ";
            tablestr = tablestr + QString::number(table);
             ui->TableLabel->setText(tablestr);
             vector.clear();
             DoOrder = false;
        }
        else{
             ui->TableLabel->setText("Немає вільних столиків!");
        }
    }
}
