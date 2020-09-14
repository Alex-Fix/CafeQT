/********************************************************************************
** Form generated from reading UI file 'infoaboutorderform.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INFOABOUTORDERFORM_H
#define UI_INFOABOUTORDERFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_InfoAboutOrderForm
{
public:
    QWidget *centralwidget;
    QListWidget *TableList;
    QListWidget *OrdersList;
    QPushButton *CheckButton;
    QPushButton *ReturnButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *InfoAboutOrderForm)
    {
        if (InfoAboutOrderForm->objectName().isEmpty())
            InfoAboutOrderForm->setObjectName(QStringLiteral("InfoAboutOrderForm"));
        InfoAboutOrderForm->setWindowModality(Qt::ApplicationModal);
        InfoAboutOrderForm->resize(720, 450);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(InfoAboutOrderForm->sizePolicy().hasHeightForWidth());
        InfoAboutOrderForm->setSizePolicy(sizePolicy);
        InfoAboutOrderForm->setMinimumSize(QSize(720, 450));
        InfoAboutOrderForm->setMaximumSize(QSize(720, 450));
        QFont font;
        font.setFamily(QStringLiteral("Times New Roman"));
        font.setPointSize(10);
        InfoAboutOrderForm->setFont(font);
        QIcon icon;
        icon.addFile(QStringLiteral(":/res/img/cafe-server.gif"), QSize(), QIcon::Normal, QIcon::Off);
        InfoAboutOrderForm->setWindowIcon(icon);
        centralwidget = new QWidget(InfoAboutOrderForm);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        TableList = new QListWidget(centralwidget);
        TableList->setObjectName(QStringLiteral("TableList"));
        TableList->setGeometry(QRect(10, 10, 111, 351));
        OrdersList = new QListWidget(centralwidget);
        OrdersList->setObjectName(QStringLiteral("OrdersList"));
        OrdersList->setGeometry(QRect(130, 10, 581, 351));
        CheckButton = new QPushButton(centralwidget);
        CheckButton->setObjectName(QStringLiteral("CheckButton"));
        CheckButton->setGeometry(QRect(10, 370, 461, 31));
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setUnderline(false);
        font1.setWeight(87);
        font1.setStrikeOut(false);
        CheckButton->setFont(font1);
        CheckButton->setStyleSheet(QLatin1String("QPushButton\n"
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
        ReturnButton = new QPushButton(centralwidget);
        ReturnButton->setObjectName(QStringLiteral("ReturnButton"));
        ReturnButton->setGeometry(QRect(490, 370, 221, 31));
        QFont font2;
        font2.setBold(true);
        font2.setUnderline(false);
        font2.setWeight(87);
        font2.setStrikeOut(false);
        ReturnButton->setFont(font2);
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
        InfoAboutOrderForm->setCentralWidget(centralwidget);
        menubar = new QMenuBar(InfoAboutOrderForm);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 720, 21));
        InfoAboutOrderForm->setMenuBar(menubar);
        statusbar = new QStatusBar(InfoAboutOrderForm);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        InfoAboutOrderForm->setStatusBar(statusbar);

        retranslateUi(InfoAboutOrderForm);

        QMetaObject::connectSlotsByName(InfoAboutOrderForm);
    } // setupUi

    void retranslateUi(QMainWindow *InfoAboutOrderForm)
    {
        InfoAboutOrderForm->setWindowTitle(QApplication::translate("InfoAboutOrderForm", "InfoAboutOrder", nullptr));
        CheckButton->setText(QApplication::translate("InfoAboutOrderForm", "\320\222\320\270\320\262\320\265\321\201\321\202\320\270", nullptr));
        ReturnButton->setText(QApplication::translate("InfoAboutOrderForm", "\320\237\320\276\320\262\320\265\321\200\320\275\321\203\321\202\320\270\321\201\321\217", nullptr));
    } // retranslateUi

};

namespace Ui {
    class InfoAboutOrderForm: public Ui_InfoAboutOrderForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INFOABOUTORDERFORM_H
