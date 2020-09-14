#ifndef INFOABOUTORDERFORM_H
#define INFOABOUTORDERFORM_H

#include <QMainWindow>
#include "mainform.h"
namespace Ui {
class InfoAboutOrderForm;
}

class InfoAboutOrderForm : public QMainWindow
{
    Q_OBJECT

public:
    explicit InfoAboutOrderForm(QWidget *parent = 0);
    ~InfoAboutOrderForm();
    CafeClass *Cafe;
    void SetCafe(CafeClass *Cafe){
        this->Cafe = Cafe;
    }
    QVector<int> ReserTables;
    void FillResTable();
    void FillResTableList();
private slots:
    void on_ReturnButton_clicked();

    void on_CheckButton_clicked();

private:
    Ui::InfoAboutOrderForm *ui;
};

#endif // INFOABOUTORDERFORM_H
