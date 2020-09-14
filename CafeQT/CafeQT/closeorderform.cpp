#include "closeorderform.h"
#include "ui_closeorderform.h"

CloseOrderForm::CloseOrderForm(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::CloseOrderForm)
{
    ui->setupUi(this);
}

CloseOrderForm::~CloseOrderForm()
{
    delete ui;
}

void CloseOrderForm::on_ReturnButton_clicked()
{
    this->close();
}
void CloseOrderForm::FillResTable(){
    for(int i = 0; i<15;i++){
        if(!(Cafe->GetReservTable(i))){
            ReserTables.push_back(i);
        }
    }
}

void CloseOrderForm::FillResTableList(){
    for(int i = 0; i<ReserTables.size();i++){
        ui->TableList->addItem(QString::number(ReserTables[i]+1));
    }
     ui->TableList->setCurrentRow(0);
}

void CloseOrderForm::on_CloseButton_clicked()
{
    ui->MoneyLabel->setText("До сплати:");
    int index = -1;
    if(ui->TableList->count()>0){
        index= (ui->TableList->currentItem()->text()).toInt() -1;
        if(index >= 0){
            QVector<PositionOrder> vector;
            vector = Cafe->GetOrder(index);
            int money = 0;
            for(int i = 0; i<vector.size();i++){
                money += (vector[i].cost.toInt()) *(vector[i].nums.toInt());
            }
             ui->MoneyLabel->setText("До сплати: "+ QString::number(money) +"грн.");
            Cafe->ClearOrder(index);
            Cafe->UnReservTable(index);
            ui->TableList->clear();
            ReserTables.clear();
            FillResTable();
            FillResTableList();
            if(ReserTables.size() == 0){
                Cafe->IsOrders = false;
            }
        }
        else{
            this->close();
        }
    }
}
