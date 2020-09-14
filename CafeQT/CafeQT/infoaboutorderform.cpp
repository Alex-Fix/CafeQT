#include "infoaboutorderform.h"
#include "ui_infoaboutorderform.h"

InfoAboutOrderForm::InfoAboutOrderForm(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::InfoAboutOrderForm)
{
    ui->setupUi(this);
}

void InfoAboutOrderForm::FillResTable(){
    for(int i = 0; i<15;i++){
        if(!(Cafe->GetReservTable(i))){
            ReserTables.push_back(i);
        }
    }
}

void InfoAboutOrderForm::FillResTableList(){
    for(int i = 0; i<ReserTables.size();i++){
        ui->TableList->addItem(QString::number(ReserTables[i]+1));
    }
     ui->TableList->setCurrentRow(0);
}

InfoAboutOrderForm::~InfoAboutOrderForm()
{
    delete ui;
}

void InfoAboutOrderForm::on_ReturnButton_clicked()
{
    this->close();
}

void InfoAboutOrderForm::on_CheckButton_clicked()
{
    int index = -1;
    index = (ui->TableList->currentItem()->text()).toInt() -1;
    if(index>=0){
        ui->OrdersList->clear();
        QVector<PositionOrder> pos;
        pos = Cafe->GetOrder(index);
        for(int i = 0; i<pos.size();i++){
            ui->OrdersList->addItem(pos[i].nums + "\t|\t"+pos[i].cost + "\t|\t"+pos[i].name);
        }
    }
}
