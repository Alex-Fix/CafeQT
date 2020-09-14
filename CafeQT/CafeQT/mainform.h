#ifndef MAINFORM_H
#define MAINFORM_H

#include <QMainWindow>
#include <QMessageBox>
#include <QFile>
#include <QString>
#include <QApplication>
#include <QDialog>
#include "cafeclass.h"
#include "neworderform.h"
#include "addtoorderform.h"
#include "infoaboutorderform.h"
#include "infoform.h"
#include "deleteorder.h"
#include "closeorderform.h"

using namespace std;

namespace Ui {
class MainForm;
}



class MainForm : public QMainWindow
{
    Q_OBJECT

public:
    CafeClass Cafe;
    explicit MainForm(QWidget *parent = 0);
    ~MainForm();

private slots:
    void on_InfoAboutDev_triggered();

    void on_Money_triggered();

    void on_Exit_triggered();

    void on_NewOrderButton_clicked();

    void on_AddToOrderButton_clicked();

    void on_InfoAboutOrderButton_clicked();

    void on_Info_clicked();

    void on_DeleteOrderButton_clicked();

    void on_CloseOrderButton_clicked();

private:
    Ui::MainForm *ui;
};

#endif // MAINFORM_H
