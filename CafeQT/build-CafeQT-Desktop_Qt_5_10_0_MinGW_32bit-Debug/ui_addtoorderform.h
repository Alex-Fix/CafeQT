/********************************************************************************
** Form generated from reading UI file 'addtoorderform.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDTOORDERFORM_H
#define UI_ADDTOORDERFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddToOrderForm
{
public:
    QWidget *centralwidget;
    QPushButton *ReturnButton;
    QListWidget *listWidget;
    QPushButton *AddOrderButton;
    QSplitter *splitter;
    QLineEdit *lineEdit;
    QPushButton *AddButton;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *MenuDishButton;
    QPushButton *MenuDrinkButton;
    QPushButton *MenuAlcoDrinkButton;
    QListWidget *TableList;
    QLabel *TableLabel;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *AddToOrderForm)
    {
        if (AddToOrderForm->objectName().isEmpty())
            AddToOrderForm->setObjectName(QStringLiteral("AddToOrderForm"));
        AddToOrderForm->setWindowModality(Qt::ApplicationModal);
        AddToOrderForm->resize(720, 450);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(AddToOrderForm->sizePolicy().hasHeightForWidth());
        AddToOrderForm->setSizePolicy(sizePolicy);
        AddToOrderForm->setMinimumSize(QSize(720, 450));
        AddToOrderForm->setMaximumSize(QSize(720, 450));
        QFont font;
        font.setFamily(QStringLiteral("Times New Roman"));
        font.setPointSize(10);
        AddToOrderForm->setFont(font);
        QIcon icon;
        icon.addFile(QStringLiteral(":/res/img/cafe-server.gif"), QSize(), QIcon::Normal, QIcon::Off);
        AddToOrderForm->setWindowIcon(icon);
        centralwidget = new QWidget(AddToOrderForm);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        ReturnButton = new QPushButton(centralwidget);
        ReturnButton->setObjectName(QStringLiteral("ReturnButton"));
        ReturnButton->setGeometry(QRect(570, 370, 141, 31));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(ReturnButton->sizePolicy().hasHeightForWidth());
        ReturnButton->setSizePolicy(sizePolicy1);
        QFont font1;
        font1.setBold(true);
        font1.setUnderline(false);
        font1.setWeight(87);
        font1.setStrikeOut(false);
        ReturnButton->setFont(font1);
        ReturnButton->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"    font-weight: 700;\n"
"  color: white;\n"
"  text-decoration: none;\n"
"  padding: .8em 1em calc(.8em + 3px);\n"
"  border-radius: 3px;\n"
"  background: rgb(64,199,129);\n"
"  box-shadow: 0 -3px rgb(53,167,110) inset;\n"
"  transition: 0.2s;\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"   background: rgb(33,147,90);\n"
"  box-shadow: 0 3px rgb(33,147,90) inset;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"   background: rgb(53, 167, 110);\n"
"}\n"
"\n"
"QPushButton:focus {\n"
"    /*background-color: red;*/\n"
"}"));
        listWidget = new QListWidget(centralwidget);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(10, 50, 561, 311));
        AddOrderButton = new QPushButton(centralwidget);
        AddOrderButton->setObjectName(QStringLiteral("AddOrderButton"));
        AddOrderButton->setGeometry(QRect(10, 370, 181, 31));
        sizePolicy1.setHeightForWidth(AddOrderButton->sizePolicy().hasHeightForWidth());
        AddOrderButton->setSizePolicy(sizePolicy1);
        AddOrderButton->setFont(font1);
        AddOrderButton->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"    font-weight: 700;\n"
"  color: white;\n"
"  text-decoration: none;\n"
"  padding: .8em 1em calc(.8em + 3px);\n"
"  border-radius: 3px;\n"
"  background: rgb(64,199,129);\n"
"  box-shadow: 0 -3px rgb(53,167,110) inset;\n"
"  transition: 0.2s;\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"   background: rgb(33,147,90);\n"
"  box-shadow: 0 3px rgb(33,147,90) inset;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"   background: rgb(53, 167, 110);\n"
"}\n"
"\n"
"QPushButton:focus {\n"
"    /*background-color: red;*/\n"
"}"));
        splitter = new QSplitter(centralwidget);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setGeometry(QRect(490, 10, 221, 29));
        splitter->setOrientation(Qt::Horizontal);
        lineEdit = new QLineEdit(splitter);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setMaximumSize(QSize(128, 16777215));
        splitter->addWidget(lineEdit);
        AddButton = new QPushButton(splitter);
        AddButton->setObjectName(QStringLiteral("AddButton"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(AddButton->sizePolicy().hasHeightForWidth());
        AddButton->setSizePolicy(sizePolicy2);
        AddButton->setMaximumSize(QSize(88, 16777215));
        AddButton->setFont(font1);
        AddButton->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"    font-weight: 700;\n"
"  color: white;\n"
"  text-decoration: none;\n"
"  padding: .8em 1em calc(.8em + 3px);\n"
"  border-radius: 3px;\n"
"  background: rgb(64,199,129);\n"
"  box-shadow: 0 -3px rgb(53,167,110) inset;\n"
"  transition: 0.2s;\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"   background: rgb(33,147,90);\n"
"  box-shadow: 0 3px rgb(33,147,90) inset;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"   background: rgb(53, 167, 110);\n"
"}\n"
"\n"
"QPushButton:focus {\n"
"    /*background-color: red;*/\n"
"}"));
        splitter->addWidget(AddButton);
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 278, 31));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        MenuDishButton = new QPushButton(layoutWidget);
        MenuDishButton->setObjectName(QStringLiteral("MenuDishButton"));
        sizePolicy2.setHeightForWidth(MenuDishButton->sizePolicy().hasHeightForWidth());
        MenuDishButton->setSizePolicy(sizePolicy2);
        MenuDishButton->setFont(font1);
        MenuDishButton->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"    font-weight: 700;\n"
"  color: white;\n"
"  text-decoration: none;\n"
"  padding: .8em 1em calc(.8em + 3px);\n"
"  border-radius: 3px;\n"
"  background: rgb(64,199,129);\n"
"  box-shadow: 0 -3px rgb(53,167,110) inset;\n"
"  transition: 0.2s;\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"   background: rgb(33,147,90);\n"
"  box-shadow: 0 3px rgb(33,147,90) inset;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"   background: rgb(53, 167, 110);\n"
"}\n"
"\n"
"QPushButton:focus {\n"
"    /*background-color: red;*/\n"
"}"));

        horizontalLayout->addWidget(MenuDishButton);

        MenuDrinkButton = new QPushButton(layoutWidget);
        MenuDrinkButton->setObjectName(QStringLiteral("MenuDrinkButton"));
        sizePolicy2.setHeightForWidth(MenuDrinkButton->sizePolicy().hasHeightForWidth());
        MenuDrinkButton->setSizePolicy(sizePolicy2);
        MenuDrinkButton->setFont(font1);
        MenuDrinkButton->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"    font-weight: 700;\n"
"  color: white;\n"
"  text-decoration: none;\n"
"  padding: .8em 1em calc(.8em + 3px);\n"
"  border-radius: 3px;\n"
"  background: rgb(64,199,129);\n"
"  box-shadow: 0 -3px rgb(53,167,110) inset;\n"
"  transition: 0.2s;\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"   background: rgb(33,147,90);\n"
"  box-shadow: 0 3px rgb(33,147,90) inset;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"   background: rgb(53, 167, 110);\n"
"}\n"
"\n"
"QPushButton:focus {\n"
"    /*background-color: red;*/\n"
"}"));

        horizontalLayout->addWidget(MenuDrinkButton);

        MenuAlcoDrinkButton = new QPushButton(layoutWidget);
        MenuAlcoDrinkButton->setObjectName(QStringLiteral("MenuAlcoDrinkButton"));
        sizePolicy2.setHeightForWidth(MenuAlcoDrinkButton->sizePolicy().hasHeightForWidth());
        MenuAlcoDrinkButton->setSizePolicy(sizePolicy2);
        MenuAlcoDrinkButton->setFont(font1);
        MenuAlcoDrinkButton->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"    font-weight: 700;\n"
"  color: white;\n"
"  text-decoration: none;\n"
"  padding: .8em 1em calc(.8em + 3px);\n"
"  border-radius: 3px;\n"
"  background: rgb(64,199,129);\n"
"  box-shadow: 0 -3px rgb(53,167,110) inset;\n"
"  transition: 0.2s;\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"   background: rgb(33,147,90);\n"
"  box-shadow: 0 3px rgb(33,147,90) inset;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"   background: rgb(53, 167, 110);\n"
"}\n"
"\n"
"QPushButton:focus {\n"
"    /*background-color: red;*/\n"
"}"));

        horizontalLayout->addWidget(MenuAlcoDrinkButton);

        TableList = new QListWidget(centralwidget);
        TableList->setObjectName(QStringLiteral("TableList"));
        TableList->setGeometry(QRect(580, 50, 131, 311));
        QFont font2;
        font2.setPointSize(9);
        TableList->setFont(font2);
        TableLabel = new QLabel(centralwidget);
        TableLabel->setObjectName(QStringLiteral("TableLabel"));
        TableLabel->setGeometry(QRect(220, 380, 261, 16));
        QFont font3;
        font3.setPointSize(14);
        TableLabel->setFont(font3);
        AddToOrderForm->setCentralWidget(centralwidget);
        menubar = new QMenuBar(AddToOrderForm);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 720, 21));
        AddToOrderForm->setMenuBar(menubar);
        statusbar = new QStatusBar(AddToOrderForm);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        AddToOrderForm->setStatusBar(statusbar);

        retranslateUi(AddToOrderForm);

        QMetaObject::connectSlotsByName(AddToOrderForm);
    } // setupUi

    void retranslateUi(QMainWindow *AddToOrderForm)
    {
        AddToOrderForm->setWindowTitle(QApplication::translate("AddToOrderForm", "AddToOrderForm", nullptr));
        ReturnButton->setText(QApplication::translate("AddToOrderForm", "\320\237\320\276\320\262\320\265\321\200\320\275\321\203\321\202\320\270\321\201\321\217", nullptr));
        AddOrderButton->setText(QApplication::translate("AddToOrderForm", "\320\224\320\276\320\264\320\260\321\202\320\270 \320\264\320\276 \320\267\320\260\320\274\320\276\320\262\320\273\320\265\320\275\320\275\321\217", nullptr));
        AddButton->setText(QApplication::translate("AddToOrderForm", "\320\224\320\276\320\264\320\260\321\202\320\270", nullptr));
        MenuDishButton->setText(QApplication::translate("AddToOrderForm", "\320\241\321\202\321\200\320\260\320\262\320\270", nullptr));
        MenuDrinkButton->setText(QApplication::translate("AddToOrderForm", "\320\235\320\260\320\277\320\276\321\227", nullptr));
        MenuAlcoDrinkButton->setText(QApplication::translate("AddToOrderForm", "\320\220\320\273\320\272\320\276\320\263\320\276\320\273\321\214", nullptr));
        TableLabel->setText(QApplication::translate("AddToOrderForm", "---", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddToOrderForm: public Ui_AddToOrderForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDTOORDERFORM_H
