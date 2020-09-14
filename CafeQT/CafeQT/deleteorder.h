#ifndef DELETEORDER_H
#define DELETEORDER_H

#include <QMainWindow>
#include "mainform.h"
namespace Ui {
class DeleteOrder;
}

class DeleteOrder : public QMainWindow
{
    Q_OBJECT

public:
    explicit DeleteOrder(QWidget *parent = 0);
    ~DeleteOrder();
    CafeClass *Cafe;
    void SetCafe(CafeClass *Cafe){
        this->Cafe = Cafe;
    }
    QVector<int> ReserTables;
    void FillResTable();
    void FillResTableList();

private slots:
    void on_ReturnButton_2_clicked();

    void on_DeleteButton_clicked();

private:
    Ui::DeleteOrder *ui;
};

#endif // DELETEORDER_H
