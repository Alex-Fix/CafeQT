/********************************************************************************
** Form generated from reading UI file 'deleteorder.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELETEORDER_H
#define UI_DELETEORDER_H

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

class Ui_DeleteOrder
{
public:
    QWidget *centralwidget;
    QPushButton *ReturnButton_2;
    QListWidget *TableList;
    QLabel *TableLabel;
    QLabel *label;
    QPushButton *DeleteButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *DeleteOrder)
    {
        if (DeleteOrder->objectName().isEmpty())
            DeleteOrder->setObjectName(QStringLiteral("DeleteOrder"));
        DeleteOrder->setWindowModality(Qt::ApplicationModal);
        DeleteOrder->resize(720, 450);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(DeleteOrder->sizePolicy().hasHeightForWidth());
        DeleteOrder->setSizePolicy(sizePolicy);
        DeleteOrder->setMinimumSize(QSize(720, 450));
        DeleteOrder->setMaximumSize(QSize(720, 450));
        QFont font;
        font.setFamily(QStringLiteral("Times New Roman"));
        font.setPointSize(10);
        DeleteOrder->setFont(font);
        QIcon icon;
        icon.addFile(QStringLiteral(":/res/img/cafe-server.gif"), QSize(), QIcon::Normal, QIcon::Off);
        DeleteOrder->setWindowIcon(icon);
        centralwidget = new QWidget(DeleteOrder);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        ReturnButton_2 = new QPushButton(centralwidget);
        ReturnButton_2->setObjectName(QStringLiteral("ReturnButton_2"));
        ReturnButton_2->setGeometry(QRect(570, 370, 141, 31));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(ReturnButton_2->sizePolicy().hasHeightForWidth());
        ReturnButton_2->setSizePolicy(sizePolicy1);
        QFont font1;
        font1.setBold(true);
        font1.setUnderline(false);
        font1.setWeight(87);
        font1.setStrikeOut(false);
        ReturnButton_2->setFont(font1);
        ReturnButton_2->setStyleSheet(QLatin1String("QPushButton\n"
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
        TableLabel = new QLabel(centralwidget);
        TableLabel->setObjectName(QStringLiteral("TableLabel"));
        TableLabel->setGeometry(QRect(360, 20, 191, 31));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(440, 110, 191, 151));
        label->setPixmap(QPixmap(QString::fromUtf8(":/res/img/cup_PNG1964-170x170.png")));
        DeleteButton = new QPushButton(centralwidget);
        DeleteButton->setObjectName(QStringLiteral("DeleteButton"));
        DeleteButton->setGeometry(QRect(340, 370, 141, 31));
        sizePolicy1.setHeightForWidth(DeleteButton->sizePolicy().hasHeightForWidth());
        DeleteButton->setSizePolicy(sizePolicy1);
        DeleteButton->setFont(font1);
        DeleteButton->setStyleSheet(QLatin1String("QPushButton\n"
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
        DeleteOrder->setCentralWidget(centralwidget);
        menubar = new QMenuBar(DeleteOrder);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 720, 21));
        DeleteOrder->setMenuBar(menubar);
        statusbar = new QStatusBar(DeleteOrder);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        DeleteOrder->setStatusBar(statusbar);

        retranslateUi(DeleteOrder);

        QMetaObject::connectSlotsByName(DeleteOrder);
    } // setupUi

    void retranslateUi(QMainWindow *DeleteOrder)
    {
        DeleteOrder->setWindowTitle(QApplication::translate("DeleteOrder", "DeleteOrderForm", nullptr));
        ReturnButton_2->setText(QApplication::translate("DeleteOrder", "\320\237\320\276\320\262\320\265\321\200\320\275\321\203\321\202\320\270\321\201\321\217", nullptr));
        TableLabel->setText(QApplication::translate("DeleteOrder", "<html><head/><body><p><span style=\" font-size:14pt; color:#0f4703;\">\320\227\320\260\320\271\320\275\321\217\321\202\321\226 \321\201\321\202\320\276\320\273\320\270\320\272\320\270:</span></p></body></html>", nullptr));
        label->setText(QString());
        DeleteButton->setText(QApplication::translate("DeleteOrder", "\320\222\320\270\320\264\320\260\320\273\320\270\321\202\320\270", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DeleteOrder: public Ui_DeleteOrder {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELETEORDER_H
