#ifndef CLOSEORDERFORM_H
#define CLOSEORDERFORM_H

#include <QMainWindow>
#include "mainform.h"
namespace Ui {
class CloseOrderForm;
}

class CloseOrderForm : public QMainWindow
{
    Q_OBJECT

public:
    explicit CloseOrderForm(QWidget *parent = 0);
    ~CloseOrderForm();
    CafeClass *Cafe;
    void SetCafe(CafeClass *Cafe){
        this->Cafe = Cafe;
    }
    QVector<int> ReserTables;
    void FillResTable();
    void FillResTableList();
private slots:
    void on_ReturnButton_clicked();

    void on_CloseButton_clicked();

private:
    Ui::CloseOrderForm *ui;
};

#endif // CLOSEORDERFORM_H
