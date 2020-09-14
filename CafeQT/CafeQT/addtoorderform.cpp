#include "addtoorderform.h"
#include "ui_addtoorderform.h"

AddToOrderForm::AddToOrderForm(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::AddToOrderForm)
{
    vector.clear();
    MenuValue = 0;
    ui->setupUi(this);


}
void AddToOrderForm::FillResTable(){
    for(int i = 0; i<15;i++){
        if(!(Cafe->GetReservTable(i))){
            ReserTables.push_back(i);
        }
    }
}

void AddToOrderForm::FillResTableList(){
    for(int i = 0; i<ReserTables.size();i++){
        ui->TableList->addItem(QString::number(ReserTables[i]+1));
    }
    ui->TableList->setCurrentRow(0);
}

AddToOrderForm::~AddToOrderForm()
{
    delete ui;
}

void AddToOrderForm::on_MenuDishButton_clicked()
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

void AddToOrderForm::on_MenuDrinkButton_clicked()
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

void AddToOrderForm::on_MenuAlcoDrinkButton_clicked()
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

void AddToOrderForm::on_ReturnButton_clicked()
{
    this->close();
}

void AddToOrderForm::on_AddButton_clicked()
{
     ui->TableLabel->setText("---");
    bool is_true = true;
    int num= -1;
    num = (ui->lineEdit->text()).toInt();
    if(num<=0 || ui->listWidget->count() == 0){
        is_true = false;
        ui->TableLabel->setText("Не вірний формат!");
    }
    if(is_true){
        int item = -1;
        item = ui->listWidget->currentRow();
        if(item>=0){
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
}

void AddToOrderForm::on_AddOrderButton_clicked()
{
    if(DoOrder){
    int index =(ui->TableList->currentItem()->text()).toInt()-1;
    if(index>=0){
        QVector<PositionOrder> temp = Cafe->GetOrder(index);
        for(int i = 0; i<vector.size();i++){
            temp.push_back(vector[i]);
        }
        for(int i = 0; i<temp.size();i++){
            PositionOrder pos = temp[i];
            for(int j = 0;j<temp.size();j++){
                if(i == j){
                    continue;
                }
                else if(pos == temp[j]){
                    pos = pos + temp[j];
                    temp.remove(i);
                    temp.insert(i,pos);
                    temp.remove(j);
                    j--;
                }
            }
        }
        Cafe->SetOrder(index, temp);
        vector.clear();
        ui->TableLabel->setText("Додано!");
        DoOrder = false;
        }
    }
}
