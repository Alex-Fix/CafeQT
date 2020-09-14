#include "mainform.h"
#include "ui_mainform.h"

MainForm::MainForm(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainForm)
{
    ui->setupUi(this);
}

MainForm::~MainForm()
{
    delete ui;
}

void MainForm::on_InfoAboutDev_triggered()
{
    QMessageBox::information(this, "Інформація про розробника", "Program was created by Oleksandr Papish(@Alex_Fix251)");
}

void MainForm::on_Money_triggered()
{
}

void MainForm::on_Exit_triggered()
{
    QApplication::quit();
}

void MainForm::on_NewOrderButton_clicked()
{
   NewOrderForm *form = new NewOrderForm;
   form->SetCafe(&Cafe);
   form->show();
}

void MainForm::on_AddToOrderButton_clicked()
{
    if(Cafe.IsOrders){
        AddToOrderForm *form = new AddToOrderForm;
        form->SetCafe(&Cafe);
        form->FillResTable();
        form->FillResTableList();
        form->show();
    }
}

void MainForm::on_InfoAboutOrderButton_clicked()
{
    if(Cafe.IsOrders){
    InfoAboutOrderForm *form = new InfoAboutOrderForm;
    form->SetCafe(&Cafe);
    form->FillResTable();
    form->FillResTableList();
    form->show();
    }
}

void MainForm::on_Info_clicked()
{
    if(Cafe.IsOrders){
    InfoForm *form = new InfoForm;
    form->SetCafe(&Cafe);
    form->FillResTable();
    form->FillResTableList();
    form->show();
    }
}

void MainForm::on_DeleteOrderButton_clicked()
{
    if(Cafe.IsOrders){
    DeleteOrder *form = new DeleteOrder;
    form->SetCafe(&Cafe);
    form->FillResTable();
    form->FillResTableList();
    form->show();
    }
}

void MainForm::on_CloseOrderButton_clicked()
{
    if(Cafe.IsOrders){
    CloseOrderForm *form = new CloseOrderForm;
    form->SetCafe(&Cafe);
    form->FillResTable();
    form->FillResTableList();
    form->show();
    }
}
