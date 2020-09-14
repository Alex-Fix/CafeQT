#include "infoform.h"
#include "ui_infoform.h"

InfoForm::InfoForm(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::InfoForm)
{
    ui->setupUi(this);
}

InfoForm::~InfoForm()
{
    delete ui;
}

void InfoForm::FillResTable(){
    for(int i = 0; i<15;i++){
        if(!(Cafe->GetReservTable(i))){
            ReserTables.push_back(i);
        }
    }
}

void InfoForm::FillResTableList(){
    for(int i = 0; i<ReserTables.size();i++){
        ui->TableList->addItem(QString::number(ReserTables[i]+1));
    }
}

void InfoForm::on_ReturnButton_clicked()
{
    this->close();
}
