/********************************************************************************
** Form generated from reading UI file 'closeorderform.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLOSEORDERFORM_H
#define UI_CLOSEORDERFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CloseOrderForm
{
public:
    QWidget *centralwidget;
    QPushButton *ReturnButton;
    QListWidget *TableList;
    QPushButton *CloseButton;
    QLabel *TableLabel;
    QLabel *label;
    QLabel *MoneyLabel;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *CloseOrderForm)
    {
        if (CloseOrderForm->objectName().isEmpty())
            CloseOrderForm->setObjectName(QStringLiteral("CloseOrderForm"));
        CloseOrderForm->setWindowModality(Qt::ApplicationModal);
        CloseOrderForm->resize(720, 450);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(CloseOrderForm->sizePolicy().hasHeightForWidth());
        CloseOrderForm->setSizePolicy(sizePolicy);
        CloseOrderForm->setMinimumSize(QSize(720, 450));
        CloseOrderForm->setMaximumSize(QSize(720, 450));
        QFont font;
        font.setFamily(QStringLiteral("Times New Roman"));
        font.setPointSize(10);
        CloseOrderForm->setFont(font);
        QIcon icon;
        icon.addFile(QStringLiteral(":/res/img/cafe-server.gif"), QSize(), QIcon::Normal, QIcon::Off);
        CloseOrderForm->setWindowIcon(icon);
        centralwidget = new QWidget(CloseOrderForm);
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
        TableList = new QListWidget(centralwidget);
        TableList->setObjectName(QStringLiteral("TableList"));
        TableList->setGeometry(QRect(10, 10, 321, 391));
        CloseButton = new QPushButton(centralwidget);
        CloseButton->setObjectName(QStringLiteral("CloseButton"));
        CloseButton->setGeometry(QRect(340, 370, 141, 31));
        sizePolicy1.setHeightForWidth(CloseButton->sizePolicy().hasHeightForWidth());
        CloseButton->setSizePolicy(sizePolicy1);
        CloseButton->setFont(font1);
        CloseButton->setStyleSheet(QLatin1String("QPushButton\n"
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
        TableLabel = new QLabel(centralwidget);
        TableLabel->setObjectName(QStringLiteral("TableLabel"));
        TableLabel->setGeometry(QRect(360, 20, 191, 31));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(440, 80, 191, 151));
        label->setPixmap(QPixmap(QString::fromUtf8(":/res/img/cup_PNG1964-170x170.png")));
        MoneyLabel = new QLabel(centralwidget);
        MoneyLabel->setObjectName(QStringLiteral("MoneyLabel"));
        MoneyLabel->setGeometry(QRect(340, 320, 371, 31));
        QFont font2;
        font2.setPointSize(14);
        MoneyLabel->setFont(font2);
        CloseOrderForm->setCentralWidget(centralwidget);
        menubar = new QMenuBar(CloseOrderForm);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 720, 21));
        CloseOrderForm->setMenuBar(menubar);
        statusbar = new QStatusBar(CloseOrderForm);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        CloseOrderForm->setStatusBar(statusbar);

        retranslateUi(CloseOrderForm);

        QMetaObject::connectSlotsByName(CloseOrderForm);
    } // setupUi

    void retranslateUi(QMainWindow *CloseOrderForm)
    {
        CloseOrderForm->setWindowTitle(QApplication::translate("CloseOrderForm", "CloseOrderForm", nullptr));
        ReturnButton->setText(QApplication::translate("CloseOrderForm", "\320\237\320\276\320\262\320\265\321\200\320\275\321\203\321\202\320\270\321\201\321\217", nullptr));
        CloseButton->setText(QApplication::translate("CloseOrderForm", "\320\227\320\260\320\272\321\200\320\270\321\202\320\270", nullptr));
        TableLabel->setText(QApplication::translate("CloseOrderForm", "<html><head/><body><p><span style=\" font-size:14pt; color:#0f4703;\">\320\227\320\260\320\271\320\275\321\217\321\202\321\226 \321\201\321\202\320\276\320\273\320\270\320\272\320\270:</span></p></body></html>", nullptr));
        label->setText(QString());
        MoneyLabel->setText(QApplication::translate("CloseOrderForm", "<html><head/><body><p><span style=\" font-size:14pt; color:#0f4703;\">\320\224\320\276 \321\201\320\277\320\273\320\260\321\202\320\270:</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CloseOrderForm: public Ui_CloseOrderForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLOSEORDERFORM_H
