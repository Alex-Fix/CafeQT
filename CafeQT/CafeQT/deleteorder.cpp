#include "deleteorder.h"
#include "ui_deleteorder.h"

DeleteOrder::DeleteOrder(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::DeleteOrder)
{
    ui->setupUi(this);
}

DeleteOrder::~DeleteOrder()
{
    delete ui;
}

void DeleteOrder::on_ReturnButton_2_clicked()
{
    this->close();
}

void DeleteOrder::FillResTable(){
    for(int i = 0; i<15;i++){
        if(!(Cafe->GetReservTable(i))){
            ReserTables.push_back(i);
        }
    }
}

void DeleteOrder::FillResTableList(){
    for(int i = 0; i<ReserTables.size();i++){
        ui->TableList->addItem(QString::number(ReserTables[i]+1));
    }
     ui->TableList->setCurrentRow(0);
}
void DeleteOrder::on_DeleteButton_clicked()
{
    int index = -1;
    if(ui->TableList->count()>0){
        index= (ui->TableList->currentItem()->text()).toInt() -1;
        if(index >= 0){
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
