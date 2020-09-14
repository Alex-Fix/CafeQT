#ifndef INFOFORM_H
#define INFOFORM_H

#include <QMainWindow>
#include "mainform.h"
namespace Ui {
class InfoForm;
}

class InfoForm : public QMainWindow
{
    Q_OBJECT

public:
    explicit InfoForm(QWidget *parent = 0);
    ~InfoForm();
    CafeClass *Cafe;
    void SetCafe(CafeClass *Cafe){
        this->Cafe = Cafe;
    }
    QVector<int> ReserTables;
    void FillResTable();
    void FillResTableList();

private slots:
    void on_ReturnButton_clicked();

private:
    Ui::InfoForm *ui;
};

#endif // INFOFORM_H
